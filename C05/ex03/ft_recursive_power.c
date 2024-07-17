/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalopez- <jalopez-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 22:50:09 by jalopez-          #+#    #+#             */
/*   Updated: 2024/07/16 23:28:36 by jalopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power > 1)
		return (nb * ft_recursive_power(nb, (power -1)));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (result);
}

/*int   main(void)
{
        printf("%i", ft_recursive_power(3, 3));
}*/
