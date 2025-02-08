/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:56:02 by bazuara           #+#    #+#             */
/*   Updated: 2025/02/08 11:38:03 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MutantStack.hpp>
#include <algorithm>
#include <vector>

int main(void) {
  std::cout << "===== Original Test =====" << std::endl;
  {
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
      std::cout << *it << std::endl;
      ++it;
    }
    std::stack<int> s(mstack);
  }

  std::cout << "\n===== Extra Tests =====" << std::endl;

  // 🟢 Prueba con diferentes tipos de datos
  std::cout << "\n🧪 Testing with double values:" << std::endl;
  MutantStack<double> dstack;
  dstack.push(1.1);
  dstack.push(2.2);
  dstack.push(3.3);
  MutantStack<double>::iterator dit = dstack.begin();
  MutantStack<double>::iterator dite = dstack.end();
  while (dit != dite) {
    std::cout << *dit << " ";
    ++dit;
  }
  std::cout << std::endl;

  std::cout << "\n🧪 Testing with std::string:" << std::endl;
  MutantStack<std::string> sstack;
  sstack.push("Hello");
  sstack.push("World");
  MutantStack<std::string>::iterator sit = sstack.begin();
  MutantStack<std::string>::iterator site = sstack.end();
  while (sit != site) {
    std::cout << *sit << " ";
    ++sit;
  }
  std::cout << std::endl;

  // 🟢 Prueba de copia y asignación
  std::cout << "\n🧪 Copy and Assignment Test:" << std::endl;
  MutantStack<int> copyStack;
  copyStack.push(42);
  copyStack.push(84);
  MutantStack<int> assignedStack;
  assignedStack = copyStack;
  std::cout << "CopyStack top: " << copyStack.top() << std::endl;
  std::cout << "AssignedStack top: " << assignedStack.top() << std::endl;

  // 🟢 Prueba de uso con algoritmos de la STL
  std::cout << "\n🧪 Using STL algorithms (find, sort):" << std::endl;
  MutantStack<int> stlStack;
  stlStack.push(10);
  stlStack.push(20);
  stlStack.push(30);
  stlStack.push(40);
  MutantStack<int>::iterator findIt =
      std::find(stlStack.begin(), stlStack.end(), 30);
  if (findIt != stlStack.end()) {
    std::cout << "Value 30 found in stack!" << std::endl;
  } else {
    std::cout << "Value 30 NOT found in stack!" << std::endl;
  }

  // 🟢 Prueba con iteración inversa manual (sin std::reverse_iterator)
  std::cout << "\n🧪 Reverse Iteration Test:" << std::endl;
  MutantStack<int>::iterator rit = stlStack.end();
  while (rit != stlStack.begin()) {
    --rit;
    std::cout << *rit << " ";
  }
  std::cout << std::endl;

  return 0;
}
