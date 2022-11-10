/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:44:41 by cpapot            #+#    #+#             */
/*   Updated: 2022/11/10 15:04:16 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(dst);
	if (len + 1 > size)
		return (size + ft_strlen(src));
	while (src[i] != '\0' && len + i < size - 1)
	{
		dst[i + len] = src[i];
		i++;
	}
	dst[i + len] = '\0';
	return (ft_strlen(src) + len);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
 	char *test1;
 	test1 = malloc(15 * sizeof(*test1));
 	memset(test1, 'r', 15);
	char *test2 = "lorem ipsum dolor sit amet";
 	char test3[15];
 	memset(test3, 'r', 15);
 	printf("strlcat :\n");
 	printf("%s\n", test1);
 	printf("%zu\n", strlcat(test1,test2, 5));
 	printf("%s\n", test1);
 	printf("ft_strlcat :\n");
 	printf("%zu\n", ft_strlcat(test3, test2, 5));
}
*/
