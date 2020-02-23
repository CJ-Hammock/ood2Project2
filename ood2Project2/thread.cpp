/*
*  This is the car.cpp class that tests the variables in the car class by systems using
*  multithreading
*
*/
#include "car.h"
#include <iostream>
#include <thread> 
#include <chrono> 
using namespace std;
Car car;
DieselCar Dcar;

void threadEngine(char a)
{
	if (a == 'd')
	{
		Dcar.engine.engine_solenoid_test_start = 1;
		Dcar.engine.engine_sensor_test_start = 1;
	}

	if (a == 'c')
	{
		car.engine.engine_solenoid_test_start = 1;
		car.engine.engine_sensor_test_start = 1;
	}

	cout << "Starting Engine Test" << endl;
	auto start = std::chrono::high_resolution_clock::now();
	std::this_thread::sleep_for(4s);
	auto end = std::chrono::high_resolution_clock::now();

	if (a == 'd')
	{
		if (Dcar.engine.engine_solenoid_test_passed == 1 && Dcar.engine.engine_sensor_test_passed == 1)
			cout << "Engine Passed" << endl;
		else
			cout << "Engine Failed" << endl;

	}
	else if (a == 'c')
	{
		if (car.engine.engine_solenoid_test_passed == 1 && car.engine.engine_sensor_test_passed == 1)
			cout << "Engine Passed" << endl;
		else
			cout << "Engine Failed" << endl;
	}
	else
		cout << "Engine Failed to find" << endl;

}

void threadTrans(char a)
{
	if (a == 'd')
	{
		Dcar.trans.Solenoid_test_start = 1;
		Dcar.trans.Cruise_control_test_start = 1;
		Dcar.trans.Hydrolic_tests_start = 1;
		Dcar.trans.Speed_sensors_test_start = 1;
	}

	if (a == 'c')
	{
		car.trans.Solenoid_test_start = 1;
		car.trans.Cruise_control_test_start = 1;
		car.trans.Hydrolic_tests_start = 1;
		car.trans.Speed_sensors_test_start = 1;
	}

	cout << "Starting Transmission Test" << endl;
	auto start = std::chrono::high_resolution_clock::now();
	std::this_thread::sleep_for(8s);
	auto end = std::chrono::high_resolution_clock::now();

	if (a == 'd')
	{
		if (Dcar.trans.Solenoid_test_passed == 1 && Dcar.trans.Cruise_control_test_passed == 1 && Dcar.trans.Hydrolic_tests_passed == 1 && Dcar.trans.Speed_sensors_test_passed == 1)
			cout << "Transmission Passed" << endl;
		else
			cout << "Transmission Failed" << endl;
	}
	else if (a == 'c')
	{
		if (car.trans.Solenoid_test_passed == 1 && car.trans.Cruise_control_test_passed == 1 && car.trans.Hydrolic_tests_passed == 1 && car.trans.Speed_sensors_test_passed == 1)
			cout << "Transmission Passed" << endl;
		else
			cout << "Transmission Failed" << endl;
	}
	else
		cout << "Transmission Failed to find" << endl;

}

void threadComfort(char a)
{
	if (a == 'd')
	{
		Dcar.comfort.light_test_start = 1;
		Dcar.comfort.wiper_test_start = 1;
		Dcar.comfort.air_test_start = 1;
	}

	if (a == 'c')
	{
		car.comfort.light_test_start = 1;
		car.comfort.wiper_test_start = 1;
		car.comfort.air_test_start = 1;
	}

	cout << "Starting Comfort Test" << endl;
	auto start = std::chrono::high_resolution_clock::now();
	std::this_thread::sleep_for(2s);
	auto end = std::chrono::high_resolution_clock::now();

	if (a == 'd')
	{
		if (Dcar.comfort.light_test_passed == 1 && Dcar.comfort.wiper_passed == 1 && Dcar.comfort.air_passed == 1)
		{
			cout << "Comfort Passed" << endl;

		}
		else
			cout << "Comfort Failed" << endl;
	}
	else if (a == 'c')
	{
		if (car.comfort.light_test_passed == 1 && car.comfort.wiper_passed == 1 && car.comfort.air_passed == 1)
			cout << "Comfort Passed" << endl;
		else
			cout << "Comfort Failed" << endl;
	}
	else
		cout << "Comfort Failed to find" << endl;
}

