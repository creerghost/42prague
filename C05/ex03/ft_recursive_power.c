/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlnikola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 14:54:21 by vlnikola          #+#    #+#             */
/*   Updated: 2025/10/09 15:09:48 by vlnikola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power >= 1)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (nb);
}

int	main(void)
{
	int	nb;
	int	power;

	nb = 5;
	power = 2;
	printf("%i", ft_recursive_power(nb, power));
	return (0);
}
