#include "EmailAlert.h"

// Constructor
EmailAlert::EmailAlert() : emailSent(false)
{
}

// Destructor
EmailAlert::~EmailAlert()
{
}

// Send email alert
void EmailAlert::sendAlert()
{
    emailSent = true;
}