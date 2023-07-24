#include <vector>
#include "IAlerter.h"

#ifndef STATSALERTER_H
#define STATSALERTER_H

class StatsAlerter
{
    public:
        // Constructor
        StatsAlerter(float maxThreshold, const std::vector<IAlerter*>& alerters);

        // Destructor
        ~StatsAlerter();

        // Check stats max threshold and send alert
        void checkAndAlert(const std::vector<double>& statsData);

    private:
        // Member variables
        double maxThreshold;
        std::vector<IAlerter*> alerters;
};

#endif // !STATSALERTER_H
