#pragma once

#include <string>
using namespace std;

//C++ class must have one pure virtual function (virtual void calculateSalary() = 0;). this =0 makes function pure virtual 
class Employee
{
public:
	float salary;
	float healthCareContributions;
	float vacationDays;
public:
	Employee();

	virtual float calculateWeeklySalary() = 0;
	virtual float calculatWeeklyHealthCareContributions() = 0;
	virtual float calculateWeeklyVacationDays() = 0;
};

