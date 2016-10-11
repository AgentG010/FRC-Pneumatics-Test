#ifndef PistonExtend_H
#define PistonExtend_H

#include "../CommandBase.h"
#include "WPILib.h"

class PistonExtend: public CommandBase
{
    public:
        PistonExtend();
        void Initialize();
        void Execute();
        bool IsFinished();
        void End();
        void Interrupted();
};

#endif
