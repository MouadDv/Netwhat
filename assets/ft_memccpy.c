/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:48:59 by milmi             #+#    #+#             */
/*   Updated: 2019/10/31 03:27:35 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				j;
	unsigned char		*p;
	const unsigned char	*s;

	j = 0;
	p = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (j < n)
	{
		p[j] = s[j];
		if (p[j] == (unsigned char)c)
			return (dest + j + 1);
		j++;
	}
	return (0);
}
