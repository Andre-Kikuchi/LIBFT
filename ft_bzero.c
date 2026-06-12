/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahideo-k <ahideo-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 10:06:40 by ahideo-k          #+#    #+#             */
/*   Updated: 2026/06/12 10:06:40 by ahideo-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp_ptr;
	size_t			i;

	tmp_ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		tmp_ptr[i] = '\0';
		i++;
	}
}
