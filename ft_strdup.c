/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 20:28:00 by thaperei          #+#    #+#             */
/*   Updated: 2025/07/11 20:28:00 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strdup(char *str)
{
	char	*dup_str;

	dup_str = (char *)malloc(ft_strlen(str) + 1);
	while (*str)
		*dup_str++ = *str++;
	*dup_str = '\0';
	return (dup_str);
}
