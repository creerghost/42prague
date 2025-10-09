/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlnikola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:02:41 by vlnikola          #+#    #+#             */
/*   Updated: 2025/10/09 15:09:21 by vlnikola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	while (power > 1)
	{
		nb *= nb;
		power--;
	}
	return (nb);
}
int	main(void)
{
	int	nb;
	int	power;

	nb = 5;
	power = 2;

	printf("%i", ft_iterative_power(nb, power));
	return (0);
}
