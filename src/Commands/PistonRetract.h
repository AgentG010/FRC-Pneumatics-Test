#ifndef PistonRetract_H
#define PistonRetract_H

#include "../CommandBase.h"
#include "WPILib.h"

class PistonRetract: public CommandBase
{
    private:
        Piston* _piston;
    public:
        PistonRetract();
        void Initialize();
        void Execute();
        bool IsFinished();
        void End();
        void Interrupted();
};

#endif
