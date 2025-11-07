/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSP.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:45:28 by vpelc             #+#    #+#             */
/*   Updated: 2025/04/15 16:47:19 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSP_HPP
#define BSP_HPP

# include "Point.hpp"

float		cross(Point const A, Point const B, Point const P);
bool		bsp(Point const a, Point const b, Point const c, Point const point);

#endif