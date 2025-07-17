/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:54:23 by thaperei          #+#    #+#             */
/*   Updated: 2025/07/12 16:54:23 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(char *str, char *sub, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (str[i] && i <= n)
	{
		j = 0;
		while ((str[i + j] == sub[j]) && (j <= n - i) && sub[j])
			j++;
		if (sub[j] == '\0')
			return (&(str[i]));
		i++;
	}
	return (0);
}
