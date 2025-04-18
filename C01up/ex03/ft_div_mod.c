/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:29:24 by gurgaspa          #+#    #+#             */
/*   Updated: 2024/09/14 20:07:10 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	d;
	int	c;
	int	div;
	int	mod;

	d = 15;
	c = 4;
	ft_div_mod(d, c, &div, &mod);
	printf("div = %d and  mod = %d", div, mod);
}*/
