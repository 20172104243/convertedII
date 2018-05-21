// convertedII.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class CUnit
{
private:
	int feet;
	double inches;
public:
	CUnit()
	{
		feet = 0;
		inches = 0;
	}
	void setmeters(double m)
	{
		inches = m*39.370;
		feet = feet + (inches / 12);
		inches = inches - 12.0*(int)(inches / 12);
	}
	void display()
	{
		cout << "feet=" << feet << "inches=" << inches << endl;
	}
};
int main()
{
	CUnit ot;
	ot.setmeters(10);
	ot.display();
	return 0;
}

