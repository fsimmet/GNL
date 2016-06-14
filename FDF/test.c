/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsimmet <fsimmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/15 13:04:33 by fsimmet           #+#    #+#             */
/*   Updated: 2016/04/20 16:45:42 by fsimmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <mlx.h>
#include <stdlib.h>
#include "fdf.h"

void	put_pixel_img(void *mlx, t_img *img, t_pos const *pos, t_color const *c)
{
	unsigned int	hex_color;
	unsigned int	hexa;
	unsigned int	i;

	hexa = ((c->r & 0xFF) << img->bpp / 2) + ((c->g & 0xFF) << img->bpp / 4) + (c->b & 0xFF);
	hex_color = mlx_get_color_value(mlx, hexa);
	i = (*pos).y * img->sl + (img->bpp / 8) * (*pos).x;
	img->data[i] = (hex_color & 0xFF);
	img->data[i + 1] = (hex_color & 0xFF00) >> 8;
	img->data[i + 2] = (hex_color & 0xFF0000) >> 16;
}

int	expose_hook(t_env *e)
{
//	printf("expose hook\n");
	mlx_put_image_to_window(e->mlx, e->win, e->img.ptr, 0, 0);
	return (0);
}

int	key_hook(int keycode)
{
	if (keycode == 53)
		exit(0);
	return (0);
}

void	draw(t_env *e)
{
	t_pos		pos;
	t_color		color;

	pos.y = 150;
	while (pos.y < 250)
	{
		pos.x = 150;
		while (pos.x < 250)
		{
			color.r = 0x00;
			color.g = 0x00;
			color.b = 0xFF;
			put_pixel_img(e->mlx, &e->img, &pos, &color);
			pos.x++;
		}
		pos.y++;
	}
}

int	loop_hook(t_env *e)
{
	draw(e);
	mlx_put_image_to_window(e->mlx, e->win, e->img.ptr, 0, 0);
	return (0);
}

int	main(void)
{
	t_env		e;

	e.mlx = mlx_init();
	e.win = mlx_new_window(e.mlx, 400, 400, "test");
	e.img.wth = 400;
	e.img.hht = 400;
	e.img.ptr = mlx_new_image(e.mlx, e.img.wth, e.img.hht);
	e.img.data = mlx_get_data_addr(e.img.ptr, &e.img.bpp, &e.img.sl, &e.img.end);
	mlx_expose_hook(e.win, expose_hook, &e);
	mlx_key_hook(e.win, key_hook, &e);
	mlx_loop_hook(e.mlx, loop_hook, &e);
	mlx_loop(e.mlx);
	return (0);
}
