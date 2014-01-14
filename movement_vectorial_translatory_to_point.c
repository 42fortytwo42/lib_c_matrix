/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement_vectorial_translatory_to_point.c          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 18:19:02 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/14 20:05:32 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

void	ft_movement_vectorial_translatory_to_point(float vector_x,
				float vector_y,	float vector_z, t_point *point)
{
	point->x_point = point->x_point + vector_x;
	point->y_point = point->y_point + vector_y;
	point->z_point = point->z_point + vector_z;
}
