/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:42:25 by fbanzo-s          #+#    #+#             */
/*   Updated: 2024/11/02 16:00:20 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0
			|| ((str[i - 1] < 'a' || str[i - 1] > 'z')
				&& (str[i - 1] < 'A' || str[i - 1] > 'Z')
				&& (str[i - 1] < '0' || str[i - 1] > '9')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= ('a' - 'A');
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += ('a' - 'A');
		}
		i++;
	}
	return (str);
}
/*int	main(void)
{
	char	message[] = "salut, comment? 42mots quarante-deux; cinquante+et+un";
	//printf("%s", ft_strcapitalize(message));
	return 0;
}*/
