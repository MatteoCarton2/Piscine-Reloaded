/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:40:20 by mcarton           #+#    #+#             */
/*   Updated: 2024/10/09 22:00:08 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char *argv[])
{
	int	fd;
	int	c;
	int	c_actuelle;

	if (argc == 1)
		write(1, "File name missing.\n", 19);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else
	{
		fd = (open(argv[1], O_RDONLY));
		if (fd == -1)
			write (2, "Cannot read file.\n", 18);
		else
		{
			c_actuelle = read(fd, &c, 1);
			while (c_actuelle > 0)
			{
				write (1, &c, 1);
				c_actuelle = read(fd, &c, 1);
			}
		}
		close(fd);
	}
	return (0);
}
