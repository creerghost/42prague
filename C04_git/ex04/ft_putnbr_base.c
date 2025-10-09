/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlnikola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:27:48 by vlnikola          #+#    #+#             */
/*   Updated: 2025/10/09 13:11:10 by vlnikola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		i++;
	}
	return (i);
}

int	check_base(int base)
{
	if (base == 10 || base == 10 || base == 8 || base == 2)
		return(1);
	return (0);
}

void	ft_putnbr_rec(int nbr, int base)
{
	char	c;
	if (nbr >= base)
		ft_putnbr_rec(nbr / base, base);
	c = (;
	write (1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	tbase;
	tbase = ft_strlen(base);
	if (check_base(tbase))
	{
		ft_putnbr_rec(nbr, tbase);
	}
	else
		return;
}

int	main(void)
{
	int	nbr;
	char	*base = "0123456789";
	ft_putnbr_base(nbr, base);
}
