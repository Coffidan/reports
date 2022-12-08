#include "MonthlyRecord.h"
#include <string>

MonthlyRecord::MonthlyRecord(std::string itemName, std::string quantity, std::string sumOfOne)
{
	this->itemname = itemName;
	this->quantity = stoi(quantity);
	this->sumOfOne = stod(sumOfOne);
}
