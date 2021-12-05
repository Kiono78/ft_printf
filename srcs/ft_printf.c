/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:45:24 by bterral           #+#    #+#             */
/*   Updated: 2021/12/05 12:05:14 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	handle_variable(char c, va_list	args)
{
	int	len;

	if (c == 'c')
		len = handle_char(va_arg(args, int));
	else if (c == 's')
		len = handle_string(va_arg(args, char *));
	else if (c == 'x')
		len = ft_putnbr_base_uint(va_arg(args, unsigned int), LOWER);
	else if (c == 'X')
		len = ft_putnbr_base_uint(va_arg(args, unsigned int), UPPER);
	else if (c == 'p')
	{
		len = 2;
		ft_putstr_fd("0x", 1);
		len += ft_putnbr_base_ll(va_arg(args, unsigned long long), LOWER);
	}
	else if (c == 'd' || c == 'i')
		len = handle_putint(va_arg(args, int));
	else if (c == 'u')
		len = handle_putunsignedint(va_arg(args, unsigned int));
	else if (c == '%' || c == '\n')
		len = handle_char(c);
	else
		len = 0;
	return (len);
}

int	get_print_size(const char *str, va_list args)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += handle_variable(str[i], args);
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			count++;
		}
		i++;
	}
	return (count);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		size;

	va_start(args, input);
	size = get_print_size(input, args);
	va_end(args);
	return (size);
}
