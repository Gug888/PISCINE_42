/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:42:17 by gurgaspa          #+#    #+#             */
/*   Updated: 2024/09/18 16:39:10 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str > 31 && *str < 127))
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
	char ss = 128;
	printf("numbers,symbols,text = %d\n",ft_str_is_printable("as^&^*"));
    printf("null = %d\n", ft_str_is_printable(&ss));
	printf("empty = %d\n", ft_str_is_printable(""));
	return (0);
}*/
