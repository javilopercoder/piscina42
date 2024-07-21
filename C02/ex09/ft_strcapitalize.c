/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalopez- <jalopez-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 08:03:30 by jalopez-          #+#    #+#             */
/*   Updated: 2024/07/21 08:37:06 by jalopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	i1;

	i = 0;
	i1 = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i1 == 1)
			{
				str[i] -= 32;
				i1 = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			i1 = 0;
		else
			i1 = 1;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux;";
	char str1[] = "diujndfvon,odficj,dc dsfovij?kl43lo+dd-sdkcdj*dc$sdc";
	printf("%s\n", ft_strcapitalize(str));
	printf("%s\n", ft_strcapitalize(str1));
	return 0;
}*/
