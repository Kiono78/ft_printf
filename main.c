/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:52:03 by bterral           #+#    #+#             */
/*   Updated: 2021/11/24 16:04:49 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
#include "./includes/ft_printf.h"
#include <limits.h>

int main(int argc, char *argv[])
{
	char i = '6';
	char *str = "hello";
	void *test;
	int	j;

	j = -2147483648;
	test = malloc(sizeof(void) * 2);
	int nb = 856;
	printf("%d\n", printf(" %X \n", -1));
	ft_printf("%d\n", ft_printf(" %X \n", -1));
	
	// printf("sizeof unsigned long int: %lu", sizeof(void *));
	return (0);
}
