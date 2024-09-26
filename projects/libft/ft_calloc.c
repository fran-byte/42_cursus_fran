/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:38:27 by frromero          #+#    #+#             */
/*   Updated: 2024/09/26 16:28:17 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates memory for an array of `count` elements, each of `size` bytes,   */
/*and initializes all bytes to zero. Returns a pointer to the allocated memory*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == 0 || size == 0)
		return (NULL);
	ft_memset(ptr, 0, count * size);
}
