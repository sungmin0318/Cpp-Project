#pragma once
#include "DefaultCalc.h"
#include <math.h>
//하위클래스
class MechanicalCalc : DefaultCalc
{
public:
	MechanicalCalc();
	virtual ~MechanicalCalc();

	virtual bool calcptr(double prefix, double postfix, double * result, char param);
	virtual bool calcref(double prefix, double postfix, double & result, char param);
};

