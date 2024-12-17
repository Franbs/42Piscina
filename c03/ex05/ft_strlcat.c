/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:35:38 by fbanzo-s          #+#    #+#             */
/*   Updated: 2024/11/05 19:33:08 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned int	srclen;
	unsigned int	i;
	unsigned int	j;

	destlen = len(dest);
	srclen = len(src);
	if (size <= destlen)
		return (srclen + size);
	i = 0;
	j = destlen;
	while (src[i] != '\0' && j < size - 1)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (srclen + destlen);
}
/*int main(void)
{
    char dest[20] = "Hello, ";
    char src[] = "World!";
    unsigned int size = sizeof(dest);

    printf("Before strlcat: dest = \"%s\"\n", dest);

    unsigned int result = ft_strlcat(dest, src, size);

    printf("After strlcat: dest = \"%s\"\n", dest);
    printf("Length of concatenated string: %u\n", result);

    return 0;
}*/
