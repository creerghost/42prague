/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlnikola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 10:46:33 by vlnikola          #+#    #+#             */
/*   Updated: 2025/10/08 18:43:12 by vlnikola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	*ft_reverse_int(int *r_arr, int len)
{
	int	i;
	int	tmp;
	
	i = 0;
	while(i < (len / 2))
	{
		tmp = r_arr[len - i - 1];
		r_arr[len - i - 1] = r_arr[i];
		r_arr[i] = tmp;
		i++;
	}
	return (r_arr);
}

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putint(int *arr, int len)
{
	int	i;
	
	i = 0;
	while (i < len)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
}
void	ft_putnbr(int nb)
{
	int	i;
	int	mod;
	int	r_arr[10];
	
	i = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	if (nb == 0)
	{
		ft_putchar('0');
		return;
	}
	while (nb > 0)
	{
		r_arr[i++] = nb % 10;
		nb = nb / 10;
	}
	ft_reverse_int(r_arr, i);
	ft_putint(r_arr, i);
}

int	main(int nb)
{
	nb = -2147483647;
	ft_putnbr(nb);
	return (0);
}
