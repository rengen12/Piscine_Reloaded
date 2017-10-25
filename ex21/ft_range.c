/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 19:46:10 by amichak           #+#    #+#             */
/*   Updated: 2017/10/24 22:08:18 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int				*r;
	unsigned int	size;
	long long		i;

	i = 0;
	if (min >= max)
		return (0);
	size = max - min;
	if (!(r = (int *)malloc(sizeof(*r) * size)))
		return (0);
	while (min < max)
	{
		r[i] = min;
		i++;
		min++;
	}
	return (r);
}
