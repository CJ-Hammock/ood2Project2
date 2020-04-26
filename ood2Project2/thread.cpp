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


//atomic and nonatomic thread calls are labled. they call their atomic / non atomic "shared" functions
void threadAtomicEngine(char a)
{

	cout << "Starting Engine Test" << endl;
	auto start = std::chrono::high_resolution_clock::now();
	std::this_thread::sleep_for(1s);
	auto end = std::chrono::high_resolution_clock::now();

	if (a == 'd')
	{
		if (Dcar.engine.Solenoid_test() && Dcar.engine.Sensor_test() )
		{
			//this nesting makes atleast some of the longer calls run
			if (Dcar.shared.atomic_electric_test(10) && Dcar.shared.atomic_key_test())
			{
					cout << "Engine Passed" << endl;
			}
			else
				cout << "Engine Failed from shared data" << endl;
		}
		else
			cout << "Engine Failed" << endl;

	}
	else if (a == 'c')
	{
		if (car.engine.Solenoid_test() && car.engine.Sensor_test())
		{
			//this nesting makes atleast some of the longer calls run
			if (car.shared.atomic_electric_test(10)&& car.shared.atomic_key_test())
			{
					cout << "Engine Passed" << endl;
			}
			else
				cout << "Engine Failed from shared data" << endl;
		}
		else
			cout << "Engine Failed" << endl;
	}
	else
		cout << "Engine Failed to find" << endl;

}

void threadEngine(char a)
{

	cout << "Starting Engine Test" << endl;
	auto start = std::chrono::high_resolution_clock::now();
	std::this_thread::sleep_for(1s);
	auto end = std::chrono::high_resolution_clock::now();

	if (a == 'd')
	{
		if (Dcar.engine.Solenoid_test() && Dcar.engine.Sensor_test() )
		{			
			//this nesting makes atleast some of the longer calls run
			if (Dcar.shared.na_key_test()&& Dcar.shared.na_electric_test(10))
			{
					cout << "Engine Passed" << endl;
			}
			else
				cout << "Engine Failed from shared data" << endl;
		}
		else
			cout << "Engine Failed" << endl;

	}
	else if (a == 'c')
	{
		if (car.engine.Solenoid_test() && car.engine.Sensor_test())
		{
			//this nesting makes atleast some of the longer calls run
			if (car.shared.na_electric_test(10)&& car.shared.na_key_test())
			{
					cout << "Engine Passed" << endl;
			}
			else
				cout << "Engine Failed from shared data" << endl;
		}
		else
			cout << "Engine Failed" << endl;
	}
	else
		cout << "Engine Failed to find" << endl;

}

void threadTrans(char a)
{
	cout << "Starting Transmission Test" << endl;
	auto start = std::chrono::high_resolution_clock::now();
	std::this_thread::sleep_for(1s);
	auto end = std::chrono::high_resolution_clock::now();

	if (a == 'd')
	{
		if (Dcar.trans.Solenoid_test() && Dcar.trans.Cruise_control_test() && Dcar.trans.Hydrolic_tests() && Dcar.trans.Speed_sensors_test())
			cout << "Transmission Passed" << endl;
		else
			cout << "Transmission Failed" << endl;
	}
	else if (a == 'c')
	{
		if (car.trans.Solenoid_test() && car.trans.Cruise_control_test() && car.trans.Hydrolic_tests() && car.trans.Speed_sensors_test())
			cout << "Transmission Passed" << endl;
		else
			cout << "Transmission Failed" << endl;
	}
	else
		cout << "Transmission Failed to find" << endl;

}

void threadComfort(char a)
{

	cout << "Starting Comfort Test" << endl;
	auto start = std::chrono::high_resolution_clock::now();
	std::this_thread::sleep_for(1s);
	auto end = std::chrono::high_resolution_clock::now();

	if (a == 'd')
	{
		if (Dcar.comfort.Light_test() && Dcar.comfort.Wiper_test() && Dcar.comfort.Wiper_test())
			cout << "Comfort Passed" << endl;
		else
			cout << "Comfort Failed" << endl;
	}
	else if (a == 'c')
	{
		if (car.comfort.Light_test() && car.comfort.Wiper_test() && car.comfort.Wiper_test())
			cout << "Comfort Passed" << endl;
		else
			cout << "Comfort Failed" << endl;
	}
	else
		cout << "Comfort Failed to find" << endl;
}

