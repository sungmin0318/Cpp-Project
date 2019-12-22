#include "MechanicalCalc.h"


const double PI = 3.141592;

MechanicalCalc::MechanicalCalc()
{
}


MechanicalCalc::~MechanicalCalc()
{
}


bool MechanicalCalc::calcptr(double prefix, double postfix, double * result, char param)
{
	if (DefaultCalc::calcptr(prefix, postfix, &(*result), param))
	{
		return true;
	}
	else
	{
		switch (param)
		{
		case('^'):
			*result = pow(prefix, postfix);
			return true;
			break;
		case('r'):
			*result = sqrt(prefix);
			return true;
			break;
		case('s'):
			if (prefix < 0 || prefix>360)
			{
				return false;
				break;
			}
			*result = sin(prefix *(PI / 180));
			return true;
			break;
		case('c'):
			if (prefix < 0 || prefix > 360)
			{
				return false;
				break;
			}
			*result = cos(prefix *(PI / 180));
			return true;
			break;
		case('t'):
			if (prefix < 0 || prefix > 360)
			{
				return false;
				break;
			}
			*result = tan(prefix *(PI / 180));
			return true;
			break;
		default:
			return false;
			break;
		}
	}
}
	
bool MechanicalCalc::calcref(double prefix, double postfix, double &result, char param)
{
	if (DefaultCalc::calcref(prefix, postfix, result, param))
	{
		return true;
	}
	else
	{
		switch (param)
		{
		case('^'):
			result = pow(prefix, postfix);
			return true;
			break;
		case('r'):
			result = sqrt(prefix);
			return true;
			break;
		case('s'):
			if (prefix < 0 || prefix>360)
			{
				return false;
				break;
			}
			result = sin(prefix *(PI / 180));
			return true;
			break;
		case('c'):
			if (prefix < 0 || prefix > 360)
			{
				return false;
				break;
			}
			result = cos(prefix *(PI / 180));
			return true;
			break;
		case('t'):
			if (prefix < 0 || prefix > 360)
			{
				return false;
				break;
			}
			result = tan(prefix *(PI / 180));
			return true;
			break;
		default:
			return false;
			break;
		}
	}
}
