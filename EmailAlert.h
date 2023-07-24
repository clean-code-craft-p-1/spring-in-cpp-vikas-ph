#include "IAlerter.h"

#ifndef EMAILALERT_H
#define EMAILALERT_H

class EmailAlert : public IAlerter
{
    public:
        // Constructor
        EmailAlert();

        // Destructor
        virtual ~EmailAlert();

        // Send alert
        virtual void sendAlert() override;

    public:
        // Member variables
        bool emailSent;
};

#endif // !EMAILALERT_H
