/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlnikola <vlnikola@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 17:35:27 by vlnikola          #+#    #+#             */
/*   Updated: 2025/09/25 17:37:31 by vlnikola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	d;

	d = 48;
	while (d <= 57)
	{
		write(1, &d, 1);
		d++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return 0;
}
*/
