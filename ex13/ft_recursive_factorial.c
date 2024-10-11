/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:08:12 by mcarton           #+#    #+#             */
/*   Updated: 2024/10/10 14:19:57 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	if (nb <= 1)
		return (nb);
	return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>
// #include <stdlio.h>
//
// int main(int argc, char const *argv[])
// {
// 	if (argc > 1)
// 	{
// 		int arg = atoi(argv[1]);
// 		printf("%d\n", ft_recursive_factorial(arg));
// 	}
// 	return 0;
// }
