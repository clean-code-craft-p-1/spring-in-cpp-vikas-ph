#include "LEDAlert.h"

// Constructor
LEDAlert::LEDAlert() : ledGlows(false)
{
}

// Destructor
LEDAlert::~LEDAlert()
{
}

// Send alert to LED
void LEDAlert::sendAlert()
{
    ledGlows = true;
}