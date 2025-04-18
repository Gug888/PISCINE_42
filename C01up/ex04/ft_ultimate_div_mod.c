/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:49:59 by gurgaspa          #+#    #+#             */
/*   Updated: 2024/09/14 20:07:25 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}
/*
int	main(void)
{
	int	d;
	int	c;

	d = 23;
	c = 10;
	ft_ultimate_div_mod(&d, &c);
	printf("d = %d and c = %d", d, c);
}*/
