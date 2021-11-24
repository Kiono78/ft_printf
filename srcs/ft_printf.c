/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:45:24 by bterral           #+#    #+#             */
/*   Updated: 2021/11/24 16:14:08 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	get_print_size(char *str, va_list args)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] && valid_format(str[i + 1]))
		{
			count += handle_variable(str[i + 1], args);
			i = i + 2;
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			i++;
			count++;
		}
	}
	return (count);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	char	*str;
	int		size;

	str = ft_strdup(input);
	va_start(args, input);
	size = get_print_size(str, args);
	va_end(args);
	free(str);
	return (size);
}
