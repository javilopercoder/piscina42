/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:42:58 by jalopez-          #+#    #+#             */
/*   Updated: 2024/07/08 15:43:11 by jalopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main()
{
	printf("%d", ft_str_is_uppercase("ABCDEFGH"));
	printf("\n%d", ft_str_is_uppercase("ABCDEFGHaI"));
	printf("\n%d", ft_str_is_uppercase("-_134556ABCDEFGaH67"));
}*/
