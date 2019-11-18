#include "Math.h"

#include <iostream>
using namespace std;

int main()
{
	double dNum, dResultado;
	cin >> dNum;
	cout << "square = " << Math::square(dNum) << endl;
	cout << "round = " << Math::round(dNum) << endl;
	cout << "ceil = " << Math::ceil(dNum) << endl;
	cout << "floor = " << Math::floor(dNum) << endl;
	cout << "abs = " << Math::abs(dNum) << endl;
	cout << "pow = " << Math::pow(dNum, 2) << endl;
	cout << "Enter a number: ";
	string s;
	cin >> s;
	cout << "stringToInt = " << Math::stringToInt(s) << endl;
	return 0;
}