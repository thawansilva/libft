/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 08:33:21 by thaperei          #+#    #+#             */
/*   Updated: 2025/07/12 08:33:21 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *str1, const char *str2, int n)
{
	while (n > 0 && *str1 && *str2 && *str1 == *str2)
	{
		n--;
		str1++;
		str2++;
	}
	if (n == 0)
		return (0);
	return ((unsigned char) *str1 - (unsigned char) *str2);
}
