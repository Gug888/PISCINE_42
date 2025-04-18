/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:55:05 by gurgaspa          #+#    #+#             */
/*   Updated: 2024/09/17 21:21:59 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (!(*str > 64 && *str < 91))
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
	printf("empty = %d\n", ft_str_is_uppercase(""));
	printf("lowercase = %d\n", ft_str_is_uppercase("adadassd"));
	printf("UPPERCASE = %d\n", ft_str_is_uppercase("ASDASJ"));
	printf("numbers = %d\n", ft_str_is_uppercase("4554"));
}*/
