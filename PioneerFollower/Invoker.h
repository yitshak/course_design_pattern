#pragma once

#include <queue>
class Command;

class Invoker{

public:

	~Invoker(void)
	{
		while (!commandsQueue.empty()) {
			Command * currCmd = commandsQueue.front();
			commandsQueue.pop();
			delete currCmd;
		}
	}
	void AddCommand(Command * cmd)
	{
		if (cmd != nullptr)
		{
			commandsQueue.push(cmd);
		}
	}
	Command * GetCommand( void )
	{
		Command * retVal = nullptr;
		if (!commandsQueue.empty())
		{
			 retVal = commandsQueue.front();
			 commandsQueue.pop();
		}
		return retVal;
	}



private:
	std::queue<Command*> commandsQueue;;
};
