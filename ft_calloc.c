/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:47:21 by cpapot            #+#    #+#             */
/*   Updated: 2022/11/09 18:24:22 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t count, size_t size)
{
	void	*result;
	int		i;

	result = malloc(count * size);
	i = 0;
	if (result == 0)
		return (0);
	while (i < (int)count)
	{
		((unsigned char *)result)[i] = 0;
		i++;
	}
	return (result);
}
