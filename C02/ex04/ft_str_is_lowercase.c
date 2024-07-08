/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:42:09 by jalopez-          #+#    #+#             */
/*   Updated: 2024/07/08 18:21:26 by jalopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main()
{
	printf("%d", ft_str_is_lowercase("abcdefghijkl"));
	printf("\n%d", ft_str_is_lowercase("abcAdefghijkl"));
	printf("\n%d", ft_str_is_lowercase("-_134556efSghij67"));
}*/
