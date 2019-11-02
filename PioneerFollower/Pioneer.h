#pragma once

#include "Invoker.h"
#include "Command.h"
class Pioneer {
public:
	Pioneer(Invoker & invoker) :invoker_(invoker) {};
	void HandleInput(unsigned int number) {
		Command * cmd = nullptr;
		if (number % 3 == 0)
		{
			cmd = new Third();
		}
		else if (number % 2 == 0)
		{
			cmd = new Second();
		}
		else 
		{
			cmd = new First();
		}
		cmd->Execute();
		invoker_.AddCommand(cmd);
	}

private:
	Invoker & invoker_;

};
