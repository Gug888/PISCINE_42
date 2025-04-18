/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 21:59:57 by gurgaspa          #+#    #+#             */
/*   Updated: 2024/09/14 22:19:38 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	swep;
	int	i;
	int	j;

	i = 0;
	j = size -1;
	while (i < j)
	{
		swep = tab[i];
		tab[i] = tab[j];
		tab[j] = swep;
		i++;
		j--;
	}
}

/*
int	main(void)
{
	int tas[] = {1, 2, 3, 4, 5};
	int size = sizeof(tas) / sizeof(tas[0]);
ft_rev_int_tab(tas,size);
	for (int i = 0; i< size; i++)
	{
		printf("%d", tas[i]);
	}
	return 0;
}*/
