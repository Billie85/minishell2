/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   as_stdB.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blyu <blyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 21:57:54 by blyu              #+#    #+#             */
/*   Updated: 2022/09/10 21:57:55 by blyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"
#include "asterisk.h"

size_t	as_std_aslen(char *cl)
{
	size_t	i;

	i = 0;
	while (cl[i] && cl[i] != '*' && cl[i] != ' ')
	{
		if (cl[i] == '"')
		{
			i++;
			while (cl[i] != '"')
				i++;
			i++;
		}
		else if (cl[i] == '\'')
		{
			i++;
			while (cl[i] != '\'')
				i++;
			i++;
		}
		else if (cl[i] == '\\')
			i += 2;
		else
			i++;
	}
	return (i);
}
