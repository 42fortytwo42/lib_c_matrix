/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   absolute_this_tri_dimensional_by_point.c           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 19:18:48 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/14 19:23:30 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

float	ft_absolute_this_tri_dimensional_by_point(t_point *point_1,
			t_point *point_2)
{
	float	result;

	result = pow(pow(point_2->x_point - point_1->x_point, 2)
				 + pow(point_2->y_point - point_1->y_point, 2)
				 + pow(point_2->z_point - point_1->z_point, 2), 0.5);
	return (result);
}
