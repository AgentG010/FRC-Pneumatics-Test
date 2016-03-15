#include "OI.h"
#include "RobotMap.h"
#include "CommandBase.h"
#include "Commands/PistonExtend.h"
#include "Commands/PistonRetract.h"
#include "Commands/PistonSolenoidOff.h"

OI::OI()
{
    joystick = new Joystick(0);
    JoystickButton* pistonExtend = new JoystickButton(joystick, 1);
    JoystickButton* pistonRetract = new JoystickButton(joystick, 2);

    pistonExtend->WhenPressed(new PistonExtend(CommandBase::piston));
    pistonExtend->WhenReleased(new PistonSolenoidOff(CommandBase::piston));

    pistonRetract->WhenPressed(new PistonRetract(CommandBase::piston));
    pistonRetract->WhenReleased(new PistonSolenoidOff(CommandBase::piston));
}
