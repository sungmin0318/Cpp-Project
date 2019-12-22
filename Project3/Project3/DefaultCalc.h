#pragma once
#include "ICalc.h"
//부모 클래스
class DefaultCalc : ICalc
{
public:
	DefaultCalc();
	virtual ~DefaultCalc();

	virtual bool calcptr(double prefix, double postfix, double *result, char param);
	virtual bool calcref(double prefix, double postfix, double &result, char param);
};

