/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 21:32:26 by jalopez-          #+#    #+#             */
/*   Updated: 2024/07/07 21:41:45 by jalopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str [i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/*int	main()
{
	printf("%d", ft_str_is_alpha("0123456"));
	printf("\n%d", ft_str_is_alpha("0123h456"));
	printf("\n%d", ft_str_is_alpha("-_-0123456789abcd98765"));
}*/
