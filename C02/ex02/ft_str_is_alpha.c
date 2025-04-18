/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 22:47:02 by gurgaspa          #+#    #+#             */
/*   Updated: 2024/09/17 21:17:50 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if ((*str > 64 && *str < 91) || (*str > 96 && *str < 123))
		{
			str++;
		}
		else
			return (0);
	}
	return (1);
}
/*
int main(void)
{
	printf("numbers = %d\n", ft_str_is_alpha("5555"));
	printf("text = %d\n", ft_str_is_alpha("aasdasdd"));
	printf("numb. and text = %d\n", ft_str_is_alpha("as75"));
	printf("empty =  %d\n", ft_str_is_alpha(""));
	return (0);
}*/
