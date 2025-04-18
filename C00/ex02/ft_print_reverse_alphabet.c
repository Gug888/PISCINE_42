/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:03:26 by gurgaspa          #+#    #+#             */
/*   Updated: 2024/09/09 22:05:20 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	b;

	b = 'z';
	while (b >= 'a')
	{
		write(1, &b, 1);
		b--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/
