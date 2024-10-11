/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:14:04 by mcarton           #+#    #+#             */
/*   Updated: 2024/10/09 16:16:38 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	racine;
	long	min;
	long	milieu;
	long	max;

	if (nb < 0)
		return (0);
	min = 0;
	max = nb;
	while (min <= max)
	{
		milieu = (min + max) / 2;
		racine = milieu * milieu;
		if (racine == nb)
			return (milieu);
		else if (racine < nb)
			min = milieu + 1;
		else
			max = milieu - 1;
	}
	return (0);
}
