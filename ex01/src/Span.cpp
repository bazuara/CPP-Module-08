/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 17:46:45 by bazuara           #+#    #+#             */
/*   Updated: 2025/02/08 11:50:14 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

Span::Span(unsigned int n) { this->n = n; }

Span::Span(const Span &span) { *this = span; }

Span &Span::operator=(const Span &span) {
  this->n = span.n;
  this->v = span.v;
  return *this;
}

Span::~Span() {}

void Span::addNumber(int n) {
  if (this->v.size() >= this->n) throw std::exception();
  this->v.push_back(n);
}

void Span::addNumber(std::vector<int>::iterator begin,
                     std::vector<int>::iterator end) {
  if (this->v.size() + std::distance(begin, end) > this->n)
    throw std::exception();
  this->v.insert(this->v.end(), begin, end);
}

int Span::shortestSpan() {
  if (this->v.size() <= 1) throw std::exception();
  std::vector<int> v_sorted = this->v;
  std::sort(v_sorted.begin(), v_sorted.end());
  int min = v_sorted[1] - v_sorted[0];
  for (size_t i = 1; i < v_sorted.size(); i++) {
    if (v_sorted[i] - v_sorted[i - 1] < min)
      min = v_sorted[i] - v_sorted[i - 1];
  }
  return min;
}

int Span::longestSpan() {
  if (this->v.size() <= 1) throw std::exception();
  std::vector<int> v_sorted = this->v;
  std::sort(v_sorted.begin(), v_sorted.end());
  return v_sorted[v_sorted.size() - 1] - v_sorted[0];
}
