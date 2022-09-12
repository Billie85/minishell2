/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bul_echo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blyu <blyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 21:58:44 by blyu              #+#    #+#             */
/*   Updated: 2022/09/10 21:58:45 by blyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int	is_opn(char *s);

int	bul_echo(int argc, char *argv[])
{
	size_t	i;
	int		nop;

	if (argc == 1)
		return (printf("\n") * 0);
	i = 1;
	nop = 0;
	while (argv[i] && is_opn(argv[i]))
	{
		nop = 1;
		i++;
	}
	while ((int)i < argc)
	{
		printf("%s", argv[i]);
		i++;
		if ((int)i < argc)
			printf(" ");
	}
	if (!nop)
		printf("\n");
	return (0);
}

int	is_opn(char *s)
{
	if (ft_strncmp(s, "-n", 2))
		return (0);
	s++;
	while (*s == 'n')
		s++;
	if (!(*s))
		return (1);
	return (0);
}
