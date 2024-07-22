/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machirin <machirin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 15:17:29 by slargo-b          #+#    #+#             */
/*   Updated: 2024/07/07 15:59:49 by machirin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(int len, char begin, char midle, char end)
{
	int	letter_count;

	letter_count = 1;
	while (letter_count <= len)
	{
		if (letter_count == 1)
			ft_putchar(begin);
		else if (letter_count == len)
			ft_putchar(end);
		else
			ft_putchar(midle);
		letter_count++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	line_count;

	line_count = 1;
	if (x >= 1 && y >= 1)
	{
		while (line_count <= y)
		{
			if (line_count == 1)
				ft_print(x, 'A', 'B', 'C');
			else if (line_count == y)
				ft_print(x, 'C', 'B', 'A');
			else
				ft_print(x, 'B', ' ', 'B');
			line_count++;
		}
	}
}
