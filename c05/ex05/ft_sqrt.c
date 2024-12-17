/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:51:25 by fbanzo-s          #+#    #+#             */
/*   Updated: 2024/11/06 13:44:30 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		if (nb == i * i)
			return (i);
		i++;
	}
	return (0);
}
/*int	main(void)
{
	int	num;

	num = ft_sqrt(89224);
	printf("%d", num);
}*/
