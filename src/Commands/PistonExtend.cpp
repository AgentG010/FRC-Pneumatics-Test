#include "PistonExtend.h"

// takes in the piston to extend
PistonExtend::PistonExtend(Piston* pistonIn)
{
    Requires(piston);
    _piston = pistonIn;
}

void PistonExtend::Initialize()
{
}

void PistonExtend::Execute()
{
    _piston->extend();
}

bool PistonExtend::IsFinished()
{
	return false;
}

void PistonExtend::End()
{
}

void PistonExtend::Interrupted()
{
}
