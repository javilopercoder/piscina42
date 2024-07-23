/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalopez- <jalopez-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 21:55:48 by jalopez-          #+#    #+#             */
/*   Updated: 2024/07/23 22:33:18 by jalopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	calculate_total_length(int size, char **strs, char *sep)
{
	int	total_len;
	int	sep_len;
	int	i;

	total_len = 0;
	sep_len = ft_strlen (sep);
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size - 1)
			total_len += sep_len;
		i++;
	}
	return (total_len + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	char	*text;
	int		i;

	total_len = calculate_total_length(size, strs, sep);
	text = (char *)malloc(sizeof(char) * total_len);
	i = 0;
	if (!text)
		return (0);
	text[0] = '\0';
	while (i < size)
	{
		ft_strcat(text, strs[i]);
		if (i < size - 1)
			ft_strcat(text, sep);
		i++;
	}
	return (text);
}

/*#include <stdio.h>
int	main(void)
{
	char *strs[] = {"Hello", "world", "this", "is", "C"};
	char *sep = " ";
	char *result;

	result = ft_strjoin(5, strs, sep);
	printf("%s\n", result);
	free(result);

	return (0);
}*/
