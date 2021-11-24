/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_figures.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:59:52 by bterral           #+#    #+#             */
/*   Updated: 2021/11/24 16:15:29 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static size_t	get_itoa_length(unsigned int n);
static char		*ft_itoa_unsigned(unsigned int n);

static size_t	get_itoa_length(unsigned int n)
{
	size_t			count;

	count = 0;
	while ((n / 10) > 0)
	{
		count++;
		n = n / 10;
	}
	count++;
	return (count);
}

static char	*ft_itoa_unsigned(unsigned int n)
{
	char			*str;
	size_t			str_len;

	str_len = get_itoa_length(n);
	str = (char *)malloc(sizeof(*str) * (str_len + 1));
	if (str == NULL)
		return (NULL);
	str[str_len--] = '\0';
	if (n == 0)
		str[str_len] = '0';
	while (n != 0)
	{
		str[str_len--] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}

int	handle_putnbr(int nb)
{
	char	*output;

	output = ft_itoa(nb);
	ft_putstr_fd(output, 1);
	free(output);
	return (ft_strlen(output));
}

int	handle_unsignednbr(unsigned int nb)
{
	char	*output;

	output = ft_itoa_unsigned(nb);
	ft_putstr_fd(output, 1);
	free(output);
	return (ft_strlen(output));
}
