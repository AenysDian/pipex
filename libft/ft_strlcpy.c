/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adian <adian@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:45:00 by adian             #+#    #+#             */
/*   Updated: 2021/11/10 14:40:31 by adian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (!dst_size)
		return (src_len);
	if (dst_size > src_len + 1)
		ft_memcpy(dst, src, src_len);
	else if (dst_size <= src_len + 1)
		ft_memcpy(dst, src, dst_size - 1);
	if (dst_size > src_len + 1)
		dst[src_len] = 0;
	else if (dst_size <= src_len + 1)
		dst[dst_size - 1] = 0;
	return (src_len);
}
