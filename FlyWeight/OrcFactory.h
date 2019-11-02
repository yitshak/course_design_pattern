#pragma once

#include <vector>
#include <string>

struct Location {
	unsigned char x;
	unsigned char y;
};

class Orc
{
public:
	~Orc(){};

	Orc(unsigned int ugliness, unsigned int status, unsigned int weapon, Location location)
		: ugliness_(ugliness)
		, status_(status)
		, weapon_(weapon)
	{
		location_.x = location.x;
		location_.y = location.y;
	}
		
	Location NextLocation(void)
	{
		Location newLocation;

		newLocation.x = location_.y + ugliness_*status_;
		newLocation.y = location_.x + ugliness_*status_;

		return newLocation;

	};

	Location Draw(void);

private:
	unsigned int ugliness_ : 5;
	unsigned int status_ : 4;
	unsigned int weapon_ : 4;
	Location location_;
};

class OrcFactory {

public:
	
	static void setOrcProperties(void);
	static Orc  CreateOrc(unsigned int ugliness, unsigned int status, unsigned int weapon, Location location);

private:

	static std::vector<int> ugliness;
	static std::vector<std::string> status;
	static std::vector<std::string> weapon;

	OrcFactory();
	~OrcFactory();
};
