/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:08:40 by gurgaspa          #+#    #+#             */
/*   Updated: 2024/09/17 21:20:34 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("lowercase text = %d\n", ft_str_is_lowercase("asdjahdkas"));
	printf("in text are uppercase = %d\n", ft_str_is_lowercase("AAAAA"));
	printf("numbers = %d\n", ft_str_is_lowercase("5544"));
	printf("empty = %d\n", ft_str_is_lowercase(""));
	return (0);
}*/
