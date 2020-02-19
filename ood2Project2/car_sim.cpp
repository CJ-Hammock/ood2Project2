#include "car_sim.h"

engine::engine()
{
	Mass_Air_Flow_Sensor = 0; //int calculates volume density of intake
	Engine_Speed_Sensor = 0.0; // float monitors crank shaft speed 
	Oxygen_Sensor = 0.0; //float calculates exhaust for unburdened oxygen 
	Manifold_Absolute_Pressure_Sensor_ext = 0; //int monitors pressure from outside engine
	Manifold_Absolute_Pressure_Sensor_in = 0; //int monitors pressure from inside engine
	Spark_Knock_Sensor = 0.0; //float in head gasket ensures clean fuel burn
	Fuel_Temp_sensor = 0; //int sees if the right amount of fuel is being pumped
	Voltage_sensor = 0.0; //double makes sure idle speed is sufficient 
	engine_sensor_test_start = 0;
	engine_sensor_test_passed = 1;
	Starter_moter = 0; //int enum 1(on) or 0(off) cranks engine
	inginition_coil = 0;//int enum 1(on) or 0(off) sparks fuel to create burn
	fuel_injector_solenoid = 0.0; //double valve that controls fuel injection
	engine_coolant_pump = 0.0; //double pump that controls coolant create
	lambda_control = 0.0;//double solenoid to regulate engine loads efficiently 
	OBD = 0; //int onboard diagnostics used to 
	engine_solenoid_test_start = 0;
	engine_solenoid_test_passed = 1;
}

bool engine::Solenoid_test()
{
	return true;
}

bool engine::Sensor_test()
{
	return true;
}

engineDiesel::engineDiesel()
{

	Mass_Air_Flow_Sensor = 0; //int calculates volume density of intake
	Engine_Speed_Sensor = 0.0; // float monitors crank shaft speed 
	Oxygen_Sensor = 0.0; //float calculates exhaust for unburdened oxygen 
	Manifold_Absolute_Pressure_Sensor_ext = 0; //int monitors pressure from outside engine
	Manifold_Absolute_Pressure_Sensor_in = 0; //int monitors pressure from inside engine
	Fuel_Temp_sensor = 0; //int sees if the right amount of fuel is being pumped
	Voltage_sensor = 0.0; //double makes sure idle speed is sufficient
	engine_sensor_test_start = 0;
	engine_sensor_test_passed = 1;
	Starter_moter = 0; //int enum 1(on) or 0(off) cranks engine
	fuel_injector_solenoid = 0.0; //double valve that controls fuel injection
	engine_coolant_pump = 0.0; //double pump that controls coolant create
	NOxEmissionControl = 0.0; //double nitric oxide and nitrogen dioxide control
	oxidation_catalytic_converter = 0.0;//double oxygen emission control system
	engine_solenoid_test_start = 0;
	engine_solenoid_test_passed = 1;

}

bool engineDiesel::Solenoid_test()
{

	return true;
}

bool engineDiesel::Sensor_test()
{
	return true;
}





