/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:44:41 by cpapot            #+#    #+#             */
/*   Updated: 2022/11/08 17:15:20 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

size_t	ft_strlen(const char *str);

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
	while (src[u] != '\0')
		u++;
	while (dst[i] != '\0' && src[i] != '\0' && u + i < size - 1)
	{
		dst[i + u] = src[i];
		i++;
	}
	dst[i + u] = '\0';
	if (size < len)
		return (ft_strlen(src) + size);
	else
		return (ft_strlen(src) + len);
}
