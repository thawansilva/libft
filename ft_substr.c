/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 17:11:34 by thaperei          #+#    #+#             */
/*   Updated: 2025/07/17 17:11:34 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_substr(const char *str, size_t start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (len == 0)
		return (NULL);
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	substr = ft_memcpy(substr, str + start, len);
	if (i >= len)
		return (NULL);
	return (substr);
}
