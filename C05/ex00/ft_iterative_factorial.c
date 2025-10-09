/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlnikola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:13:29 by vlnikola          #+#    #+#             */
/*   Updated: 2025/10/09 13:29:44 by vlnikola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	tmp;

	i = nb - 1;
	tmp = 1;

	while (i > 1)
	{
		tmp = tmp * i;
		i--;
	}
	tmp = nb * tmp;
	return (tmp);
}

int	main(int argc, char **argv)
{
	int	res;
	int	inp;

	if (argc != 2)
		return (1);
	inp = atoi(argv[1]);
	res = ft_iterative_factorial(inp);
	printf("%i", res);
	return (0);
}
