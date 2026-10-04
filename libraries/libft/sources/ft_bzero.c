/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya <sakkaya@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 19:14:27 by sakkaya            #+#    #+#             */
/*   Updated: 2022/06/13 23:16:37 by sakkaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
//byte dizeye (null "\0") yaziyoruz. "gorkem"-->"\0\0\0\0em" !!NOT RETURNING!!
void	ft_bzero(void *s, size_t n)
{
	while (n-- > 0)
	{
		*((unsigned char *)s) = 0;
		s++;
	}
}
