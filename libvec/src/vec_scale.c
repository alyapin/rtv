/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_scale.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzina <kzina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 14:35:10 by kzina             #+#    #+#             */
/*   Updated: 2019/11/21 14:35:12 by kzina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"

t_vec	vec_scale(t_vec v, double nb)
{
	v.x *= nb;
	v.y *= nb;
	v.z *= nb;
	return (v);
}
