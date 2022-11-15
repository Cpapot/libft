/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:47:21 by cpapot            #+#    #+#             */
/*   Updated: 2022/11/15 11:01:53 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;
	int		i;

	if (count == 0 || size == 0)
		return (0);
	if (SIZE_MAX / count < size)
		return (0);
	i = 0;
	result = malloc(count * size);
	if (result == 0)
		return (0);
	while (i < (int)count)
	{
		((unsigned char *)result)[i] = 0;
		i++;
	}
	((unsigned char *)result)[i] = 0;
	return (result);
}
