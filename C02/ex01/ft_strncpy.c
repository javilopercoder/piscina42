/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 20:07:50 by jalopez-          #+#    #+#             */
/*   Updated: 2024/07/07 21:11:55 by jalopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncpy(char *dest, char *scr, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (scr[i] != '\0' && i < n)
	{
		dest[i] = scr[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main()
{
	char scr[] = "Hello";
	char dest[] = "World1";
	char dest1[] = "World2";

	printf("%s", ft_strncpy(dest, scr, 3));
        printf("\n%s", strncpy(dest1, scr, 3));
        printf("\n%s", ft_strncpy(dest, scr, 5));
        printf("\n%s", strncpy(dest1, scr, 5));
        printf("\n%s", ft_strncpy(dest, scr, 7));
        printf("\n%s", strncpy(dest1, scr, 7));
}*/
