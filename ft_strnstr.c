/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:45:14 by cpapot            #+#    #+#             */
/*   Updated: 2022/11/09 14:47:43 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long	i;
	unsigned long	u;

	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	if (ft_strlen(needle) > len)
		return (0);
	while (haystack[i] != '\0' && i < len)
	{
		u = 0;
		while (needle[u] != '\0' && needle[u] == haystack[u + i])
			u++;
		if (needle[u] == '\0' && u + i <= len)
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
