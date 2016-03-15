#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include <string>
#include "Commands/Command.h"
#include "Subsystems/Piston.h"
#include "OI.h"
#include "WPILib.h"

class CommandBase: public Command
{
    public:
        CommandBase(const std::string &name);
        CommandBase();
        static void init();
        // Create a single static instance of all of your subsystems
        static OI* oi;
        static Piston* piston;
};

#endif
