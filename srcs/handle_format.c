/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:49:25 by bterral           #+#    #+#             */
/*   Updated: 2021/11/23 18:00:04 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	valid_format(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' \
		|| c == 'u' || c == 'x')
	{
		return (1);
	}
	else
		return (0);
}

int handle_variable(char c, va_list	args)
{
	int len;

	if (c == 'c')
		len = handle_char(va_arg(args, int));
	else if (c == 's')
		len = handle_string(va_arg(args, char *));
	else if (c == 'p')
		len = handle_pointer(va_arg(args, unsigned long long int));
	else if (c == 'd') // to be converted in base 10
		len = handle_putnbr(va_arg(args, int));
	else if (c == 'i')
		len = handle_putnbr(va_arg(args, int)); // I think it should not work the same way with figures in non decimal format
	else // dummy for tests
		len = 0;
	return (len);
}
