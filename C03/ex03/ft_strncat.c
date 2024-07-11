/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalopez- <jalopez-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 19:59:49 by jalopez-          #+#    #+#             */
/*   Updated: 2024/07/11 20:34:16 by jalopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
	{
		dest [i + j] = src [j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*int	main()
{
	char	src[] = " perdido y ahora tú también";
	char	dest[20] = "He";
	printf("%s", ft_strncat(dest, src, 8));
}*/
