#pragma once
#pragma once
/*
*  This is the car_sim.h class that outlines variables found in each system
*
*
*/

class engine
{
public:
	int     Mass_Air_Flow_Sensor = 0; //int calculates volume density of intake
	float   Engine_Speed_Sensor = 0.0; // float monitors crank shaft speed 
	float   Oxygen_Sensor = 0.0; //float calculates exhaust for unburdened oxygen 
	int     Manifold_Absolute_Pressure_Sensor_ext = 0; //int monitors pressure from outside engine
	int     Manifold_Absolute_Pressure_Sensor_in = 0; //int monitors pressure from inside engine
	float   Spark_Knock_Sensor = 0.0; //float in head gasket ensures clean fuel burn
	int     Fuel_Temp_sensor = 0; //int sees if the right amount of fuel is being pumped
	double  Voltage_sensor = 0.0; //double makes sure idle speed is sufficient 
	double  engine_sensor_test_start = 0;
	double  engine_sensor_test_passed = 1;
	int     Starter_moter = 0; //int enum 1(on) or 0(off) cranks engine
	int     inginition_coil = 0;//int enum 1(on) or 0(off) sparks fuel to create burn
	double  fuel_injector_solenoid = 0.0; //double valve that controls fuel injection
	double  engine_coolant_pump = 0.0; //double pump that controls coolant create
	double  lambda_control = 0.0;//double solenoid to regulate engine loads efficiently 
	int     OBD = 0; //int onboard diagnostics used to 
	double  engine_solenoid_test_start = 0;
	double  engine_solenoid_test_passed = 1;

};

class engineDiesel
{
public:
	int      Mass_Air_Flow_Sensor = 0; //int calculates volume density of intake
	float    Engine_Speed_Sensor = 0.0; // float monitors crank shaft speed 
	float    Oxygen_Sensor = 0.0; //float calculates exhaust for unburdened oxygen 
	int      Manifold_Absolute_Pressure_Sensor_ext = 0; //int monitors pressure from outside engine
	int      Manifold_Absolute_Pressure_Sensor_in = 0; //int monitors pressure from inside engine
	int      Fuel_Temp_sensor = 0; //int sees if the right amount of fuel is being pumped
	double   Voltage_sensor = 0.0; //double makes sure idle speed is sufficient
	double   engine_sensor_test_start = 0;
	double   engine_sensor_test_passed = 1;
	int      Starter_moter = 0; //int enum 1(on) or 0(off) cranks engine
	double   fuel_injector_solenoid = 0.0; //double valve that controls fuel injection
	double   engine_coolant_pump = 0.0; //double pump that controls coolant create
	double   NOxEmissionControl = 0.0; //double nitric oxide and nitrogen dioxide control
	double   oxidation_catalytic_converter = 0.0;//double oxygen emission control system
	double   engine_solenoid_test_start = 0;
	double   engine_solenoid_test_passed = 1;

};

class TransmissionElectronics
{
public:
	double  Vehicle_speed_sensor = 0.0; //double a ratio with wss to see when to switch gears
	double  Wheel_speed_sensor = 0.0; //double true vehicle speed 
	int     Throttle_position_sensor = 0; //int sensor to determine when to downshift
	int     Turbine_speed_sensor = 0; //int determines speed of torque converter
	int     Speed_sensors_test_start = 0;//int enum 1(tested) 0(untested) emergency break
	int     Speed_sensors_test_passed = 1;//int enum 1(pass) 0(fail) emergency break
	int     Transmission_fluid_Temperature_sensor = 0;//int fluid temperature sensor
	int     Kick_down_switch = 0; //int sees if accelerator is pushed all the way down
	int     Brake_light_switch = 0; //int sees if a shift lock is needed 
	int     Traction_Control_System = 0;//int enum 1(on) or 0(off) sees if a traction signal has been sent
	int     Hydrolic_line_switch = 0; //int enum 1(on) or 0(off) sees if sufficient fluid is present
	int     Hydrolic_tests_start = 0;//int enum 1(tested) 0(untested) emergency break
	int     Hydrolic_tests_passed = 1;//int enum 1(pass) 0(fail) emergency break
	int     Cruise_control = 0; //int keeps position of accelerator 
	int     Cruise_control_test_start = 0;//int enum 1(tested) 0(untested) emergency break
	int     Cruise_control_test_passed = 1;//int enum 1(pass) 0(fail) emergency break
	int     Shift_lock = 0; //int shiftlock solenoid signal out
	int     Shift_solenoid1 = 0; //int enum 1(on) or 0(off) determines which gear
	int     Shift_solenoid2 = 0; //int enum 1(on) or 0(off) determines which gear
	int     Shift_solenoid3 = 0; //int enum 1(on) or 0(off) determines which gear
	int     Shift_solenoid4 = 0; //int enum 1(on) or 0(off) determines which gear
	int     Pressure_control_solenoid1 = 0; //int helps shift quality 
	int     Pressure_control_solenoid2 = 0; //int helps shift quality 
	int     Solenoid_test_start = 0;//int enum 1(tested) 0(untested) emergency break
	int     Solenoid_test_passed = 1; //int enum 1(pass) 0(fail) emergency break

};

class standardComfort
{
public:
	int     climate_control_airspeed = 0; //int enum 1(low air) 2(med air) 3(high air)
	int     cold_or_hot = 0; //int enum 1(hot) 0(cold)
	int     air_test_start = 0; //int enum 1(tested) 0(untested) emergency break
	int     air_passed = 0;//int enum 1(pass) 0(fail) emergency break
	int     window_up = 0; //int enum 1(up) 0(down)
	int     window_test = 0;//int enum 1(tested) 0(untested) emergency break
	int     window_passed = 1;//int enum 1(pass) 0(fail) emergency break
	int     wiper_control_speed = 0; //int enum 1(low) 2(med) 3(high)
	int     wiper_test_start = 0;//int enum 1(tested) 0(untested) emergency break
	int     wiper_passed = 1;//int enum 1(pass) 0(fail) emergency break
	int     headlight = 0; //int enum 1(on) 0(off)
	int     highbeamslight = 0; //int enum 1(on) 0(off)
	int     runninglight = 0; //int enum 1(on) 0(off)
	int     cabinlight1 = 0; //int enum 1(on) 0(off)
	int     cabinlight2 = 0; //int enum 1(on) 0(off)
	int     cabinlight3 = 0; //int enum 1(on) 0(off)
	int     light_test_start = 0;//int enum 1(tested) 0(untested) emergency break
	int     light_test_passed = 1; //int enum 1(pass) 0(fail) emergency break

};

class safety
{
public:
	int     ABS = 0;//int enum 1(on) 0(off) antilock brake
	int     PA = 0;//int enum 1(on) 0(off) parking assist
	int     Lane_assist = 0;//int enum 1(on) 0(off) helps ensure car is in lane
	int     Airbags_passenger = 0;//int enum 1(on) 0(off) airbags for the passenger
	int     ETS = 0; //int enum 1(on) 0(off) enhanced tracking system 
	int     Emergency_break = 0; //int enum 1(on) 0(off) emergency break
	int     Emergency_test_start = 0; //int enum 1(tested) 0(untested) emergency break
	int     Emergency_test_passed = 1; //int enum 1(pass) 0(fail) emergency break
};