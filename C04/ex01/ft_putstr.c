/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalopez- <jalopez-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:46:38 by jalopez-          #+#    #+#             */
/*   Updated: 2024/07/15 18:19:29 by jalopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != ('\0'))
	{
		write (1, &str[i], 1);
		i++;
	}
}

/*int	main()
{
	ft_putstr("Just keep swimming");
}*/
