#pragma once
#include "Employee.h"

// 
class Professional : public Employee
{	
public:

public:
	Professional();
	Professional(float salaryX, float healthCareContributionsX, float vacationDaysX) {
		salary = salaryX;
		healthCareContributions = healthCareContributionsX;
		vacationDays = vacationDaysX;
	}

	float calculateWeeklySalary();
	float calculatWeeklyHealthCareContributions();
	float calculateWeeklyVacationDays();

};

