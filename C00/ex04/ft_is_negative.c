/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:05:18 by jalopez-          #+#    #+#             */
/*   Updated: 2024/07/04 22:31:10 by jalopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	z;
	char	p;

	z = 'N';
	p = 'P';
	if (n < 0)
	{
		write(1, &z, 1);
	}
	else
	{
		write(1, &p, 1);
	}
}

/*int main(){
	ft_is_negative(5);
	return 0;
}*/
