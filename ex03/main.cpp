/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:38:38 by marvin            #+#    #+#             */
/*   Updated: 2025/12/08 15:38:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
    Point a(0.0f, 0.0f);
    Point b(10.0f, 0.0f);
    Point c(0.0f, 10.0f);

    Point inside(3.0f, 3.0f);
    Point outside(10.0f, 10.0f);
    Point onEdge(5.0f, 0.0f);
    Point onVertex(0.0f, 0.0f);

    std::cout << std::boolalpha;

    std::cout << "Inside (3,3) : "
              << bsp(a, b, c, inside) << std::endl;

    std::cout << "Outside (10,10) : "
              << bsp(a, b, c, outside) << std::endl;

    std::cout << "On edge (5,0) : "
              << bsp(a, b, c, onEdge) << std::endl;

    std::cout << "On vertex (0,0) : "
              << bsp(a, b, c, onVertex) << std::endl;

    return 0;
}
