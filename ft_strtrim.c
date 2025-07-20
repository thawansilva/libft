/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 08:40:10 by thaperei          #+#    #+#             */
/*   Updated: 2025/07/18 08:40:10 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static size_t	ft_get_count_set(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	count = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j++])
			{
				count++;
				break ;
			}
		}
		i++;
	}
	return (count);
}

void	ft_strset(char *dest, const char *src, const char *set)
{
	int	i;
	int	j;
	int	z;

	i = 0;
	j = 0;
	while (src[i])
	{
		z = 0;
		while (set[z])
		{
			if (src[i] == set[z])
				break ;
			z++;
		}
		if (set[z] == '\0')
			dest[j++] = src[i];
		i++;
	}
	dest[j] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	count;
	size_t	len;
	char	*trim_str;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	len = ft_strlen(s1);
	count = ft_get_count_set(s1, set);
	trim_str = (char *) malloc(len - count + 1);
	if (!trim_str)
		return (NULL);
	ft_strset(trim_str, s1, set);
	return (trim_str);
}
