#include "PistonExtend.h"

PistonExtend::PistonExtend()
{
    Requires(piston);
}

void PistonExtend::Initialize()
{
}

void PistonExtend::Execute()
{
    piston->extend();
}

bool PistonExtend::IsFinished()
{
	return true;
}

void PistonExtend::End()
{
}

void PistonExtend::Interrupted()
{
}
