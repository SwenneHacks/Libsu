/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 20:30:27 by swofferh      #+#    #+#                 */
/*   Updated: 2021/03/20 13:08:25 by sofferha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libsu.h"

/*
** FT_STRLCAT: Appends string src to the end of dst.
** It will append at most dstsize - strlen(dst) - 1 characters.
** It will then NUL-terminate, unless dstsize is 0 or the original
** dst string was longer than dstsize. Returns the total length of
** the string they tried to create.
*/
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dstlen;
	size_t srclen;

	dstlen = 0;
	srclen = 0;
	while (dst[dstlen])
		dstlen++;
	while (srclen < dstsize - dstlen - 1 && src[srclen] && dstsize > dstlen)
	{
		dst[dstlen + srclen] = src[srclen];
		srclen++;
	}
	dst[dstlen +srclen] = '\0';
	while (src[srclen] != '\0')
		srclen++;
	if (dstsize < dstlen)
		return (srclen + dstsize);
	return (dstlen + srclen);
}