#include <iostream>
#include "MonthlyReport.h"
#include "MonthlyRecord.h"
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	MonthlyReport rep1("item_name,is_expense,quantity,sum_of_one\nКоньки,TRUE,50,2000\nНовогодняя ёлка,TRUE,1,100000\nЛарёк с кофе,TRUE,3,50000\nАренда коньков,FALSE,1000,180\nПродажа билетов,FALSE,3500,300\nПродажа кофе,FALSE,2421,150");
	rep1.showAll();
	std::cout << rep1.getConsumption() << std::endl;
	std::cout << rep1.getIncome() << std::endl;

}
