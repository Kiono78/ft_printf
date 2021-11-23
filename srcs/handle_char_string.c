/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_char_string.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:51:15 by bterral           #+#    #+#             */
/*   Updated: 2021/11/23 11:25:41 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	handle_char(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	handle_string(char *str)
{
	int	len;

	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return(len);
}