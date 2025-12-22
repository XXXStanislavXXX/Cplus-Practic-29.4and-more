#include <iostream>
#include <vector>
#include "unique_filter.h"

int main() {
    std::vector<int> values = {1, 2, 3, 2, 4, 1, 5, 3};

    std::cout << "Original values: ";
    for (auto v : values) std::cout << v << ' ';
    std::cout << '\n';

    auto unique = filter_unique(values);

    std::cout << "Filtered unique: ";
    for (auto v : *unique) std::cout << v << ' ';
    std::cout << '\n';

    return 0;
}