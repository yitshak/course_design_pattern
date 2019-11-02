#pragma once

class CalculationStrategy
{
public:
	virtual float CalculateTax(float annualAmount) = 0;
};

class FirstStage : public CalculationStrategy
{
public:
	virtual float CalculateTax(float annualAmount) {
		return (float)0.25*annualAmount;
	}
};

class SecondStage : public CalculationStrategy
{
public:
	virtual float CalculateTax(float annualAmount) {
		return (float)0.35*annualAmount;
	}
};

class ThirdStage : public CalculationStrategy
{
public:
	virtual float CalculateTax(float annualAmount) {
		return (float)0.55*annualAmount;
	}
};

class CalculationContext {

public:
	CalculationContext(CalculationStrategy & strategy) : strategy_(&strategy) {
	}

	void ChangeStrategy(CalculationStrategy & strategy) {
		strategy_ = &strategy;
	}

	float CalculateMonthlyTax(float paidTax, float totalIncome) {
		float taxDue = strategy_->CalculateTax(totalIncome);
		return taxDue - paidTax;
	}

private:
	CalculationStrategy * strategy_;

};
