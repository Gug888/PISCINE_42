/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:42:57 by gurgaspa          #+#    #+#             */
/*   Updated: 2024/09/14 20:07:45 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int	*a, int	*b)
{
	int	sw;

	sw = *a;
	*a = *b;
	*b = sw;
}
/*
int	main(void)
{
	int	first;
	int	second;

	first = 15;
	second = 25;
	ft_swap(&first, &second);
	printf("a = %d and b = %d", first, second);
}*/
