/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:48:28 by fbanzo-s          #+#    #+#             */
/*   Updated: 2024/11/06 14:55:11 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	signo;

	i = 0;
	num = 0;
	signo = 1;
	while (str[i] && str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signo = -signo;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			num = num * 10 + (str[i] - '0');
		else if (str[i] < '0' || str[i] > '9')
			break ;
		i++;
	}
	return (num * signo);
}
/*int main() {
    char str[] = " ---+--+12+34ab567";
    int num = ft_atoi(str);
    printf("%d\n", num);  // Imprime: -1234
    return 0;
}*/
