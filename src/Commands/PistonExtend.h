#ifndef PistonExtend_H
#define PistonExtend_H

#include "../CommandBase.h"
#include "WPILib.h"

class PistonExtend: public CommandBase
{
    private:
        Piston* _piston;
    public:
        PistonExtend(Piston* pistonIn);
        void Initialize();
        void Execute();
        bool IsFinished();
        void End();
        void Interrupted();
};

#endif
