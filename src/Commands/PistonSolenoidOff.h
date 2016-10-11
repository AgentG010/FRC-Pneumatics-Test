#ifndef PistonSolenoidOff_H
#define PistonSolenoidOff_H

#include "../CommandBase.h"
#include "WPILib.h"

class PistonSolenoidOff: public CommandBase
{
    public:
        PistonSolenoidOff();
        void Initialize();
        void Execute();
        bool IsFinished();
        void End();
        void Interrupted();
};

#endif
