/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalopez- <jalopez-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 23:13:35 by jalopez-          #+#    #+#             */
/*   Updated: 2024/07/15 23:21:25 by jalopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	index;
	long	a;

	a = nb;
	if (a <= 0)
		return (0);
	if (a == 1)
		return (1);
	index = 2;
	if (a >= 2)
	{
		while (index * index <= a)
		{
			if (index * index == a)
				return (index);
			index++;
		}
	}
	return (0);
}

/*int	main(void)
{
	printf("%d", ft_sqrt(25));
}*/
