#include "StatsAlerter.h"

// Constructor
StatsAlerter::StatsAlerter(float maxThreshold, const std::vector<IAlerter*>& alerters)
{
    // Initialize StatsAlerter
    this->maxThreshold = maxThreshold;
    this->alerters     = alerters;
}

// Destructor
StatsAlerter::~StatsAlerter()
{
    // Release alerters
    alerters.clear();
}

// Check stats max threshold and send alert
void StatsAlerter::checkAndAlert(const std::vector<double>& statsData)
{
    for (unsigned int statsIndex = 0u; statsIndex < statsData.size(); ++statsIndex)
    {
        if (statsData[statsIndex] > maxThreshold)
        {
            for (unsigned int alertIndex = 0u; alertIndex < alerters.size(); ++alertIndex)
            {
                IAlerter* alerter = alerters[alertIndex];
                alerter->sendAlert();
            }
            break;
        }
    }
}