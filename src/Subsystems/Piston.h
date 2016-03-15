#ifndef Piston_H
#define Piston_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Piston: public Subsystem
{
    private:
        DoubleSolenoid* piston;
    public:
        Piston();
        void InitDefaultCommand();

        // Piston actions
        void extend();
        void retract();
        void solenoidOff();
};

#endif
