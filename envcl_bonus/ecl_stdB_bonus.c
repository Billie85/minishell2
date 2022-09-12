/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ecl_stdB_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blyu <blyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 22:01:12 by blyu              #+#    #+#             */
/*   Updated: 2022/09/10 22:01:13 by blyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell_bonus.h"
#include "envcl_bonus.h"

char	*ecl_std5(char	*cl, size_t	B, size_t i)
{
	char	*r;

	r = ecl_dq(cl + i + 1, B + i + 1);
	if (!r || !*r)
		return (r);
	r[B + i] = '"';
	if (i)
		ft_memcpy(r + B, cl, i);
	return (r);
}

char	*ecl_std6(char	*cl, size_t	B, size_t i)
{
	char	*r;

	r = ecl_sq(cl + i + 1, B + i + 1);
	if (!r || !*r)
		return (r);
	r[B + i] = '\'';
	if (i)
		ft_memcpy(r + B, cl, i);
	return (r);
}
