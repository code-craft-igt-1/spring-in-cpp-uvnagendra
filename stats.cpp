#include "stats.h"
#include <limits>

#include <algorithm>
#include <numeric>
Stats Statistics::ComputeStatistics(const std::vector<double>& numbers) {
    Stats stats;
    if (!numbers.empty()) {
        stats.min = *std::min_element(numbers.begin(), numbers.end());
        stats.max = *std::max_element(numbers.begin(), numbers.end());
        stats.average = std::accumulate(numbers.begin(), numbers.end(), 0.0) / numbers.size();
    }
    else{
        stats.min = std::numeric_limits<double>::quiet_NaN();
        stats.max = std::numeric_limits<double>::quiet_NaN();
        stats.average = std::numeric_limits<double>::quiet_NaN();
    }
    return stats;
}
