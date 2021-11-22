/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:52:03 by bterral           #+#    #+#             */
/*   Updated: 2021/11/22 16:06:55 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
#include "ft_printf.h"

int main(int argc, char *argv[])
{
	char i = '6';
	// printf("hello %d\n", i);
	// write(1, &i, 1);
	printf("ft_printf: %d\n\n", ft_printf("test"));
	ft_printf("test %q");
	return (0);
}