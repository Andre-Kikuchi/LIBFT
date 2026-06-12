/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 20:17:39 by marvin            #+#    #+#             */
/*   Updated: 2026/05/31 20:17:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str_s1;
	unsigned char	*str_s2;
	size_t			i;

	str_s1 = (unsigned char *)s1;
	str_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)str_s1[i] != (unsigned char)str_s2[i])
			return ((unsigned char)str_s1[i] - (unsigned char)str_s2[i]);
		i++;
	}
	return (0);
}
