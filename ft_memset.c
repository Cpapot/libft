/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:17:04 by cpapot            #+#    #+#             */
/*   Updated: 2022/11/10 12:52:03 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	ch;
	int				i;

	ch = (unsigned char)c;
	i = 0;
	while (i != (int)len)
	{
		((unsigned char *)b)[i] = ch;
		i++;
	}
	return (b);
}
/*
int main()
{
	char s[6] = "heyhe";
	char s1[6] = "heyhe";
	printf("%s\n", ft_memset(s, 'a', 5));
	printf("%s\n",memset(s1, 'a', 5));
}

*/
