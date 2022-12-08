#pragma once
#include <iostream>

class MonthlyRecord
{
	friend class MonthlyReport;
private:
	std::string itemname;
	int quantity;
	double sumOfOne;
public:
	MonthlyRecord(std::string itemName, std::string quantity, std::string sumOfOne);
};

