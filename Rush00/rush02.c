/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machirin <machirin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 15:57:18 by machirin          #+#    #+#             */
/*   Updated: 2024/07/07 15:59:33 by machirin         ###   ########.fr       */
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
				ft_print(x, 'A', 'B', 'A');
			else if (line_count == y)
				ft_print(x, 'C', 'B', 'C');
			else
				ft_print(x, 'B', ' ', 'B');
			line_count++;
		}
	}
}
