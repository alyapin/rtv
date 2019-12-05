/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzina <kzina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 14:34:31 by kzina             #+#    #+#             */
/*   Updated: 2019/11/21 14:34:33 by kzina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"

t_vec	vec_new(double x, double y, double z)
{
	t_vec	new;

	new.x = x;
	new.y = y;
	new.z = z;
	return (new);
}
