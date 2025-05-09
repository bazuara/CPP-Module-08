/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:42:43 by bazuara           #+#    #+#             */
/*   Updated: 2025/02/08 11:30:36 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
 public:
  MutantStack(void) : std::stack<T>() {}
  MutantStack(const MutantStack &copy) : std::stack<T>(copy) {}
  virtual ~MutantStack(void) {}
  MutantStack &operator=(const MutantStack &otherMutant) {
    if (this == &otherMutant) return *this;
    std::stack<T>::operator=(otherMutant);
    return *this;
  }

  typedef typename std::stack<T>::container_type::iterator iterator;
  typedef typename std::stack<T>::container_type::const_iterator const_iterator;

  iterator begin(void) { return std::stack<T>::c.begin(); }
  iterator end(void) { return std::stack<T>::c.end(); }

  const_iterator begin(void) const { return std::stack<T>::c.begin(); }
  const_iterator end(void) const { return std::stack<T>::c.end(); }
};

#endif  // MUTANTSTACK_HPP
