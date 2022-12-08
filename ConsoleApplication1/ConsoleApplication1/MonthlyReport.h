#pragma once
#include "MonthlyRecord.h"
#include <vector>
class MonthlyReport
{
private:
	std::vector<MonthlyRecord*> income;
	std::vector<MonthlyRecord*> consumption;

public:
	MonthlyReport(std::string str);
	void addReport(std::string str);
	std::vector<std::string> split(std::string str, char marker);
	int getIncome();
	int getConsumption();
	void showAll();
};

