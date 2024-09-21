/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:47:01 by frromero          #+#    #+#             */
/*   Updated: 2024/09/21 14:17:47 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Checks if a character is a digit between '0' and '9' */

#include "libft.h"

int ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
