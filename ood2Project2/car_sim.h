#pragma once
#pragma once

#include <atomic>

/*
*  This is the car_sim.h class that outlines variables found in each system
*
*
*/

class engine
{
public:
	engine();
	bool Solenoid_test();
	bool Sensor_test();


private:
	int     Mass_Air_Flow_Sensor; //int calculates volume density of intake
	float   Engine_Speed_Sensor; // float monitors crank shaft speed 
	float   Oxygen_Sensor; //float calculates exhaust for unburdened oxygen 
	int     Manifold_Absolute_Pressure_Sensor_ext; //int monitors pressure from outside engine
	int     Manifold_Absolute_Pressure_Sensor_in; //int monitors pressure from inside engine
	float   Spark_Knock_Sensor; //float in head gasket ensures clean fuel burn
	int     Fuel_Temp_sensor; //int sees if the right amount of fuel is being pumped
	double  Voltage_sensor; //double makes sure idle speed is sufficient 
	double  engine_sensor_test_start;
	double  engine_sensor_test_passed;
	int     Starter_moter; //int enum 1(on) or 0(off) cranks engine
	int     inginition_coil;//int enum 1(on) or 0(off) sparks fuel to create burn
	double  fuel_injector_solenoid; //double valve that controls fuel injection
	double  engine_coolant_pump; //double pump that controls coolant create
	double  lambda_control;//double solenoid to regulate engine loads efficiently 
	int     OBD; //int onboard diagnostics used to 
	double  engine_solenoid_test_start;
	double  engine_solenoid_test_passed;

};

class engineDiesel
{
public:
	engineDiesel();
	bool Solenoid_test();
	bool Sensor_test();
private:
	int      Mass_Air_Flow_Sensor; //int calculates volume density of intake
	float    Engine_Speed_Sensor; // float monitors crank shaft speed 
	float    Oxygen_Sensor; //float calculates exhaust for unburdened oxygen 
	int      Manifold_Absolute_Pressure_Sensor_ext; //int monitors pressure from outside engine
	int      Manifold_Absolute_Pressure_Sensor_in; //int monitors pressure from inside engine
	int      Fuel_Temp_sensor; //int sees if the right amount of fuel is being pumped
	double   Voltage_sensor; //double makes sure idle speed is sufficient
	double   engine_sensor_test_start;
	double   engine_sensor_test_passed;
	int      Starter_moter; //int enum 1(on) or 0(off) cranks engine
	double   fuel_injector_solenoid; //double valve that controls fuel injection
	double   engine_coolant_pump; //double pump that controls coolant create
	double   NOxEmissionControl; //double nitric oxide and nitrogen dioxide control
	double   oxidation_catalytic_converter;//double oxygen emission control system
	double   engine_solenoid_test_start;
	double   engine_solenoid_test_passed;

};

class TransmissionElectronics
{
public:
	TransmissionElectronics();
	bool Solenoid_test();
	bool Cruise_control_test();
	bool Hydrolic_tests();
	bool Speed_sensors_test();

private:
	double  Vehicle_speed_sensor; //double a ratio with wss to see when to switch gears
	double  Wheel_speed_sensor; //double true vehicle speed 
	int     Throttle_position_sensor; //int sensor to determine when to downshift
	int     Turbine_speed_sensor; //int determines speed of torque converter
	int     Speed_sensors_test_start;//int enum 1(tested) 0(untested) emergency break
	int     Speed_sensors_test_passed;//int enum 1(pass) 0(fail) emergency break
	int     Transmission_fluid_Temperature_sensor;//int fluid temperature sensor
	int     Kick_down_switch; //int sees if accelerator is pushed all the way down
	int     Brake_light_switch; //int sees if a shift lock is needed 
	int     Traction_Control_System;//int enum 1(on) or 0(off) sees if a traction signal has been sent
	int     Hydrolic_line_switch; //int enum 1(on) or 0(off) sees if sufficient fluid is present
	int     Hydrolic_tests_start;//int enum 1(tested) 0(untested) emergency break
	int     Hydrolic_tests_passed;//int enum 1(pass) 0(fail) emergency break
	int     Cruise_control; //int keeps position of accelerator 
	int     Cruise_control_test_start;//int enum 1(tested) 0(untested) emergency break
	int     Cruise_control_test_passed;//int enum 1(pass) 0(fail) emergency break
	int     Shift_lock; //int shiftlock solenoid signal out
	int     Shift_solenoid1; //int enum 1(on) or 0(off) determines which gear
	int     Shift_solenoid2; //int enum 1(on) or 0(off) determines which gear
	int     Shift_solenoid3; //int enum 1(on) or 0(off) determines which gear
	int     Shift_solenoid4; //int enum 1(on) or 0(off) determines which gear
	int     Pressure_control_solenoid1; //int helps shift quality 
	int     Pressure_control_solenoid2; //int helps shift quality 
	int     Solenoid_test_start;//int enum 1(tested) 0(untested) emergency break
	int     Solenoid_test_passed; //int enum 1(pass) 0(fail) emergency break

};

