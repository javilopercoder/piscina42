/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalopez- <jalopez-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:56:58 by jalopez-          #+#    #+#             */
/*   Updated: 2024/07/16 22:44:05 by jalopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v'))
		i++;
	sign = 1;
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	nb = 0;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb * sign);
}

int	main(void)
{
	char	str1[12];
	char	str2[12];
	char	str3[12];
	char	str4[12];
	char	str5[12];

	strcpy (str1, "	-123");
	strcpy (str2, "456";
	strcpy (str3[] = "	+92";
	strcpy (str4, "	42abc42";
	strcpy (str5, "abc";
	printf ("String: '%s' -> Integer: %d\n", str1, ft_atoi(str1));
	printf ("String: '%s' -> Integer: %d\n", str2, ft_atoi(str2));
	printf ("String: '%s' -> Integer: %d\n", str5, ft_atoi(str5));
	return (0);
}
