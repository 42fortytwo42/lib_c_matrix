/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar_product.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 18:37:07 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/14 20:05:59 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	*u and *v are float pointers. Representing vectors in tab stock values.
**	*u = u[2] where u[0] = x, u[1] = y, u[2] = z;
*/

#include "libmatrix.h"

float	ft_scalar_product(float *u, float *v)
{
	float	scalar_product;
	float	absolute_u;
	float	absolute_v;

	absolute_u = pow((pow(u[0], 2) * pow(u[1], 2) * pow(u[2], 2)), 0.5);
	absolute_v = pow((pow(v[0], 2) * pow(v[1], 2) * pow(v[2], 2)), 0.5);
	if (absolute_u > absolute_v)
		scalar_product = absolute_u * absolute_v * absolute_v / absolute_u;
	if (absolute_v > absolute_u)
		scalar_product = absolute_u * absolute_v * absolute_u / absolute_v;
	return (scalar_product);
}
