/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement_vectorial_translatory_to_obje...          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 18:18:50 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/14 20:05:07 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

void	ft_movement_vectorial_translatory_to_object(float vector_x,
				float vector_y, float vector_z, t_object *object)
{
	t_point		*point_tmp;

	point_tmp = (t_point*)malloc(sizeof(t_point));
	point_tmp = object->link_to_points;
	while (point_tmp->next != NULL)
	{
		point_tmp->x_point = point_tmp->x_point + vector_x;
		point_tmp->y_point = point_tmp->y_point + vector_y;
		point_tmp->z_point = point_tmp->z_point + vector_z;
		point_tmp = point_tmp->next;
	}
	free(point_tmp);
}
