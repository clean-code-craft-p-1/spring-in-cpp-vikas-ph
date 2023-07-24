#include "stats.h"
#include <numeric>
#include <algorithm>
#include "math.h"

using namespace Statistics;

Stats Statistics::ComputeStatistics(const std::vector<double>& rawData)
{
    //Implement statistics here
    Stats computatedStats = {};

    if (rawData.size() > 0u)
    {
        computatedStats.average =  std::accumulate (rawData.begin(), rawData.end(), 0.0f) / rawData.size();
        computatedStats.max     = *std::max_element(rawData.begin(), rawData.end());
        computatedStats.min     = *std::min_element(rawData.begin(), rawData.end());
    }
    else
    {
        computatedStats.average = NAN;
        computatedStats.max     = NAN;
        computatedStats.min     = NAN;
    }

    return computatedStats;
}
