/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:51:46 by gurgaspa          #+#    #+#             */
/*   Updated: 2024/09/09 22:06:33 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	n;
	char	l;

	l = '9';
	n = '0';
	while (n <= l)
	{
		write (1, &n, 1);
		n++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
