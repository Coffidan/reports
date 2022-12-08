#include "MonthlyReport.h"
#include <string>

MonthlyReport::MonthlyReport(std::string str)
{
	std::vector<std::string> ar = split(str, '\n');
	for (int i = 0; i < ar.size(); i++)
	{
		addReport(ar[i]);
	}
}


int MonthlyReport::getIncome()
{
	double sum = 0;
	for (int i = 0; i < income.size(); i++)
	{
		sum += income[i]->sumOfOne* income[i]->quantity;
	}
	return sum;
}


int MonthlyReport::getConsumption()
{
	double sum = 0;
	for (int i = 0; i < consumption.size(); i++)
	{
		sum += consumption[i]->sumOfOne * consumption[i]->quantity;
	}
	return sum;
}

void MonthlyReport::showAll()
{
	std::cout << "CONSUMPTION: " << std::endl;
	for (int i = 0; i < consumption.size(); i++)
	{
		std::cout << "Name: " << consumption[i]->itemname << std::endl;
		std::cout << "Quantity: " << consumption[i]->quantity << std::endl;
		std::cout << "Sum of one item: " << consumption[i]->sumOfOne << std::endl;	
	}

	std::cout << "INCOME: " << std::endl;
	for (int i = 0; i < income.size(); i++)
	{
		std::cout << "Name: " << income[i]->itemname << std::endl;
		std::cout << "Quantity: " << income[i]->quantity << std::endl;
		std::cout << "Sum of one item: " << income[i]->sumOfOne << std::endl;
	}
}

void MonthlyReport::addReport(std::string str)
{
	std::vector<std::string> ar = split(str, ',');
	if (ar[1] == "TRUE")
		income.push_back(new MonthlyRecord(ar[0], ar[2], ar[3]));
	else if (ar[1] == "FALSE")
		consumption.push_back(new MonthlyRecord(ar[0], ar[2], ar[3]));

}

std::vector<std::string> MonthlyReport::split(std::string str, char marker)
{
	std::string buf = "";
	std::vector<std::string> ar;
	for (int i = 0; i <= str.size(); i++)
	{
		if (str[i] == marker || str[i] == '\0')
		{
			ar.push_back(buf);
			buf = "";
		}
		else buf += str[i];
	}

	return ar;
}
