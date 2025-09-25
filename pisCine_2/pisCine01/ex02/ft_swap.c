/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlnikola <vlnikola@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 14:06:27 by vlnikola          #+#    #+#             */
/*   Updated: 2025/09/25 18:15:28 by vlnikola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	k;

	k = *a;
	*a = *b;
	*b = k;
}
/*
int 	main(void)
{
	int num1;
	int num2;

	num1 = 100;
	num2 = 101;

	write(1,&num1,1);
	write(1,&num2,1);

	ft_swap(&num1,&num2);

	write(1,&num1,1);
	write(1,&num2,1);

	return 0;
}
*/
