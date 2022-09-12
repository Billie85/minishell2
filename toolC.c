/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toolC.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blyu <blyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 22:08:14 by blyu              #+#    #+#             */
/*   Updated: 2022/09/10 22:08:15 by blyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	is_numustr(char *s)
{
	if (!(*s))
		return (0);
	if (*s == '-')
		s++;
	while (*s && ft_isdigit(*s))
		s++;
	if (!(*s))
		return (1);
	return (0);
}
