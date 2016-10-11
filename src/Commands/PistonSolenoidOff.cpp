#include "PistonSolenoidOff.h"

PistonSolenoidOff::PistonSolenoidOff()
{
    Requires(piston);
}

void PistonSolenoidOff::Initialize()
{
}

void PistonSolenoidOff::Execute()
{
    piston->solenoidOff();
}

bool PistonSolenoidOff::IsFinished()
{
	return true;
}

void PistonSolenoidOff::End()
{
}

void PistonSolenoidOff::Interrupted()
{
}
