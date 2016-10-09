#include "WPILib.h"
#include "Commands/Command.h"
#include "CommandBase.h"

class Robot: public IterativeRobot
{
    private:

        void RobotInit()
        {
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
        }

        void AutonomousPeriodic()
        {
            Scheduler::GetInstance()->Run();
        }

        void TeleopInit()
        {
            // Stops auto mode
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
