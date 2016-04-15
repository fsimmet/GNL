/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsimmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/15 13:04:33 by fsimmet           #+#    #+#             */
/*   Updated: 2016/04/15 15:32:10 by fsimmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <stdlib.h>

typedef struct		s_env
{
	void			*mlx;
	void			*win;
}					t_env;

void	draw(void *mlx, void *win)
{
	int x;
	int y;

	y = 150;
	while (y < 250)
	{
		x = 150;
		while (x < 250)
		{
			mlx_pixel_put(mlx, win, x, y, 0x00FF00FF);
			x++;
		}
		y++;
	}
}

int	key_hook(int keycode, t_env *e)
{
	if (keycode == 53)
		exit(0);
	return(0);
}

int	main(int ac, char **av)
{
	t_env	e;

	e.mlx = mlx_init();
	e.win = mlx_new_window(e.mlx, 400, 400, "test");
	draw(e.mlx, e.win);
	mlx_key_hook(e.win, key_hook, &e);
	mlx_loop(e.mlx);
	return (0);
}
