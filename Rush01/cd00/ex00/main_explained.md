# Explanation of the `solve` Function

## Function Signature

```c
int solve(int grid[4][4], int hints[16], int pos)
```

* **Purpose:** Fill the 4×4 grid using **backtracking** and check all Skyscrapers rules.
* **Parameters:**

  1. `grid[4][4]` → current state of the grid.
  2. `hints[16]` → array of hints (top, bottom, left, right).
  3. `pos` → current position in the grid (0..15).

---

## Step 1: Calculate Row and Column

```c
int row = pos / 4;
int col = pos % 4;
```

* `pos` represents the **current cell** in a linear way.
* `row = pos / 4` → determines the row index.
* `col = pos % 4` → determines the column index.

**Example:**

```
pos = 5
row = 5 / 4 = 1
col = 5 % 4 = 1
→ grid[1][1]
```

---

## Step 2: Base Case

```c
if (pos == 16)
    return (check_views(grid, hints));
```

* If `pos == 16`, all cells are filled.
* `check_views` validates whether the current grid **matches all the hints**.
* Returns `1` if the solution is valid, `0` if not.

---

## Step 3: Try Numbers 1 to 4

```c
int num = 1;
while (num <= 4)
{
    if (check_row(grid, row, col, num))
    {
        grid[row][col] = num;
        if (solve(grid, hints, pos + 1))
            return (1);
        grid[row][col] = 0; // backtrack
    }
    num++;
}
```

* Loop through numbers **1, 2, 3, 4**.
* `check_row` ensures the number **doesn’t repeat** in the same row or column.
* If valid:

  * Place the number in the grid.
  * Recursively solve the **next cell** (`pos + 1`).
  * If a solution is found → return 1.
  * Otherwise → **undo the placement** (`grid[row][col] = 0`) and try the next number.

---

## Step 4: Backtracking

* If **no numbers 1–4** can be placed in the current cell → return 0.
* This triggers **backtracking**, allowing the previous cell to try another number.
* Ensures **all combinations** are explored until a solution is found or all options are exhausted.
