/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:42:35 by gurgaspa          #+#    #+#             */
/*   Updated: 2024/09/25 22:40:42 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	i;
	int	sign;

	result = 0;
	i = 0;
	sign = 1;
	while (str[i] == '-' || str[i] == '+' || str[i] == ' ' || str[i] == '\n' \
			|| str[i] == '\t' || str[i] == '\f' || str[i] == '\r' || \
			str[i] == '\v')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] - '0' > 0 && str[i] - '0' <= 9)
			result = result * 10 + str[i] - '0';
		else if (!(str[i] - '0' >= 0 && str[i] - '0' <= 9))
			break ;
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi(" -- -+ +-155sad455as"));
	return (0);
}*/
