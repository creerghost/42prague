# Skyscrapers 4×4 Project Explanation

## 1. `main.c`

```c
int	main(int argc, char **argv)
```

* Checks that **exactly one string** with hints is provided (`argv[1]`).
* Calls `parse_input` to convert the input string into an array `hints[16]`.
* Initializes an empty grid `grid[4][4]` with zeros.
* Calls the recursive `solve` function to find a solution.
* If a solution is found → prints the grid using `print_grid`.
* If no solution exists → prints `"No solution"`.

Error messages (invalid input) are displayed using `ft_putstr("Error\n")`.

---

## 2. `utils.c`

### **ft_putchar and ft_putstr**

```c
void	ft_putchar(char c)
void	ft_putstr(char *s)
```

* Simple functions to output a single character or a string using `write`.
* Used for all messages and printing the grid.

---

### **parse_input**

```c
int	*parse_input(char *str)
```

* Reads the string character by character.
* Only takes digits `'1'..'4'` and converts them into numbers (`'1'` → 1).
* Creates an array `hints[16]`.
* If the number of digits is not exactly 16 → returns `0` (error).

Example:

```
"4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" → [4,3,2,1,1,2,2,2,4,3,2,1,1,2,2,2]
```

---

### **print_grid**

```c
void	print_grid(int grid[4][4])
```

* Iterates over each row and column.
* Prints digits with **one space between them**.
* Adds a newline `\n` at the end of each row.

Example output:

```
1 2 3 4
2 3 4 1
3 4 1 2
4 1 2 3
```

---

## 3. `solve.c`

### **check_row**

```c
int	check_row(int grid[4][4], int row, int col, int num)
```

* Checks if it is allowed to place the number `num` in cell `(row, col)`.
* Rule: the number **must not repeat in the same row or column**.

---

### **count_visible**

```c
int	count_visible(int *line)
```

* Counts how many "buildings" are visible along a line (row or column).
* A building is visible if it is **taller than all previous buildings** in the line.

Example:

```
line = [1, 3, 4, 2] → count_visible = 3
```

---

### **check_views**

```c
int	check_views(int grid[4][4], int *hints)
```

* Checks whether the current grid matches all hints.
* Uses the **rush01 input order**:

```
hints[0..3]   = top (columns 1-4)
hints[4..7]   = bottom (columns 1-4)
hints[8..11]  = left (rows 1-4)
hints[12..15] = right (rows 1-4)
```

* If any hint is not satisfied → returns 0.
* If all hints are satisfied → returns 1.

---

### **solve (recursive backtracking)**

```c
int	solve(int grid[4][4], int hints[16], int pos)
```

* `pos` = current position in the grid (0..15).
* Calculates `row` and `col` from `pos`.
* If `pos == 16` → grid is fully filled → calls `check_views`.
* For each number `num = 1..4`:

  * Checks with `check_row` if the number can be placed.
  * If allowed → place it and recursively call `solve` for the next position.
  * If a solution is found → return 1.
  * Otherwise → undo placement (`grid[row][col] = 0`) and try next number.

This is a **classic backtracking algorithm**.

---

## 4. How It Works Together

1. `main` → gets input → parses into `hints[16]`.
2. Initializes empty `grid[4][4]`.
3. `solve` → recursively tries all numbers (1..4) for each cell.
4. Once the grid is filled → `check_views` checks all hints.
5. If a solution exists → `print_grid` prints the solution.
6. If there is an error or no solution → messages are printed with `ft_putstr`.

---

# Purpose of `malloc` in Skyscrapers 4×4

## 1. What `malloc` Does

In the program, we use:

```c
int *hints = (int *)malloc(16 * sizeof(int));
```

* `malloc` stands for **memory allocation**.
* It **reserves a block of memory** on the heap at runtime.
* Returns a pointer to the allocated memory, which can be used like an array.
* Unlike local arrays (on the stack), **heap memory persists until you free it**.

---

## 2. Why We Need It Here

* The input hints come from `argv[1]`.
* Using `malloc` allows us to:

  1. **Dynamically allocate memory for 16 integers**.
  2. Pass this array to functions like `solve()` and `check_views()`.
  3. Keep the memory alive for the entire program until `free(hints)` is called.

---

## 3. Alternative Approach

We could have declared a static array:

```c
int hints[16];
```

* This would also work because the size is fixed.
* Using `malloc` demonstrates **dynamic memory allocation**, which is often required in school projects.

---

## 4. Key Points

* Always **free the memory** after use:

```c
free(hints);
```

* `malloc` returns a pointer; elements are accessed like `hints[i]`.
* Memory allocated by `malloc` is on the **heap**, while local arrays live on the **stack**.

---

## ✅ Summary

In this program, `malloc` is used to **store the 16 input hints dynamically**, allowing:

* Flexible memory management
* Passing the array between functions
* Demonstrating dynamic memory allocation in C

---
