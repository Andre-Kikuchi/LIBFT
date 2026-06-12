/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 11:54:45 by marvin            #+#    #+#             */
/*   Updated: 2026/05/31 11:54:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *b, int c, size_t len)
{
	unsigned char	*tmp_ptr;
	size_t			i;

	tmp_ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		tmp_ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
