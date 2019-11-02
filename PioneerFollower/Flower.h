#pragma once

#pragma once

#include "Invoker.h"
#include "Command.h"
class Follower {
public:
	Follower(Invoker & invoker) :invoker_(invoker) {};
	
	void RunFromInvoker( void ) {

		Command * cmd = invoker_.GetCommand();

		while (cmd != nullptr)
		{
			cmd->Execute();
			delete cmd;
			cmd = invoker_.GetCommand();
		}
	}

private:
	Invoker & invoker_;

};

