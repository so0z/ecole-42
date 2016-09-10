/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machive <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 13:04:50 by machive           #+#    #+#             */
/*   Updated: 2016/09/10 14:20:21 by machive          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}

	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}

	if (nb > 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int		main(void)
{
	ft_putnbr(-1458745);
	return (0);
}

