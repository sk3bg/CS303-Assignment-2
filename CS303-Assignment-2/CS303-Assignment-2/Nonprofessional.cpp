#include "Nonprofessional.h"


float Nonprofessional::calculateWeeklySalary() {
	//nonprofessional employees are paid an hourly rate
	return salary * 40; //40 hours in a week
}
float Nonprofessional::calculatWeeklyHealthCareContributions() {
	//nonprofessional employees contributes hourly
	return healthCareContributions * 40;
}
float Nonprofessional::calculateWeeklyVacationDays() {
	//nonprofessional employees earn vacation time hourly
	return vacationDays * 40;
}

