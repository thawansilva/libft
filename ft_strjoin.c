/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <thawansilva@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 14:12:31 by thaperei          #+#    #+#             */
/*   Updated: 2025/07/16 14:12:31 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	full_len;
	char	*full_str;

	if (!s1 || !s2)
		return (NULL);
	full_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	full_str = (char *) malloc(full_len);
	if (!full_str)
		return (NULL);
	ft_strlcat(full_str, s1, (full_len));
	ft_strlcat(full_str, s2, (full_len));
	return (full_str);
}

#include <stdio.h>
int main(int argc, char *argv[])
{
	if (argc == 1)
		return (1);
	char *str = ft_strjoin(argv[1], argv[2]);
	printf("%s\n", str);
	return 0;
}
