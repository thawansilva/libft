/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:25:21 by thaperei          #+#    #+#             */
/*   Updated: 2025/07/19 12:25:21 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static int	get_count_digits(int n)
{
	int	count_digits;

	count_digits = 0;
	if (n <= 0)
	{
		count_digits++;
		n = -n;
	}
	while (n != 0)
	{
		count_digits++;
		n /= 10;
	}
	return (count_digits);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		count_digits;
	long	nbr;
	char	*nbr_str;

	nbr = n;
	count_digits = get_count_digits(nbr);
	nbr_str = (char *) ft_calloc(count_digits + 1, sizeof(char));
	if (!nbr_str)
		return (0);
	sign = 1;
	if (nbr < 0)
	{
		sign = -1;
		nbr = -nbr;
	}
	while (count_digits--)
	{
		nbr_str[count_digits] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (sign < 0)
		nbr_str[0] = '-';
	return (nbr_str);
}
