/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:23:02 by gurgaspa          #+#    #+#             */
/*   Updated: 2024/09/19 16:23:05 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int	main(void)
{
	printf ("%d\n", ft_strcmp("hello", "hello"));
	printf ("%d\n", ft_strcmp("hello", "helloasdadaasd"));
	printf ("%d\n", ft_strcmp("helloiasda", "hello"));
	return (0);
}*/
