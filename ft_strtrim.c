/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:46:57 by cpapot            #+#    #+#             */
/*   Updated: 2022/11/10 20:03:28 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_set(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
int	strlen_st(s1, set)
{
	int	len;

	len = 0;
	//calcule taille de s1 apres le retrait de set

}

char	*ft_strtrim(char const *s1, char const *set)
{

}
