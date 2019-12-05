/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzina <kzina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 14:37:21 by kzina             #+#    #+#             */
/*   Updated: 2019/11/21 14:37:22 by kzina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_valid_vec(char *str)
{
	while (*str)
	{
		if (!ft_isdigit(*str) && *str != '-' && *str != '.' && *str != ',')
			return (0);
		str++;
	}
	return (1);
}

int		is_valid_nb(char *str)
{
	while (*str)
	{
		if (!ft_isdigit(*str) && *str != '-' && *str != '.')
			return (0);
		str++;
	}
	return (1);
}

int		is_valid_hex(char *str)
{
	while (*str)
	{
		*str = ft_tolower(*str);
		if (!ft_isdigit(*str) && (*str < 'a' || *str > 'f'))
			return (0);
		str++;
	}
	return (1);
}
