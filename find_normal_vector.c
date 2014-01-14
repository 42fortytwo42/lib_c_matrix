/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_normal_vector.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 19:43:37 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/14 19:58:27 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

float	*ft_find_normal_vector(t_point *point_origin, t_point *point_b,
			t_point *point_c)
{
	float	*vector_1;
	float	*vector_2;
	float	*n;

	vector_1 = ft_vectorize_my_points(point_origin, point_b);
	vector_2 = ft_vectorize_my_points(point_origin, point_c);
	n = ft_vector_product(vector_1, vector_2);
	return (n);
}
