#pragma once

#include <string>
#include <iostream>

#include "TranslatorIfs.hpp"

class Translator : public TranslatorIfs
{

public:
	Translator(bool isFrench)
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
		std::cout << "Transltor" << language_ << std::endl;
	};

	std::string language_;
};


class TranslatorFactory : public TranslatorFactoryIfs
{
public:
	virtual TranslatorIfs * createTranslator(bool isFrench) {
		return new Translator(isFrench);
	}
};