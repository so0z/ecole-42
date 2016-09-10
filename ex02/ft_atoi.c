/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machive <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 20:49:50 by machive           #+#    #+#             */
/*   Updated: 2016/09/11 00:34:04 by machive          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_atoi(char *str)
{
	int		i;
	int		res;
	int		neg;

	i = 0;
	res = 0;
	neg = 1;
	while (*str)
	{
		if (*str == '-')
		{
			neg = -1;
			str++;
		}
		else if ((*str == '+') ||(*str == ' '))
		{
			str++;
		}
		else if (*str > 47 && *str < 58)
		{
			res = res * 10 + *str - 48;
			str++;
		}
		else
			return (0);
	}
		return (res * neg);
}

int		main(int argc, char **argv)
{

	argc = 3;
	if (argv[1] == 0 || argv[4] != 0)
		return (printf("%s", "Veuillez saisir entre un et trois arguments"));
	else
	{
		printf("%d", ft_atoi(argv[1]));
		printf("%s","," );
		printf("%d", ft_atoi(argv[2]));
		printf("%s","," );
		printf("%d", ft_atoi(argv[3]));
		return (0);
	}

	return (0);
}

