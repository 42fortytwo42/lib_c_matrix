/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_product.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 18:52:22 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/14 18:59:24 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

float	*ft_vector_product(float *u, float *v)
{
	float	*pointer;
	float	w[2];

	pointer = (float*)malloc(sizeof(float) * 3);
	pointer = &w[0];
	w[0] = (u[1] * v[2]) - (u[2] * v[1]);
	w[1] = (u[2] * v[0]) - (u[0] * v[2]);
	w[2] = (u[0] * v[1]) - (u[1] * v[0]);
	return (pointer);
}
