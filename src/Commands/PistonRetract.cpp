#include "PistonRetract.h"

// takes in the piston to retract
PistonRetract::PistonRetract(Piston* pistonIn)
{
    Requires(piston);
    _piston = pistonIn;
}

void PistonRetract::Initialize()
{
}

void PistonRetract::Execute()
{
    _piston->retract();
}

bool PistonRetract::IsFinished()
{
    return false;
}

void PistonRetract::End()
{
}

void PistonRetract::Interrupted()
{
}
