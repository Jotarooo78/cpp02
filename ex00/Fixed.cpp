/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armosnie <armosnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 13:45:22 by armosnie          #+#    #+#             */
/*   Updated: 2025/12/05 15:22:49 by armosnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
    
    std::cout << "Constructor called" << std::endl;
}

Fixed::~Fixed() {
    
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixedCopy) {
    
    std::cout << "Constructor copy called" << std::endl;
    this->_value = fixedCopy._value;
}

Fixed &Fixed::operator=(const Fixed &fixedCopy) {
    
    if (this != &fixedCopy)
        this->_value = fixedCopy._value;
    return *this;
}

void Fixed::setRawBits(int const raw) {
    
    std::cout << "setRaw function called" << std::endl;
    _value = raw;
}

int Fixed::getRawBits(void) const {
    
    std::cout << "getRaw function called" << std::endl;
    return _value;
}