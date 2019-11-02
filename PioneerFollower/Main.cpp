#include "Command.h"
#include "Pioneer.h"
#include "Invoker.h"
#include "Flower.h"

#include <iostream>
#include <string>
#include <sstream>

using namespace std;



int main(void)
{
	Invoker  theInvoker;
	Pioneer *  thePioneer = new Pioneer(theInvoker);
	
	string s;
	unsigned int inputNumber;

	
	while (true) {
		std::cout << "Please enter a valid number(0-9): ";

		std::cin >> s;
		std::istringstream isst(s);
		isst >> inputNumber;

		if (inputNumber > 0 && inputNumber <= 9)
		{
			thePioneer->HandleInput(inputNumber);
		}
		else if (inputNumber == 0)
		{
			break;
		}
	}

	delete thePioneer;
	
	Follower * theFollower = new Follower(theInvoker);

	theFollower->RunFromInvoker();

	delete theFollower;
}