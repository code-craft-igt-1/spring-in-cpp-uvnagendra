#include <vector>
struct Stats {
    double min;
    double max;
    double average;
};
class Statistics {
public:

   static Stats ComputeStatistics(const std::vector<double>& numbers);
};
