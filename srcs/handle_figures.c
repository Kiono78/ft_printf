/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_figures.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 13:26:01 by bterral           #+#    #+#             */
/*   Updated: 2021/12/04 17:23:58 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	handle_putint(int nb)
{
	int			len;

	len = 0;
	if (nb == -2147483648)
		return (handle_string("-2147483648"));
	if (nb < 0)
	{
		len += handle_char('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		len += handle_putint(nb / 10);
		nb = nb % 10;
	}
	len += handle_char(nb + '0');
	return (len);
}

int	handle_putunsignedint(unsigned int nb)
{
	int			len;

	len = 0;
	if (nb > 9)
	{
		len += handle_putunsignedint(nb / 10);
		nb = nb % 10;
	}
	len += handle_char(nb + '0');
	return (len);
}
