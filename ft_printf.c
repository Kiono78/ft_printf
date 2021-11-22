/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:45:24 by bterral           #+#    #+#             */
/*   Updated: 2021/11/22 16:31:21 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

int	get_replace_length(char *str)
{
	int	i;

	if ()
}

int	get_print_size(char *str, va_list args)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] && valid_format(str[i + 1])) // not sure it works at EOL
		{
			count += get_replace_length(&str[i], va_arg());
			printf("valid identifier");
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