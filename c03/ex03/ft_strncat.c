/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:20:32 by fbanzo-s          #+#    #+#             */
/*   Updated: 2024/11/05 19:16:03 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main()
{
    char dest[50] = "Hola, ";  // Cadena de destino con espacio suficiente
    char src[] = "mundo!";
    unsigned int nb = 4;  // Vamos a concatenar solo 4 caracteres de 'src'

    // Llamar a la función ft_strncat
    ft_strncat(dest, src, nb);

    // Imprimir el resultado
    printf("Cadena resultante: %s\n", dest);

    return 0;
}*/
