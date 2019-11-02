// DesignPatternFactory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TranslatorIfs.hpp"
#include "theTranslators.hpp"
#include "theInterpreters.hpp"

int main()
{
	/*
	TranslatorFactoryIfs * translatorFactory = new TranslatorFactory();
	
	// French Transaltor
	TranslatorIfs * translator = translatorFactory->createTranslator(true);
	translator->translateText();
	delete translator;


	// Spanish Transaltor
	translator = translatorFactory->createTranslator(false);
	translator->translateText();
	delete translator;
	delete translatorFactory;

	translatorFactory = new InterpeterFactory();

	// French Interpeter
	translator = translatorFactory->createTranslator(true);
	translator->translateText();
	delete translator;


	// Spanish Interpeter
	translator = translatorFactory->createTranslator(false);
	translator->translateText();
	delete translator;
	*/
	TranslatorFactoryIfs * factories[2];
	factories[0] = new TranslatorFactory();
	factories[1] = new InterpeterFactory();

	while (1)
	{
		char tInput, lInput;
		int tSelect = 1;
		bool isFrench = false;

		std::cout << "1- translators 2- interpreters" << std::endl;
		tInput = getchar();
		getchar();
		if (tInput == '1')
		{
			tSelect = 0;
		}
		else if (tInput != '2')
		{
			std::cout << "unknown type" << std::endl;
			break;
		}

		std::cout << "1- french 2- spanish" << std::endl;
		lInput = getchar();
		getchar();
		if (lInput == '1')
		{
			isFrench = true;
		}
		else if (lInput != '2')
		{
			std::cout << "unknown type" << std::endl;
			break;
		}

		TranslatorIfs * translator = factories[tSelect]->createTranslator(isFrench);
		translator->translateText();
		delete translator;
	};

	delete factories[0];
	delete factories[1];
	return 0;
}

