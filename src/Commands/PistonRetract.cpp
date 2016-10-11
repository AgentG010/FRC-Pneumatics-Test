#include "PistonRetract.h"

PistonRetract::PistonRetract()
{
    Requires(piston);
}

void PistonRetract::Initialize()
{
}

void PistonRetract::Execute()
{
    piston->retract();
}

bool PistonRetract::IsFinished()
{
    return true;
}

void PistonRetract::End()
{
}

void PistonRetract::Interrupted()
{
}
