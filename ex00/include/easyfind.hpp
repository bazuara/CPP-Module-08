/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:49:36 by bazuara           #+#    #+#             */
/*   Updated: 2025/02/08 11:42:57 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <vector>

template <typename T>
typename T::iterator easyfind(T &container, int value) {
  typename T::iterator it =
      std::find(container.begin(), container.end(), value);
  if (it == container.end()) throw std::exception();
  return it;
}

#endif  // EASYFIND_HPP
