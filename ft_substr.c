/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdexmund <tdexmund@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 16:27:03 by tdexmund          #+#    #+#             */
/*   Updated: 2024/06/26 17:35:47 by tdexmund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	count;
	char			*temp;

	count = 0;
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	temp = (char *)malloc(len + 1);
	if (!temp)
		return (0);
	while (s[count])
		count++;
	temp[0] = 0;
	if (start >= count)
		return (temp);
	count = 0;
	while ((count < len) && (s[start]))
	{
		temp[count] = s[start];
		start++;
		count++;
	}
	temp[count] = 0;
	return (temp);
}
