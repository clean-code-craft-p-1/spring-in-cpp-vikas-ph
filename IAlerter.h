#ifndef IALERTER_H
#define IALERTER_H

class IAlerter
{
    public:
        // Constructor
        IAlerter() {};

        // Destructor
        virtual ~IAlerter() {};

        // Send alert
        virtual void sendAlert() = 0;
};

#endif // !IALERTER_H
