/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_figures.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <bterral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:59:52 by bterral           #+#    #+#             */
/*   Updated: 2021/11/23 18:01:27 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	handle_putnbr(int nb)
{
	char	*output;
	
	output = ft_itoa(nb);
	ft_putstr_fd(output, 1);
	free(output);
	return (ft_strlen(output));
}