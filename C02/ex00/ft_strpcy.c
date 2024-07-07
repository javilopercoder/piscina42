/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpcy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 19:18:52 by jalopez-          #+#    #+#             */
/*   Updated: 2024/07/07 19:56:47 by jalopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main()
{
	char src[] = "Hello";
	char src1[] = "World";
	char dest[] = "Hola";
	char dest1[] = "Mundo";
	printf("%s", ft_strcpy(dest, src));
        printf("\n%s", ft_strcpy(dest1, src1));
}*/