TransmissionElectronics::TransmissionElectronics()
{
	  Vehicle_speed_sensor = 0.0; //double a ratio with wss to see when to switch gears
	  Wheel_speed_sensor = 0.0; //double true vehicle speed 
	  Throttle_position_sensor = 0; //int sensor to determine when to downshift
	  Turbine_speed_sensor = 0; //int determines speed of torque converter
	  Speed_sensors_test_start = 0;//int enum 1(tested) 0(untested) emergency break
	  Speed_sensors_test_passed = 1;//int enum 1(pass) 0(fail) emergency break
	  Transmission_fluid_Temperature_sensor = 0;//int fluid temperature sensor
	  Kick_down_switch = 0; //int sees if accelerator is pushed all the way down
	  Brake_light_switch = 0; //int sees if a shift lock is needed 
	  Traction_Control_System = 0;//int enum 1(on) or 0(off) sees if a traction signal has been sent
	  Hydrolic_line_switch = 0; //int enum 1(on) or 0(off) sees if sufficient fluid is present
	  Hydrolic_tests_start = 0;//int enum 1(tested) 0(untested) emergency break
	  Hydrolic_tests_passed = 1;//int enum 1(pass) 0(fail) emergency break
	  Cruise_control = 0; //int keeps position of accelerator 
	  Cruise_control_test_start = 0;//int enum 1(tested) 0(untested) emergency break
	  Cruise_control_test_passed = 1;//int enum 1(pass) 0(fail) emergency break
	  Shift_lock = 0; //int shiftlock solenoid signal out
	  Shift_solenoid1 = 0; //int enum 1(on) or 0(off) determines which gear
	  Shift_solenoid2 = 0; //int enum 1(on) or 0(off) determines which gear
	  Shift_solenoid3 = 0; //int enum 1(on) or 0(off) determines which gear
	  Shift_solenoid4 = 0; //int enum 1(on) or 0(off) determines which gear
	  Pressure_control_solenoid1 = 0; //int helps shift quality 
	  Pressure_control_solenoid2 = 0; //int helps shift quality 
	  Solenoid_test_start = 0;//int enum 1(tested) 0(untested) emergency break
	  Solenoid_test_passed = 1; //int enum 1(pass) 0(fail) emergency break
}

bool TransmissionElectronics::Solenoid_test()
{
	return true;
}

bool TransmissionElectronics::Cruise_control_test()
{
	return true;
}

bool TransmissionElectronics::Hydrolic_tests()
{
	return true;
}

bool TransmissionElectronics::Speed_sensors_test()
{
	return true;
}



standardComfort::standardComfort()
{
	     climate_control_airspeed = 0; //int enum 1(low air) 2(med air) 3(high air)
	     cold_or_hot = 0; //int enum 1(hot) 0(cold)
	     air_test_start = 0; //int enum 1(tested) 0(untested) emergency break
	     air_passed = 0;//int enum 1(pass) 0(fail) emergency break
	     window_up = 0; //int enum 1(up) 0(down)
	     window_test = 0;//int enum 1(tested) 0(untested) emergency break
	     window_passed = 1;//int enum 1(pass) 0(fail) emergency break
	     wiper_control_speed = 0; //int enum 1(low) 2(med) 3(high)
	     wiper_test_start = 0;//int enum 1(tested) 0(untested) emergency break
	     wiper_passed = 1;//int enum 1(pass) 0(fail) emergency break
	     headlight = 0; //int enum 1(on) 0(off)
	     highbeamslight = 0; //int enum 1(on) 0(off)
	     runninglight = 0; //int enum 1(on) 0(off)
	     cabinlight1 = 0; //int enum 1(on) 0(off)
	     cabinlight2 = 0; //int enum 1(on) 0(off)
	     cabinlight3 = 0; //int enum 1(on) 0(off)
	     light_test_start = 0;//int enum 1(tested) 0(untested) emergency break
	     light_test_passed = 1; //int enum 1(pass) 0(fail) emergency break

}
bool standardComfort::Light_test()
{
	return true;
}

bool standardComfort::Wiper_test()
{
	return true;
}

bool standardComfort::Air_test()
{
	return true;
}

safety::safety()
{
	ABS = 0;//int enum 1(on) 0(off) antilock brake
	PA = 0;//int enum 1(on) 0(off) parking assist
	Lane_assist = 0;//int enum 1(on) 0(off) helps ensure car is in lane
	Airbags_passenger = 0;//int enum 1(on) 0(off) airbags for the passenger
	ETS = 0; //int enum 1(on) 0(off) enhanced tracking system 
	Emergency_break = 0; //int enum 1(on) 0(off) emergency break
	Emergency_test_start = 0; //int enum 1(tested) 0(untested) emergency break
	Emergency_test_passed = 1; //int enum 1(pass) 0(fail) emergency break
}

bool safety::Emergency_test()
{
	return true;
}
