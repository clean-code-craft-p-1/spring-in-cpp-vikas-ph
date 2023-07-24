#include "IAlerter.h"

#ifndef LEDALERT_H
#define LEDALERT_H

class LEDAlert : public IAlerter
{
    public:
        // Constructor
        LEDAlert();

        // Destructor
        virtual ~LEDAlert();

        // Send alert
        virtual void sendAlert() override;

    public:
        // Member varibles
        bool ledGlows;
};

#endif // !LEDALERT_H

