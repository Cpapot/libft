/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:30:42 by cpapot            #+#    #+#             */
/*   Updated: 2022/11/11 17:21:09 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;

	i = 0;
	if (start > ft_strlen(s))
		return ("");
	if (start + len > ft_strlen(s))
		result = malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	else
		result = malloc(sizeof(char) * (len + 1));
	if (result == 0)
		return (0);
	while (i != len && s[i + start] != '\0')
	{
		result[i] = s[i + start];
		i++;
	}
	result[i] = '\0';
	return (result);
}