void threadSafety(char a)
{
	if (a == 'd')
	{
		Dcar.safe.Emergency_test_start = 1;
	}

	if (a == 'c')
	{
		car.safe.Emergency_test_start = 1;
	}

	cout << "Starting Safety Test" << endl;
	auto start = std::chrono::high_resolution_clock::now();
	std::this_thread::sleep_for(5s);
	auto end = std::chrono::high_resolution_clock::now();

	if (a == 'd')
	{
		if (Dcar.safe.Emergency_test_passed == 1)
			cout << "Safety Passed" << endl;
		else
			cout << "Safety Failed" << endl;
	}
	else if (a == 'c')
	{
		if (car.safe.Emergency_test_passed == 1)
			cout << "Safety Passed" << endl;
		else
			cout << "Safety Failed" << endl;
	}
	else
		cout << "Safety Failed to find" << endl;
}

void runDieselThreads()
{

	auto beginD = std::chrono::high_resolution_clock::now();


	thread t1(threadTrans, 'd');
	thread t2(threadEngine, 'd');
	thread t3(threadComfort, 'd');
	thread t4(threadSafety, 'd');

	t1.join();
	t2.join();
	t3.join();
	t4.join();

	auto endD = std::chrono::high_resolution_clock::now();
	cout << "time for diesel multi thread: " << chrono::duration_cast<chrono::nanoseconds>(endD - beginD).count()*.000000001 << endl;

}
void runRegularCarThreads()
{
	auto beginR = std::chrono::high_resolution_clock::now();

	thread t1(threadTrans, 'c');
	thread t2(threadEngine, 'c');
	thread t3(threadComfort, 'c');
	thread t4(threadSafety, 'c');

	t1.join();
	t2.join();
	t3.join();
	t4.join();

	auto endR = std::chrono::high_resolution_clock::now();
	cout << "time for regular multi thread: " << chrono::duration_cast<chrono::nanoseconds>(endR - beginR).count() * .000000001 << endl;
}


void runDieselSingleThread()
{

	auto beginSD = std::chrono::high_resolution_clock::now();


	thread t1(threadTrans, 'd');
	t1.join();
	thread t2(threadEngine, 'd');
	t2.join();
	thread t3(threadComfort, 'd');
	t3.join();
	thread t4(threadSafety, 'd');
	t4.join();

	auto endSD = std::chrono::high_resolution_clock::now();
	cout << "time for diesel single thread: " << chrono::duration_cast<chrono::nanoseconds>(endSD - beginSD).count()*.000000001 << endl;

}


void runRegularCarSingleThread()
{
	auto beginSR = std::chrono::high_resolution_clock::now();

	thread t1(threadTrans, 'c');
	t1.join();
	thread t2(threadEngine, 'c');
	t2.join();
	thread t3(threadComfort, 'c');
	t3.join();
	thread t4(threadSafety, 'c');
	t4.join();

	auto endSR = std::chrono::high_resolution_clock::now();
	cout << "time for regular single thread: " << chrono::duration_cast<chrono::nanoseconds>(endSR - beginSR).count() * .000000001 << endl;
}


int main()
{
	int choice = 0;
	cout << "please enter type of car Diesel(1), Regular(0), Diesel single thread(2), Regular single thread(3)" << endl;
	cin >> choice;

	switch (choice)
	{
	case 1: runDieselThreads(); break;
	case 0:  runRegularCarThreads(); break;
	case 2: runDieselSingleThread(); break;
	case 3:  runRegularCarSingleThread(); break;
	default: cout << "not recognized command" << endl; break;
	}


	return 0;
}