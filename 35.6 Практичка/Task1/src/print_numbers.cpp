#include "print_numbers.h"
#include <iostream>
#include <initializer_list>

void print_numbers() {
    for (auto n : std::initializer_list<int>{1, 2, 3, 4, 5})
        std::cout << "i = " << n << std::endl;
}