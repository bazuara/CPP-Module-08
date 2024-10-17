/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:50:02 by bazuara           #+#    #+#             */
/*   Updated: 2024/10/17 15:14:19 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <easyfind.h>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    try
    {
        std::vector<int>::iterator it = easyfind(v, 3);
        std::cout << "Value found: " << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Value not found" << std::endl;
    }

    try
    {
        std::vector<int>::iterator it = easyfind(v, 42);
        std::cout << "Value found: " << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Value not found" << std::endl;
    }

    return 0;
}