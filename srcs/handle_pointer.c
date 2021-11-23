/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:07:56 by bterral           #+#    #+#             */
/*   Updated: 2021/11/23 18:08:32 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*ft_itoa_base(unsigned long long int nb, char *base)
{
	char 						*str;
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
	str = (char *)malloc(sizeof(str) * (size + 1));
	if (!str)
		return (NULL);
	str[size--] = '\0';
	while (size >= 0)
	{
		str[size] = base[nb % base_len];
		nb /= base_len;
		size--;
	}
	return (str);
}

int	handle_pointer(unsigned long long int address)
{
	char	*output;

	ft_putstr_fd("0x", 1);
	if (address)
		output = ft_itoa_base(address, "0123456789abcdef");
	else
	{
		output = (char *)malloc(2);
		*output = '0';
		*(output + 1) = '\0';
	}
	ft_putstr_fd(output, 1);
	free(output);
	return (ft_strlen(output));
}