/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:30:54 by mcarton           #+#    #+#             */
/*   Updated: 2024/10/09 19:17:41 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*strduplicate;

	i = 0;
	while (src[i] != '\0')
		i++;
	strduplicate = malloc(i + sizeof(char));
	if (strduplicate == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		strduplicate[i] = src[i];
		i++;
	}
	strduplicate[i] = '\0';
	return (strduplicate);
}
