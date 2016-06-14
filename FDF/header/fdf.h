/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsimmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/20 14:41:39 by fsimmet           #+#    #+#             */
/*   Updated: 2016/04/20 16:43:02 by fsimmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

typedef struct		s_img
{
	void			*ptr;
	char			*data;
	int				bpp;
	int				sl;
	int				end;
	int				wth;
	int				hht;
}					t_img;

typedef struct		s_env
{
	void			*mlx;
	void			*win;
	t_img			img;
}					t_env;

typedef struct		s_pos
{
	int				x;
	int				y;
}					t_pos;

typedef struct		s_color
{
	char			r;
	char			g;
	char			b;
}					t_color;

#endif
