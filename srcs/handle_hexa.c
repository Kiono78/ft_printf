/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_hexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:07:56 by bterral           #+#    #+#             */
/*   Updated: 2021/12/05 11:32:02 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr_base_ll(unsigned long long nbr, char *base)
{
	unsigned long long	size;
	int					count;

	count = 0;
	size = (unsigned long int)ft_strlen(base);
	if (nbr >= size)
	{
		count += ft_putnbr_base_ll(nbr / size, base);
		nbr = nbr % size;
	}
	ft_putchar_fd(base[nbr], 1);
	count++;
	return (count);
}

int	ft_putnbr_base_uint(unsigned int nbr, char *base)
{
	unsigned int	size;
	int				count;

	count = 0;
	size = (unsigned long int)ft_strlen(base);
	if (nbr >= size)
	{
		count += ft_putnbr_base_uint(nbr / size, base);
		nbr = nbr % size;
	}
	ft_putchar_fd(base[nbr], 1);
	count++;
	return (count);
}
