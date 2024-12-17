/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:51:19 by fbanzo-s          #+#    #+#             */
/*   Updated: 2024/11/07 17:59:56 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	while (av[i])
	{
		i++;
	}
	i--;
	while (i > 0)
	{
		write(1, av[i], ft_strlen(av[i]));
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
