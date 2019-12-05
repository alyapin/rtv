/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rtv1.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzina <kzina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 14:32:54 by kzina             #+#    #+#             */
/*   Updated: 2019/12/03 18:57:28 by kzina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RTV1_H
# define RTV1_H

# include "rtv1types.h"

# define WNDW		2160
//# define WNDW_H		560
# define WNDH		1440
//# define WNDH_H		360
//# define FOV		58.0
//# define FOV_H		10
# define PPD		500

# define ABS(x)		(x) > 0 ? (x) : -(x)
# define DROUND(d)	ABS(d) < 0.00001 ? 0 : (d)

double			t_sphere(t_ray *r, t_obj sphere);
double			col_sphere(t_ray r, t_rgb *col, int id, void *env);

double			t_cylinder(t_ray *r, t_obj cylinder);
double			col_cylinder(t_ray r, t_rgb *col, int id, void *env);

double			t_plane(t_ray *r, t_obj plane);
double			col_plane(t_ray r, t_rgb *col, int id, void *env);

double			t_cone(t_ray *r, t_obj ccone);
double			col_cone(t_ray r, t_rgb *col, int id, void *env);

double			get_t(double a, double b, double d);
unsigned int	get_color(t_ray r, int id, t_env *env);

void			trace_ray(t_ray *r, t_env env);
void			init_ray(t_ray *r, t_env env);
int				find_closest(t_ray r, t_env env);
void			comp_ray(t_ray *r, t_vec n, double t);

void			put_error(char *str);
void			free_double_string(char **sl);

#endif
