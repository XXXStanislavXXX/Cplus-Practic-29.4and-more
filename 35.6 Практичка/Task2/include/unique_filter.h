#ifndef UNIQUE_FILTER_H
#define UNIQUE_FILTER_H

#include <vector>
#include <memory>

/**
 * Filter unique integers preserving first occurrence order.
 *
 * This function accepts a std::vector<int> containing possibly duplicated numbers
 * and returns a std::unique_ptr<std::vector<int>> with duplicates removed.
 * Implementation uses an internal lambda and std::unordered_set to track seen values.
 *
 * @param values the input vector of ints
 * @return unique_ptr to a new vector<int> containing unique values in original order
 */
std::unique_ptr<std::vector<int>> filter_unique(const std::vector<int>& values);

#endif // UNIQUE_FILTER_H