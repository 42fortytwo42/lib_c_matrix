/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vectorize_my_points.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 19:37:32 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/14 19:41:56 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

float	*ft_vectorize_my_points(t_point *point_1, t_point *point_2)
{
	float	tab[2];
	float	*pointer;

	pointer = (float*)malloc(sizeof(float));
	pointer = &tab[0];
	tab[0] = point_2->x_point - point_1->x_point;
	tab[1] = point_2->y_point - point_1->y_point;
	tab[2] = point_2->z_point - point_1->z_point;
	return (pointer);
}
