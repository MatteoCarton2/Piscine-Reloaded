/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:17:53 by mcarton           #+#    #+#             */
/*   Updated: 2024/10/09 22:35:09 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int as_o(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if(str[i] == 'o')
            return 1;
        i++;
    }
    return 0;
}
*/

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			j++;
		i++;
	}
	return (j);
}
/*
int main (void)
{
    char *tab[] = {"test", "oui", "non", NULL};
    printf("%d\n", ft_count_if(tab, &as_o));
}
*/
