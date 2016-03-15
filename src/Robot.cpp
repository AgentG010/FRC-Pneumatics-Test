#include "WPILib.h"
#include "Commands/Command.h"
#include "CommandBase.h"

class Robot: public IterativeRobot
{
    private:
        Command* autonomousCommand;

        void RobotInit()
        {
            CommandBase::init();
            autonomousCommand = NULL; // No autonomous :P
        }

        void DisabledInit()
        {
        }

        void DisabledPeriodic()
        {
            Scheduler::GetInstance()->Run();
        }

        void AutonomousInit()
        {
            if (autonomousCommand != NULL) autonomousCommand->Start();
        }

        void AutonomousPeriodic()
        {
            Scheduler::GetInstance()->Run();
        }

        void TeleopInit()
        {
            // Stops auto mode
            if (autonomousCommand != NULL) autonomousCommand->Cancel();
        }

        void TeleopPeriodic()
        {
            Scheduler::GetInstance()->Run();
        }

        void TestPeriodic()
        {
            LiveWindow::GetInstance()->Run();
        }
};

START_ROBOT_CLASS(Robot)
