/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzina <kzina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 14:36:49 by kzina             #+#    #+#             */
/*   Updated: 2019/12/05 17:15:44 by kzina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"
#include "libft.h"
#include "parser.h"

void	parse_cam(t_cam *cam, char **sl)
{
	int nberr;

	if (!sl[1])
		typeof_error(NOT_ENOUGH_DATA);
	nberr = get_vec_data(&cam->pos, sl[1]);
	typeof_error(nberr);
	if (!sl[2])
		typeof_error(NOT_ENOUGH_DATA);
	nberr = get_vec_data(&cam->rot, sl[2]);
	typeof_error(nberr);
	cam->dir = vec_new(0, 0, -1);
	cam->dir = vec_rot_xyz(cam->dir, cam->rot);
}

int		get_vec_data(t_vec *res, char *str)
{
	size_t	len;

	len = ft_strlen(str);
	if (!is_valid_vec(str))
		return (WRONG_CHARACTER);
	if (len < 5 || *str == ',')
		return (NOT_ENOUGH_DATA);
	len = ft_strchr(str, ',') - str;
	if (len > 9 || len == 0)
		return (len == 0 ? NOT_ENOUGH_DATA : NB_TOO_BIG);
	res->x = ft_atod(str);
	str = ft_strchr(str, ',');
	str++;
	len = ft_strchr(str, ',') - str;
	if (len > 9 || len == 0)
		return (len == 0 ? NOT_ENOUGH_DATA : NB_TOO_BIG);
	res->y = ft_atod(str);
	str = ft_strchr(str, ',');
	str++;
	len = ft_strlen(str);
	if (len > 9 || len == 0)
		return (len == 0 ? NOT_ENOUGH_DATA : NB_TOO_BIG);
	res->z = ft_atod(str);
	return (ALL_GOOD);
}

int		get_col_data(t_rgb *res, char *str)
{
	size_t	len;

	len = ft_strlen(str);
	if (len != 6)
		return (WRONG_COL_FORMAT);
	if (!is_valid_hex(str))
		return (WRONG_CHARACTER);
	res->c = ft_atoi_base(str, 16);
	return (ALL_GOOD);
}

int		get_double(double *res, char *str)
{
	size_t	len;

	len = ft_strlen(str);
	if (!len || len > 9)
		return (!len ? NOT_ENOUGH_DATA : NB_TOO_BIG);
	*res = ft_atod(str);
	return (ALL_GOOD);
}
