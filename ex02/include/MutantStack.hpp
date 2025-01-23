/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:42:43 by bazuara           #+#    #+#             */
/*   Updated: 2025/01/23 16:00:01 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
 private:
    /* data */
 public:
    MutantStack();
    ~MutantStack();
    MutantStack(const MutantStack<T> &other);
    MutantStack &operator=(const MutantStack<T> &other);

    typedef typename std::stack<T>::container_type container_type;
    typedef typename container_type::iterator iterator;
    typedef typename container_type::const_iterator const_iterator;
    typedef typename container_type::reverse_iterator reverse_iterator;
    typedef typename container_type::const_reverse_iterator const_reverse_iterator;


    // begin();
    // end();


    // push();
    // pop();
    // top();
    // size();
    // empty();
};
