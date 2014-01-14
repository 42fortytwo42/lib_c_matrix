/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   absolute_this_tri_dimensional_by_vector.c          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 19:25:17 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/14 19:28:05 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

float	ft_absolute_this_tri_dimensional_by_vector(float *vector)
{
	float	result;

	result = pow(pow(vector[0], 2) +  pow(vector[1], 2) + pow(vector[2], 2),
								0.5);
	return (result);
}
