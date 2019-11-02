#pragma once



class TranslatorIfs
{
public:
	virtual ~TranslatorIfs(void) {};
	virtual void translateText(void) = 0;
};

class TranslatorFactoryIfs
{
public:
	virtual ~TranslatorFactoryIfs(void) {};
	virtual TranslatorIfs * createTranslator(bool isFrench) = 0;
};


