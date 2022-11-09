/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:44:41 by cpapot            #+#    #+#             */
/*   Updated: 2022/11/09 14:05:47 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	u;
	unsigned int	i;
	unsigned int	len;

	i = 0;
	u = 0;
	len = ft_strlen(dst);
	if (size == 0)
		return (ft_strlen(src));
	while (dst[u] != '\0')
		u++;
	while (dst[i] != '\0' && src[i] != '\0' && u + i < size - 1)
	{
		dst[i + u] = src[i];
		i++;
	}
	if (size < len)
		return (ft_strlen(src) + size);
	else
		return (ft_strlen(src) + len);
}
