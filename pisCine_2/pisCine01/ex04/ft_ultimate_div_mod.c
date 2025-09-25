/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlnikola <vlnikola@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 14:53:12 by vlnikola          #+#    #+#             */
/*   Updated: 2025/09/25 18:13:03 by vlnikola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	t;

	t = *a / *b;
	*b = *a % *b;
	*a = t;
}
/*
int 	main(void)
{
	int num1;
	int num2;

	num1 = 5050;
	num2 = 100;

	ft_ultimate_div_mod(&num1, &num2);

	write(1,&num1,1);
	write(1,&num2,1);

	return 0;
}
*/
