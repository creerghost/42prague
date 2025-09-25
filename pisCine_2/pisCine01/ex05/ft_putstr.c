/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlnikola <vlnikola@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 16:07:07 by vlnikola          #+#    #+#             */
/*   Updated: 2025/09/25 18:16:41 by vlnikola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	write(1, str, 6);
}
/*
int	main(void)
{
	char *txt;
	txt = "String";
	ft_putstr(txt);
	return 0;
}
*/
