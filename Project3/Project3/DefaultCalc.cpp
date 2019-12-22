#include "DefaultCalc.h"



DefaultCalc::DefaultCalc()
{
}


DefaultCalc::~DefaultCalc()
{
}



bool  DefaultCalc::calcptr (double prefix, double postfix, double *result, char param)
{
	switch (param)
	{
	case('+'):
		*result = prefix + postfix;
		return true;
		break;
	case('-'):
		*result = prefix - postfix;
		return true;
		break;
	case('*'):
		*result = prefix * postfix;
		return true;
		break;
	case('/'):
		*result = prefix / postfix;
		return true;
		break;
	default:
		return false;
		throw 0;
		break;
	}
}
bool DefaultCalc::calcref(double prefix, double postfix, double &result, char param)
{
	switch (param)
	{
	case('+'):
		result = prefix + postfix;
		return true;
		break;
	case('-'):
		result = prefix - postfix;
		return true;
		break;
	case('*'):
		result = prefix * postfix;
		return true;
		break;
	case('/'):
		result = prefix / postfix;
		return true;
		break;
	default:
		return false;
		throw 0;
		break;
	}
}
