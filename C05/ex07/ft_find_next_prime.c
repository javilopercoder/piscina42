/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalopez- <jalopez-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:07:51 by jalopez-          #+#    #+#             */
/*   Updated: 2024/07/16 23:37:33 by jalopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i += 1;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	nb++;
	while (1)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_find_next_prime(9));
	printf("%d\n", ft_find_next_prime(-8));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(2147483646));
	printf("%d\n", ft_find_next_prime(2147483647));
	printf("%d", ft_find_next_prime(-2147483648));
}*/
