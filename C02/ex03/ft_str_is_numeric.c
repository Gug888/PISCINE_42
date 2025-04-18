/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:11:22 by gurgaspa          #+#    #+#             */
/*   Updated: 2024/09/18 16:27:25 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int main(void)
{
	printf("Test 1 (12345): %d\n", ft_str_is_numeric("12345")); // print 1
    printf("Test 2 (abc): %d\n", ft_str_is_numeric("abc")); //  print 0
    printf("Test 3 (123a): %d\n", ft_str_is_numeric("123a")); //  print 0
    printf("Test 4 (empty): %d\n", ft_str_is_numeric("")); // print 1
	return (0);
}*/
