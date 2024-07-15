/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalopez- <jalopez-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 22:20:29 by jalopez-          #+#    #+#             */
/*   Updated: 2024/07/15 22:30:49 by jalopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 0)
	{
		result *= nb * ft_recursive_factorial (nb - 1);
		nb -= 1;
	}
	if (nb < 0)
		return (0);
	return (resutl);
}

/*int	main(void)
{
	printf("%i", ft_recursive_factorial(9));
}*/
