/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahideo-k <ahideo-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 10:37:22 by ahideo-k          #+#    #+#             */
/*   Updated: 2026/06/05 10:53:40 by ahideo-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tmp_ptr;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	if (size != 0 && nmemb >= (size_t)-1 / size)
		return (NULL);
	tmp_ptr = malloc(nmemb * size);
	if (tmp_ptr == NULL)
		return (NULL);
	ft_bzero(tmp_ptr, nmemb * size);
	return (tmp_ptr);
}
