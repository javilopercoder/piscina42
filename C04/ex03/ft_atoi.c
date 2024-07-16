/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalopez- <jalopez-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:56:58 by jalopez-          #+#    #+#             */
/*   Updated: 2024/07/16 22:09:56 by jalopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\t' str[i] == '\v'))
		i++;
	sign = 1;
	while (str[i] != '\0' && (str[i]  == '-' || str[i] == '+'))
	{
		if  (str[i] == '-') 
			sign *= -1;
		i++;
	}
	nb = 0;
        while (str[i] != '\0' && str[i]  >= '0' && str[i] <= '9')
	{
		nb = nb *10 + str[i] - '0';
		i++;
	}
	return (nb * sign);
}
