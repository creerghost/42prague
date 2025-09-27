/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltvrdik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 20:23:45 by ltvrdik           #+#    #+#             */
/*   Updated: 2025/09/26 20:23:45 by ltvrdik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_line(const char *thema, int width);
void	print_top(const char *thema, int width, int height);
void	print_middle(const char *thema, int width, int height);
void	print_bottom(const char *thema, int width, int height);

void	rush(int width, int height)
{
	const char	*thema = "o-o| |o-o";

	print_top(thema, width, height);
	print_middle(thema, width, height);
	print_bottom(thema, width, height);
}
