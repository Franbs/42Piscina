/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:42:28 by fbanzo-s          #+#    #+#             */
/*   Updated: 2024/11/05 19:26:15 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*temps;

	i = 0;
	if (*to_find == '\0')
		return (str);
	temps = str;
	while (*temps)
	{
		i = 0;
		while (to_find[i] != '\0' && temps[i] == to_find[i])
		{
			i++;
		}
		if (to_find[i] == '\0')
			return (temps);
		temps++;
	}
	return (NULL);
}
/*int     main(void)
{
        return 0;
}*/
