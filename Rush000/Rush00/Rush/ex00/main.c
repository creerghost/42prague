/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltvrdik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 19:50:12 by ltvrdik           #+#    #+#             */
/*   Updated: 2025/09/26 20:28:22 by ltvrdik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int width, int height);

int	main(void)
{
	int	width;
	int	heigth;
	int	ch;

	width = 0;
	while (width <= 6)
	{
		heigth = 0;
		while (heigth <= 6)
		{
			ch = '0' + width;
			write(1, &ch, 1);
			write(1, "x", 1);
			ch = '0' + heigth;
			write(1, &ch, 1);
			write(1, "\n", 1);
			rush(width, heigth);
			write(1, "\n", 1);
			heigth += 2;
		}
		width += 2;
	}
	return (0);
}
