/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libmatrix.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 15:28:52 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/14 19:59:05 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBMATRIX_H
# define LIBMATRIX_H

# include "../lib.h"

/*
**	Absolute this in a tri-dimensional matrix !
*/
float		ft_absolute_this_tri_dimensional_by_point(t_point *point_1,
									t_point *point_2);
float		ft_absolute_this_tri_dimensional_by_vector(float *vector);
/*
**	Vectorial movement in a tridimensional matrix !
*/
void		ft_movement_vectorial_translatory_to_object(float vector_x,
					float vector_y, float vector_z, t_object *object);
void		ft_movement_vectorial_translatory_to_point(float vector_x,
					float vector_y, float vector_z, t_point *point);
/*
**	 Vector and Scalar product !
*/
float		ft_scalar_product(float *u, float *v);
float		*ft_vector_product(float *u, float *v);
/*
**	Plan use in a tridimensional matrix !
*/
float		*ft_vectorize_my_points(t_point *point_1, t_point *point_2);
float		*ft_find_normal_vector(t_point *point_origin, t_point *point_b,
						t_point *point_c);
#endif /* !LIBMATRIX_H */