void threadAtomicSafety(char a)
{
	cout << "Starting Safety Test" << endl;
	auto start = std::chrono::high_resolution_clock::now();
	std::this_thread::sleep_for(1s);
	auto end = std::chrono::high_resolution_clock::now();

	if (a == 'd')
	{
		if (Dcar.safe.Emergency_test())
		{
			if (Dcar.shared.na_key_test() && Dcar.shared.na_electric_test(10))
				cout << "Safety Passed" << endl;
			else
				cout << "safety failed from shared data" << endl;
		}
		else
			cout << "Safety Failed" << endl;
	}
	else if (a == 'c')
	{
		if (car.safe.Emergency_test() )
		{
			if (car.shared.na_key_test() && car.shared.na_electric_test(10))
				cout << "Safety Passed" << endl;
			else
				cout << "safety failed from shared data" << endl;
		}
		else
			cout << "Safety Failed" << endl;
	}
	else
		cout << "Safety Failed to find" << endl;
}


void threadSafety(char a)
{
	cout << "Starting Safety Test" << endl;
	auto start = std::chrono::high_resolution_clock::now();
	std::this_thread::sleep_for(1s);
	auto end = std::chrono::high_resolution_clock::now();

	if (a == 'd')
	{
		if (Dcar.safe.Emergency_test())
		{
			if (Dcar.shared.na_key_test() && Dcar.shared.na_electric_test(10))
				cout << "Safety Passed" << endl;
			else
				cout << "safety failed from shared data" << endl;
		}
		else
			cout << "Safety Failed" << endl;
	}
	else if (a == 'c')
	{
		if (car.safe.Emergency_test() )
		{
			if (car.shared.na_key_test() && car.shared.na_electric_test(10))
				cout << "Safety Passed" << endl;
			else
				cout << "safety failed from shared data" << endl;
		}
		else
			cout << "Safety Failed" << endl;
	}
	else
		cout << "Safety Failed to find" << endl;
}


void runDieselThreads()
{
	auto beginSD = std::chrono::high_resolution_clock::now();

	thread t1(threadTrans, 'd');
	thread t2(threadEngine, 'd');
	thread t3(threadComfort, 'd');
	thread t4(threadSafety, 'd');

	t1.join();
	t2.join();
	t3.join();
	t4.join();

	auto endSD = std::chrono::high_resolution_clock::now();
	cout << "time for diesel multi thread: " << chrono::duration_cast<chrono::nanoseconds>(endSD - beginSD).count() * .000000001 << endl;


}

void runRegularCarThreads()
{
	auto beginSD = std::chrono::high_resolution_clock::now();

	thread t1(threadTrans, 'c');
	thread t2(threadEngine, 'c');
	thread t3(threadComfort, 'c');
	thread t4(threadSafety, 'c');

	t1.join();
	t2.join();
	t3.join();
	t4.join();


	auto endSD = std::chrono::high_resolution_clock::now();
	cout << "time for regular car multi thread: " << chrono::duration_cast<chrono::nanoseconds>(endSD - beginSD).count() * .000000001 << endl;

}

void runAtomicDieselThreads()
{
	auto beginSD = std::chrono::high_resolution_clock::now();

	thread t1(threadTrans, 'd');
	thread t2(threadAtomicEngine, 'd');
	thread t3(threadComfort, 'd');
	thread t4(threadAtomicSafety, 'd');

	t1.join();
	t2.join();
	t3.join();
	t4.join();

	auto endSD = std::chrono::high_resolution_clock::now();
	cout << "time for diesel atomic multi thread: " << chrono::duration_cast<chrono::nanoseconds>(endSD - beginSD).count() * .000000001 << endl;


}

void runAtomicRegularCarThreads()
{
	auto beginSD = std::chrono::high_resolution_clock::now();

	thread t1(threadTrans, 'c');
	thread t2(threadAtomicEngine, 'c');
	thread t3(threadComfort, 'c');
	thread t4(threadAtomicSafety, 'c');

	t1.join();
	t2.join();
	t3.join();
	t4.join();


	auto endSD = std::chrono::high_resolution_clock::now();
	cout << "time for regular car atomic multi thread: " << chrono::duration_cast<chrono::nanoseconds>(endSD - beginSD).count() * .000000001 << endl;

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
	cout << "time for diesel single thread: " << chrono::duration_cast<chrono::nanoseconds>(endSD - beginSD).count() * .000000001 << endl;

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
	cout << "please enter type of car Diesel(1), Regular(0), Diesel single thread(2), Regular single thread(3),\nAtomic Diesel multi thread(4), Atomic Regular multi thread (5)" << endl;
	cin >> choice;

	switch (choice)
	{
	case 1: runDieselThreads(); break;
	case 0:  runRegularCarThreads(); break;
	case 2: runDieselSingleThread(); break;
	case 3:  runRegularCarSingleThread(); break;
	case 4: runAtomicDieselThreads(); break;
	case 5: runAtomicRegularCarThreads(); break;
	default: cout << "not recognized command" << endl; break;
	}

	return 0;
}