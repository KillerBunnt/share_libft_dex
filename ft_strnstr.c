/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdexmund <tdexmund@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 16:15:03 by tdexmund          #+#    #+#             */
/*   Updated: 2024/06/26 16:53:11 by tdexmund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t max)
{
	size_t	count;
	char	*temp;

	temp = (char *)str;
	count = 0;
	if (!find || !str)
		return (0);
	if (find[0] == 0)
		return ((char *)str);
	while (temp[count] && count < max && max >= ft_strlen(find) + count)
	{
		if (ft_strncmp(str + count, find, ft_strlen(find)) == 0)
			return ((char *)(str + count));
		count++;
	}
	return (NULL);
}
