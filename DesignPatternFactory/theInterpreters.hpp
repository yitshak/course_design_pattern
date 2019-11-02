#pragma once

#pragma once

#include <string>
#include <iostream>

#include "TranslatorIfs.hpp"


class Interpeter : public TranslatorIfs
{
public:
	Interpeter(bool isFrench)
	{
		if (isFrench)
		{
			language_ = "french";
		}
		else
		{
			language_ = "spanish";
		}
	};

	virtual void translateText(void) {
		std::cout << "Interpeter" << language_ << std::endl;
	};

	std::string language_;
};

class InterpeterFactory: public TranslatorFactoryIfs
{
public:
	virtual TranslatorIfs * createTranslator(bool isFrench) {
		return new Interpeter(isFrench);
	}
};

