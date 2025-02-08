/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 17:41:20 by bazuara           #+#    #+#             */
/*   Updated: 2025/02/08 12:00:25 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <exception>
#include <vector>

class Span {
 private:
  unsigned int n;
  std::vector<int> v;
  Span();

 public:
  explicit Span(unsigned int n);
  Span(const Span &span);
  Span &operator=(const Span &span);
  ~Span();

  void addNumber(int n);
  void addNumber(std::vector<int>::iterator begin,
                 std::vector<int>::iterator end);
  int shortestSpan();
  int longestSpan();
};

#endif  // SPAN_HPP
