/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:07:56 by bterral           #+#    #+#             */
/*   Updated: 2021/11/24 16:36:31 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static char	*ft_itoa_base(unsigned long long int nb, char *base);

static char	*ft_itoa_base(unsigned long long int nb, char *base)
{
	char						*str;
	unsigned long long int		tmp;
	int							base_len;
	int							size;

	base_len = ft_strlen(base);
	tmp = nb;
	size = 0;
	while (tmp > 0)
	{
		tmp = tmp / base_len;
		size++;
	}
	if (size == 0)
		size = 1;
	str = (char *)malloc(sizeof(str) * (size + 1));
	if (!str)
		return (NULL);
	str[size--] = '\0';
	while (size >= 0)
	{
		str[size--] = base[nb % base_len];
		nb /= base_len;
	}
	return (str);
}

int	handle_hexa(unsigned long long int ll_nb, char c)
{
	char			*output;
	int				length;
	unsigned int	u_nb;

	length = 0;
	u_nb = (unsigned int)ll_nb;
	if (c == 'x')
		output = ft_itoa_base(u_nb, "0123456789abcdef");
	else if (c == 'X')
		output = ft_itoa_base(u_nb, "0123456789ABCDEF");
	else
	{
		output = (char *)malloc(2);
		*output = '0';
		*(output + 1) = '\0';
	}
	ft_putstr_fd(output, 1);
	length += ft_strlen(output);
	free(output);
	return (length);
}

int	handle_pointer(unsigned long long int ll_nb)
{
	char			*output;
	int				length;

	length = 0;
	ft_putstr_fd("0x", 1);
	length = 2;
	if (ll_nb)
		output = ft_itoa_base(ll_nb, "0123456789abcdef");
	else
	{
		output = (char *)malloc(2);
		*output = '0';
		*(output + 1) = '\0';
	}
	ft_putstr_fd(output, 1);
	length += ft_strlen(output);
	free(output);
	return (length);
}
