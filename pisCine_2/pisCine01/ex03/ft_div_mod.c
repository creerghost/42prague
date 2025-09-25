/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlnikola <vlnikola@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 14:34:37 by vlnikola          #+#    #+#             */
/*   Updated: 2025/09/25 18:10:31 by vlnikola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int num1;
	int num2;
	int div0;
	int mod0;
	
	num1 = 5050;
	num2 = 100;
	div0 = 0;
	mod0 = 0;

	ft_div_mod(num1, num2, &div0, &mod0);
	write(1,&div0,1);
	write(1,&mod0,1);

	return 0;
}
*/
