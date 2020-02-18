#pragma once
#pragma once
/*
*  This is the car.h class that groups the systems under one car
*
*
*/
#include "car_sim.h"
class Car
{
public:
	engine engine;
	TransmissionElectronics trans;
	standardComfort comfort;
	safety safe;
};

class DieselCar
{
public:
	engineDiesel engine;
	TransmissionElectronics trans;
	standardComfort comfort;
	safety safe;
};