/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:58:56 by fbanzo-s          #+#    #+#             */
/*   Updated: 2024/10/28 17:47:26 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	end;
	int	start;

	end = size - 1;
	start = 0;
	temp = 0;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		end--;
		start++;
	}
}
/*int	main()
{
	int	message[4];
	int	size;
    
	message[0] = 1;
	message[1] = 2;
	message[2] = 5;
	message[3] = 6;
	size = 4;
	ft_rev_int_tab(message, size);
	return (0);
}*/
