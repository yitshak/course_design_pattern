#include "CalculationStartegy.hpp"

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(void)
{

	FirstStage firstStage; 
	SecondStage secondStage;
	ThirdStage thirdStage;

	CalculationContext calculator(firstStage);

	string s;
	float totalIncome = 0;
	float totalTax = 0;


	for( int counter = 0; counter < 12; counter++) {
		float monthlyIncome = 0;
		float monthlyTax = 0;

		std::cout << "Please enter monthly income: ";

		std::cin >> s;
		std::istringstream isst(s);
		isst >> monthlyIncome;

		totalIncome += monthlyIncome;

		if (totalIncome > 50000)
		{
			calculator.ChangeStrategy(secondStage);
		}
		if (totalIncome > 150000)
		{
			calculator.ChangeStrategy(thirdStage);
		}

		monthlyTax = calculator.CalculateMonthlyTax(totalTax, totalIncome);

		std::cout << "Monthly tax due: " << monthlyTax << std::endl;

		totalTax += monthlyTax;
		
	}

	cout << " Total income:" << totalIncome << std::endl;
	cout << " Total tax:" << totalTax << std::endl;

	int stam;
	std::cin >> s;
	std::istringstream isst(s);
	isst >> stam;

}