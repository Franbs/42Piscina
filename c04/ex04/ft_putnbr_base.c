/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:16:42 by fbanzo-s          #+#    #+#             */
/*   Updated: 2024/11/07 17:37:06 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

int	isvalidbase(char *base)
{
	int	i;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i] != '\0')
	{
		if (i != 0 && base[i] == base[i - 1])
			return (0);
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	toprint;
	int		baselen;

	if (isvalidbase(base) == 1)
	{
		baselen = ft_strlen(base);
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		if (nbr >= baselen)
		{
			ft_putnbr_base((nbr / baselen), base);
			ft_putchar(base[nbr % baselen]);
		}
		else
		{
			ft_putchar(base[nbr]);
		}
	}
}
/*int	main(void) {
    ft_putnbr_base(123, "0123456789");  // Decimal: 123
    write(1, "\n", 1);

    ft_putnbr_base(-5, "01");  // Binario: -101
    write(1, "\n", 1);

    ft_putnbr_base(255, "0123456789ABCDEF");
    write(1, "\n", 1);

    ft_putnbr_base(66, "poniguay");
    write(1, "\n", 1);

    ft_putnbr_base(123, "01+");
    return 0;
}*/
