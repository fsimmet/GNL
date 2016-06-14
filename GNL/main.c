


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsimmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/31 13:52:40 by fsimmet           #+#    #+#             */
/*   Updated: 2016/06/04 20:47:57 by fsimmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "../GNL/get_next_line.h"

int	main(int ac, char **av)
{
	int	fd;
	char	*line;

	line = NULL;
	fd = open(av[1], O_RDONLY);

	while(get_next_line(fd, &line) == 1)
	{
		//ft_putendl(line);
		printf("%s\n", line);
		free(line);
	}
	//ft_putendl(line);
	printf("%s\n", line);
	free(line);
	return (0);
}
