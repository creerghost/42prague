/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlnikola <vlnikola@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 16:55:15 by vlnikola          #+#    #+#             */
/*   Updated: 2025/09/27 17:58:29 by vlnikola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* height is responsible for number of lines and line type */
/* wigth is responsible for line structure*/
void	ft_putchar(char c);

void	rush(int wigth, int height)
{
	int count;
	
	count = 0;
	if count == 0
		print_top_line(wigth);
	if count == height - 1
		print_low_line(wigth);
	else
		print_middle_line(wigth);
}
