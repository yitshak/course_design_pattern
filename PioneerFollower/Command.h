#pragma once

#include <iostream>

class Command {
public:
	virtual void Execute(void) = 0;
};


class First : public Command{
public:
	void Execute(void)
	{
		std::cout << "First command" << std::endl;
	}
};

class Second: public Command {
public:
	void Execute(void)
	{
		std::cout << "Second command" << std::endl;
	}
};

class Third : public Command {
public:
	void Execute(void)
	{
		std::cout << "Third command" << std::endl;
	}
};