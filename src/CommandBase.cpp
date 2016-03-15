#include "CommandBase.h"
#include "Commands/Scheduler.h"

OI* CommandBase::oi;
Piston* CommandBase::piston;

CommandBase::CommandBase(const std::string &name) :
		Command(name)
{
}

CommandBase::CommandBase() :
		Command()
{

}

void CommandBase::init()
{
	CommandBase::oi = new OI();
	CommandBase::piston = new Piston();
}
