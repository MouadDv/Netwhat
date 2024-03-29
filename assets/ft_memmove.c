/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:49:37 by milmi             #+#    #+#             */
/*   Updated: 2019/10/31 03:35:39 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	j;
	char	*p;
	char	*s;

	j = 0;
	p = (char *)dest;
	s = (char *)src;
	if ((dest == NULL && src == NULL) || dest == src)
		return (NULL);
	if (p > s)
		while (n > 0)
		{
			p[n - 1] = s[n - 1];
			n--;
		}
	else
	{
		j = 0;
		while (j < n)
		{
			p[j] = s[j];
			j++;
		}
	}
	return (dest);
}
