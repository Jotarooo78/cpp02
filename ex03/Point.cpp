/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armosnie <armosnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 16:41:07 by armosnie          #+#    #+#             */
/*   Updated: 2025/12/12 13:34:25 by armosnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : _x(0), _y(0) {}

Point::~Point() {}

Point::Point(float const x, float const y) : _x(x), _y(y) {}

Point::Point(Point const &pointCopy) : _x(pointCopy._x), _y(pointCopy._y) {}

Point &Point::operator=(Point const &pointCopy) {
    (void)&pointCopy;
    return *this;
}

Fixed Point::getX() const {
    
    return _x;
}

Fixed Point::getY() const {
    
    return _y;
}

float calculate_area(Point const a, Point const b, Point const c) {

    Fixed result = a.getX() * ((b.getY() - c.getY())) + b.getX() * ((a.getY() - c.getY())) + c.getX() * ((a.getY() - b.getY()));
    if (result < 0)
        result = result * -1;
    return (result / 2).toFloat();
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    
    float a_triangle = calculate_area(a, b, c);
    float b_triangle = calculate_area(b, c, point);
    float c_triangle = calculate_area(c, point, a);
    float d_triangle = calculate_area(point, a, b);

    if (b_triangle == 0 || c_triangle == 0 || d_triangle == 0)
        return false;
    else if (b_triangle + c_triangle + d_triangle == a_triangle)
        return true;
    return false;
}