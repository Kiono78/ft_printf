/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:52:03 by bterral           #+#    #+#             */
/*   Updated: 2021/11/23 18:08:45 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
#include "./includes/ft_printf.h"

int main(int argc, char *argv[])
{
	char i = '6';
	char *str = "hello";
	void *test;

	test = malloc(sizeof(void) * 2);
	int nb = 856;
	ft_printf("ft_printf: %p %p \n", 0, 98);
	printf(" %p %p \n", 56, 98);

	// printf("sizeof unsigned long int: %lu", sizeof(void *));
	return (0);
}