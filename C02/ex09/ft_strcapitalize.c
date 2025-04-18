/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:09:09 by gurgaspa          #+#    #+#             */
/*   Updated: 2024/09/18 21:42:31 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	while (str[i] != '\0')
	{
		if (i > 0 && (str[i - 1] < '0' || str[i - 1] > '9')
			&& (str[i - 1] < 'A' || str[i - 1] > 'Z')
			&& (str[i - 1] < 'a' || str[i - 1] > 'z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] -32;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char	text[] = "salut, cent tu vasW ? 42moti qunte-de; tqu+et+un";
	printf("%s", ft_strcapitalize(text));
	return 0;
}*/
