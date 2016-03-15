#include "Piston.h"
#include "../RobotMap.h"

Piston::Piston() :
		Subsystem("Piston")
{
    piston = new DoubleSolenoid(PISTON_EXTEND_PORT, PISTON_RETRACT_PORT);
}

void Piston::InitDefaultCommand()
{
}

void Piston::extend()
{
    piston->Set(DoubleSolenoid::Value::kForward);
}

void Piston::retract()
{
    piston->Set(DoubleSolenoid::Value::kReverse);
}

// Turns off the power going to the solenoids
// Double solenoid doesn't have to be actuated the whole time
void Piston::solenoidOff()
{
    piston->Set(DoubleSolenoid::Value::kOff);
}
