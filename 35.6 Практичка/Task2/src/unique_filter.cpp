#include "unique_filter.h"
#include <unordered_set>

std::unique_ptr<std::vector<int>> filter_unique(const std::vector<int>& values) {
    // lambda that performs filtering using unordered_set to track seen values
    auto filter = [](const std::vector<int>& input) -> std::unique_ptr<std::vector<int>> {
        auto result = std::make_unique<std::vector<int>>();
        std::unordered_set<int> seen;
        for (auto v : input) { // range-based for with auto
            if (seen.find(v) == seen.end()) {
                seen.insert(v);
                result->push_back(v);
            }
        }
        return result;
    };

    return filter(values);
}