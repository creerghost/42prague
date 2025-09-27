/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltvrdik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 20:10:23 by ltvrdik           #+#    #+#             */
/*   Updated: 2025/09/26 20:10:23 by ltvrdik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(void)
{
}

void	print_line(const char *thema, int width)
{
	int	w;

	if (width > 0)
	{
		write(1, &thema[0], 1);
	}
	w = width - 2;
	while (w > 0)
	{
		write(1, &thema[1], 1);
		w--;
	}
	if (width > 1)
	{
		write(1, &thema[2], 1);
	}
	write(1, "\n", 1);
}

void	print_top(const char *thema, int width, int heigth)
{
	if (heigth > 0)
	{
		print_line(&thema[0], width);
	}
}

void	print_middle(const char *thema, int width, int heigth)
{
	int	h;

	h = heigth - 2;
	while (h > 0)
	{
		print_line(thema + 3, width);
		h--;
	}
}

void	print_bottom(const char *thema, int width, int heigth)
{
	if (heigth > 1)
	{
		print_line(thema + 6, width);
	}
}
