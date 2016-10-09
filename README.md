##Basic code to test a Pneumatic Piston
###For use in FRC (Programmed with WPILIB 2016, without Smart Pointers)

#### Electronics Used:
 * NI RoboRIO (FRC Kit of Parts 2015)
 * Pneumatics Control Module by CrossTheRoad Electronics (FRC KOP 2015)
 * Power Distribution Panel by CrossTheRoad Electronics (FRC KOP 2015)
 * 24V Double Solenoid Valve by Festo (VUVG-L10-B52-T-M7-1P3) (FRC KOP 2011)


####Setup:
 * Double Solenoid connected to PCM on ports 0 and 1
 * Only 1 joystick used
 * Trigger of Joystick extends the piston
 * Button 2 of Joystick retracts the piston
 * Not pressing any buttons cuts the power to the solenoid to conserve power
