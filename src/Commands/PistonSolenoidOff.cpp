#include "PistonSolenoidOff.h"

PistonSolenoidOff::PistonSolenoidOff(Piston* pistonIn)
{
    Requires(piston);
    _piston = pistonIn;
}

void PistonSolenoidOff::Initialize()
{
}

void PistonSolenoidOff::Execute()
{
    _piston->solenoidOff();
}

bool PistonSolenoidOff::IsFinished()
{
	return false;
}

void PistonSolenoidOff::End()
{
}

void PistonSolenoidOff::Interrupted()
{
}
