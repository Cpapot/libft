/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:47:21 by cpapot            #+#    #+#             */
/*   Updated: 2022/11/15 15:40:43 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*result;
	unsigned long	i;

	if (SIZE_MAX / count < size)
		return (NULL);
	i = 0;
	result = malloc(count * size);
	if (result == 0)
		return (0);
	while (i != count * size)
	{
		((unsigned char *)result)[i] = 0;
		i++;
	}
	return (result);
}
