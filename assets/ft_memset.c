/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:49:46 by milmi             #+#    #+#             */
/*   Updated: 2019/10/30 21:48:24 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *dest, int src, unsigned int n)
{
	unsigned	int	j;
	char			*p;

	j = 0;
	p = (char *)dest;
	while (j < n)
	{
		p[j] = src;
		j++;
	}
	return (dest);
}
