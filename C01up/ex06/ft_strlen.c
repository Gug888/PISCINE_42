/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:55:08 by gurgaspa          #+#    #+#             */
/*   Updated: 2024/09/14 20:05:36 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	int	gumar;

	i = 0;
	gumar = 0;
	while (str[i] != '\0')
	{
		gumar++;
		i++;
	}
	return (gumar);
}
/*
int	main(void)
{
	char *text;
	int length;

	text = "Roombers";
	length = ft_strlen(text);
	printf("length is %d", length);
	return (0);
}*/
