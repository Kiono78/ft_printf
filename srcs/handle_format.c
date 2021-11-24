/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:49:25 by bterral           #+#    #+#             */
/*   Updated: 2021/11/24 16:33:45 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	valid_format(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' \
		|| c == 'u' || c == 'x' || c == '%' || c == 'X')
	{
		return (1);
	}
	else
		return (0);
}

int	handle_variable(char c, va_list	args)
{
	int	len;

	if (c == 'c')
		len = handle_char(va_arg(args, int));
	else if (c == 's')
		len = handle_string(va_arg(args, char *));
	else if (c == 'p')
		len = handle_pointer(va_arg(args, unsigned long long int));
	else if (c == 'x' || c == 'X')
		len = handle_hexa(va_arg(args, unsigned long long int), c);
	else if (c == 'd' || c == 'i')
		len = handle_putnbr(va_arg(args, int));
	else if (c == 'u')
		len = handle_unsignednbr(va_arg(args, unsigned int));
	else if (c == '%')
	{
		ft_putchar_fd('%', 1);
		len = 1;
	}
	else
		len = 0;
	return (len);
}
