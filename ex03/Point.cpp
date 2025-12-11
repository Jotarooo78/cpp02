/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armosnie <armosnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 16:41:07 by armosnie          #+#    #+#             */
/*   Updated: 2025/12/11 16:11:32 by armosnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : _x(0), _y(0) {}

Point::~Point() {}

Point::Point(float const x, float const y) : _x(x), _y(y) {}

Point::Point(Point const &pointCopy) : _x(pointCopy._x), _y(pointCopy._y) {}

Point &Point::operator=(Point const &pointCopy) {
    
    return *this;
}

Fixed Point::getX() const {
    
    return _x;
}

Fixed Point::getY() const {
    
    return _y;
}

float calculate_area(Point const a, Point const b, Point const c) {

    Fixed result = a.getX() * (b.getY() - c.getY()) + b.getX() * (a.getY() - c.getY()) + c.getX() * (a.getY() - b.getY()) +
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    
    float triangle = calculate_area(a, b, c);

}