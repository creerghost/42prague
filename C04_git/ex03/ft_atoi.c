/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlnikola <vlnikola@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:00:12 by vlnikola          #+#    #+#             */
/*   Updated: 2025/10/08 19:14:37 by vlnikola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	convert(char c)
{
       return(c	+ '0');
}

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	count_minus;
	int	nb;

	i = 0;
	j = 0;
	count_minus = 0;
	nb = 0;
	if (str[i] == '\0')
		return (NULL);
	while (str[i])
	{
		while (!((str[i] >= '0') && (str[i] <= '9')))
		{
			if (is_space(str[i]) || (str[i] == '+'))
				i++;
			else if (str[i] == '-')
				count_minus++;
			else
				return (result);
			i++;
			nb = 10 * nb + (str[i] + '0');
		}
		i++;
	}
	
	while (str_cp[j])
	{

