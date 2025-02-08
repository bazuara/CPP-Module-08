/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:53:16 by bazuara           #+#    #+#             */
/*   Updated: 2025/02/08 11:41:31 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <easyfind.hpp>

int main(void) {
  std::vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);

  std::vector<int> v2;
  v2.push_back(6);
  v2.push_back(7);
  v2.push_back(8);
  v2.push_back(9);
  v2.push_back(10);

  try {
    std::vector<int>::iterator it = easyfind(v, 3);
    std::cout << "Value found: " << *it << std::endl;
  } catch (std::exception &e) {
    std::cout << "Value not found" << std::endl;
  }

  try {
    std::vector<int>::iterator it = easyfind(v2, 3);
    std::cout << "Value found: " << *it << std::endl;
  } catch (std::exception &e) {
    std::cout << "Value not found" << std::endl;
  }

  return 0;
}
