/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:42:18 by fbanzo-s          #+#    #+#             */
/*   Updated: 2024/11/05 14:49:50 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		if ((unsigned char)str[i] < 32 || (unsigned char)str[i] > 126)
		{
			write(1, "\\", 1);
			c = "0123456789abcdef"[(unsigned char)str[i] / 16];
			write(1, &c, 1);
			c = "0123456789abcdef"[(unsigned char)str[i] % 16];
			write(1, &c, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*int main(void)
{
    char str[] = "Coucou\ntu vas bien ?";

    ft_putstr_non_printable(str);
    write(1, "\n", 1); // Para añadir un salto de línea después de la salida

    return 0;
}*/
