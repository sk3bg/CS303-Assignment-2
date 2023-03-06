#pragma once
#include "Employee.h"
#include <string>

using namespace std;

class Nonprofessional : public Employee
{
public:

public:
	Nonprofessional();
	Nonprofessional(float salaryX, float healthCareContributionsX, float vacationDaysX) {
		salary = salaryX;
		healthCareContributions = healthCareContributionsX;
		vacationDays = vacationDaysX;
	}
	float calculateWeeklySalary();
	float calculatWeeklyHealthCareContributions();
	float calculateWeeklyVacationDays();

};

