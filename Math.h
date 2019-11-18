
#ifndef MATH_H
#define MATH_H

#include <string>
using namespace std;

class Math
{
	public:
		static double square(double);
		static int round(double);
		static int ceil(double);
		static int floor(double);
		static double abs(double);
		static int stringToInt(string);
		static double pow(double, int);
};

double Math::square(double dNum)
{
	return dNum * dNum;
}

int Math::round(double dNum)
{
	if (dNum - int(dNum) >= 0.5)
	{
		return int(dNum) + 1;
	}
	else
	{
		return int(dNum);
	}
}

int Math::ceil(double dNum)
{
	if (dNum >= 0)
	{
		return int(dNum) + 1;
	}
	else
	{
		return int(dNum);
	}
}

int Math::floor(double dNum)
{
	if (dNum >= 0)
	{
		return int(dNum);
	}
	else
	{
		return int(dNum) - 1;
	}
}

double Math::abs(double dNum)
{
	if (dNum >= 0)
	{
		return dNum;
	}
	else
	{
		return dNum * -1;
	}
}

int Math::stringToInt(string s)
{
	int iRes = 0;
	for (int i = s.length() - 1; i >= 0; --i)
	{
		iRes += (s[i] - '0') * pow(10.0, (s.length() - i - 1));
	}
	return iRes;
}

double Math::pow(double dBase, int iExp)
{
	double dRes = 1;
	if (iExp > 0)
	{
		for (int i = 0; i < iExp; ++i)
		{
			dRes *= dBase;
		}
	}
	else if (iExp < 0)
	{
		dRes = dBase;
		for (int i = 0; i < iExp; ++i)
		{
			dRes /= dBase;
		}
	}
	return dRes;
}

#endif
