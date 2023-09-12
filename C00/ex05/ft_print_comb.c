/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 21:14:27 by efranco-          #+#    #+#             */
/*   Updated: 2023/08/20 14:43:39 by efranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(int nb1, int nb2, int nb3)
{
	write (1, &nb1, 1);
	write (1, &nb2, 1);
	write (1, &nb3, 1);
	if (nb1 != '7')
		write (1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	nb1;
	int	nb2;
	int	nb3;	

	nb1 = '0';
	while (nb1 <= '7')
	{
		nb2 = nb1 + 1;
		while (nb2 <= '8')
		{
			nb3 = nb2 + 1;
			while (nb3 <= '9')
			{
				ft_print_number(nb1, nb2, nb3);
				nb3++;
			}
			nb2++;
		}
		nb1++;
	}
}
