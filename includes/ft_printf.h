/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:42:06 by bterral           #+#    #+#             */
/*   Updated: 2021/11/23 17:53:48 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>


#include <stdio.h>

int		ft_printf(const char *intput, ...);
int		get_print_size(char *str, va_list args);
int		valid_format(char c);
int 	handle_variable(char c, va_list	args);
int		handle_char(char c);
int		handle_string(char *str);
int		handle_putnbr(int nb);
char	*ft_itoa_base(unsigned long long int nb, char	*base);
int		handle_pointer(unsigned long long int address);

#endif
