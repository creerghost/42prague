/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlnikola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:44:22 by vlnikola          #+#    #+#             */
/*   Updated: 2025/10/09 14:53:47 by vlnikola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

int     main(int argc, char **argv)
{
        int     res;
        int     inp;

        if (argc != 2)
                return (1);
        inp = atoi(argv[1]);
        res = ft_recursive_factorial(inp);
        printf("%i", res);
        return (0);
}
