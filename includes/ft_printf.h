/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:42:06 by bterral           #+#    #+#             */
/*   Updated: 2021/12/05 11:58:49 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <limits.h>

# define UPPER "0123456789ABCDEF"
# define LOWER "0123456789abcdef"

int		ft_printf(const char *intput, ...);
int		get_print_size(const char *str, va_list args);
int		handle_variable(char c, va_list	args);
int		handle_char(char c);
int		handle_string(char *str);
int		handle_putint(int nb);
int		handle_putunsignedint(unsigned int nb);
int		ft_putnbr_base_ll(unsigned long long nbr, char *base);
int		ft_putnbr_base_uint(unsigned int nbr, char *base);

#endif 
