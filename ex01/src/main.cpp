/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 17:50:23 by bazuara           #+#    #+#             */
/*   Updated: 2025/01/23 15:21:27 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>
#include <iostream>

int main() {
    // Regular test
    std::cout << "Regular test" << std::endl;
    Span span(5);
    span.addNumber(5);
    span.addNumber(3);
    span.addNumber(17);
    span.addNumber(9);
    span.addNumber(11);
    std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
    std::cout << "Longest span: " << span.longestSpan() << std::endl;

    // Exception test
    std::cout << "Exception test" << std::endl;
    Span span2(1);
    try {
        span2.addNumber(5);
        span2.addNumber(3);
    } catch (std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    // test with more than 10000 elements
    std::cout << "Test with more than 10000 elements" << std::endl;
    Span span3(10000);
    for (int i = 0; i < 10000; i++) {
        span3.addNumber(i);
    }
    std::cout << "Shortest span: " << span3.shortestSpan() << std::endl;
    std::cout << "Longest span: " << span3.longestSpan() << std::endl;

    // test adding a vector to a span
    std::cout << "Test adding a vector to a span" << std::endl;
    Span span4(5);
    std::vector<int> v;
    for (int i = 0; i < 5; i++) {
        v.push_back(i);
    }
    span4.addNumber(v.begin(), v.end());
    std::cout << "Shortest span: " << span4.shortestSpan() << std::endl;
    std::cout << "Longest span: " << span4.longestSpan() << std::endl;

    // test adding a vector to a span already full
    std::cout << "Test adding a vector to a span already full" << std::endl;
    Span span5(5);
    std::vector<int> v2;
    for (int i = 0; i < 6; i++) {
        v2.push_back(i);
    }

    try {
        span5.addNumber(v2.begin(), v2.end());
    } catch (std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    // tests on pdf
    std::cout << "Tests on pdf" << std::endl;
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    return 0;
}