class standardComfort
{
public:
	standardComfort();
	bool Light_test();
	bool Wiper_test();
	bool Air_test();

private:
	int     climate_control_airspeed; //int enum 1(low air) 2(med air) 3(high air)
	int     cold_or_hot; //int enum 1(hot) 0(cold)
	int     air_test_start; //int enum 1(tested) 0(untested) emergency break
	int     air_passed;//int enum 1(pass) 0(fail) emergency break
	int     window_up; //int enum 1(up) 0(down)
	int     window_test;//int enum 1(tested) 0(untested) emergency break
	int     window_passed;//int enum 1(pass) 0(fail) emergency break
	int     wiper_control_speed; //int enum 1(low) 2(med) 3(high)
	int     wiper_test_start;//int enum 1(tested) 0(untested) emergency break
	int     wiper_passed;//int enum 1(pass) 0(fail) emergency break
	int     headlight; //int enum 1(on) 0(off)
	int     highbeamslight; //int enum 1(on) 0(off)
	int     runninglight; //int enum 1(on) 0(off)
	int     cabinlight1; //int enum 1(on) 0(off)
	int     cabinlight2; //int enum 1(on) 0(off)
	int     cabinlight3; //int enum 1(on) 0(off)
	int     light_test_start;//int enum 1(tested) 0(untested) emergency break
	int     light_test_passed; //int enum 1(pass) 0(fail) emergency break

};

class safety
{
public:
	safety();
	bool Emergency_test();


private:
	int     ABS;//int enum 1(on) 0(off) antilock brake
	int     PA;//int enum 1(on) 0(off) parking assist
	int     Lane_assist;//int enum 1(on) 0(off) helps ensure car is in lane
	int     Airbags_passenger;//int enum 1(on) 0(off) airbags for the passenger
	int     ETS; //int enum 1(on) 0(off) enhanced tracking system 
	int     Emergency_break; //int enum 1(on) 0(off) emergency break
	int     Emergency_test_start; //int enum 1(tested) 0(untested) emergency break
	int     Emergency_test_passed; //int enum 1(pass) 0(fail) emergency break
};


//========================added in new class that is accessed by all aspects
//=======all variables should be atomic
class sharedSystems
{
public:
	sharedSystems();
	bool atomic_key_test();//returns if key is present
	bool atomic_electric_test(int load);//returns if both the battery and alternator are acceptable. load helps determine if correct values.
	bool na_key_test();//returns if key is present
	bool na_electric_test(int load);//returns if both the battery and alternator are acceptable. load helps determine if correct values.



private:
	std ::atomic <double>  batteryLevel;//current charge of battery
	std ::atomic <bool> keyPresence;//is the key present some functions need the key others don't (airbags vs 
	std :: atomic <double> alternatorVoltage; // voltage given to battery. when running car should be around 14+ lower if everything on

	double  NAbatteryLevel;//current charge of battery
	bool NAkeyPresence;//is the key present some functions need the key others don't (airbags vs 
	double NAalternatorVoltage; // voltage given to battery. when running car should be around 14+ lower if everything on

};