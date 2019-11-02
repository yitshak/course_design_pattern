#include "OrcFactory.h"

std::vector<int> OrcFactory::ugliness(27);
std::vector<std::string> OrcFactory::status(14);
std::vector<std::string> OrcFactory::weapon(12);

void OrcFactory::setOrcProperties(void)
{
	ugliness[0] = 3;
	ugliness[1] = 2143;
	ugliness[2] = 3213;
	ugliness[3] = 233;
	ugliness[4] = 3324;
	ugliness[5] = 332423;
	ugliness[6] = 334356;
	ugliness[7] = 343;
	ugliness[8] = 4323;
	ugliness[9] = 432423;
	ugliness[10] = 233;
	ugliness[11] = 43;
	ugliness[12] = 34;
	ugliness[13] = 333;
	ugliness[14] = 553;
	ugliness[15] = 653;
	ugliness[16] = 423;
	ugliness[17] = 4323;
	ugliness[18] = 5233;
	ugliness[19] = 5233;
	ugliness[20] = 5323;
	ugliness[21] = 5453;
	ugliness[22] = 533;
	ugliness[23] = 5333;
	ugliness[24] = 532563;
	ugliness[25] = 235323;
	ugliness[26] = 13453;

	status[0] = "DEAD - RIP"; 
	status[1] = "Ingjured1";
	status[2] = "Ingjured2";
	status[3] = "Ingjured3";
	status[4] = "Ingjured4";
	status[5] = "Ingjured5";
	status[6] = "Ingjured6";
	status[7] = "Ingjured7";
	status[8] = "Ingjured8";
	status[9] = "Ingjured9";
	status[10] = "Ingjured10";
	status[11] = "Ingjured11";
	status[12] = "Ingjured12";
	status[13] = "Healthy";

	weapon[0] = "Mace";
	weapon[1] = "Sword-1";
	weapon[2] = "Sword-2";
	weapon[3] = "Sword-3";
	weapon[4] = "Sword-4";
	weapon[5] = "Sword-5";
	weapon[6] = "Sword-6";
	weapon[7] = "Sword-7";
	weapon[8] = "Sword-8";
	weapon[9] = "Sword-9";
	weapon[10] = "Bow";
	weapon[11] = "Ingjured12";
}

Orc  OrcFactory::CreateOrc(unsigned int ugliness, unsigned int status, unsigned int weapon, Location location) {
	Orc theOrc(ugliness, status, weapon, location);
	return theOrc;
}