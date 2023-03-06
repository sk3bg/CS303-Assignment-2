#include "Professional.h"




float Professional::calculateWeeklySalary() {
	//professional employees have a monthly salary
	return salary / 4;
}
float Professional::calculatWeeklyHealthCareContributions() {
	//professional employees have a monthly healthcare contributions
	return healthCareContributions / 4;
}
float Professional::calculateWeeklyVacationDays() {
	//professional employees have a monthly vacation days
	return vacationDays / 4;
}
