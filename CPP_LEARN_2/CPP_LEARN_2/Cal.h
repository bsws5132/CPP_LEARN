#pragma once
#include <iostream>
using namespace std;


class Calculator
{
private:
	int numOfAdd;
	int numOfMin;
	int numOfMul;
	int numOfDiv;
public:
	void Init();
	double Add(double num1, double num2);
	double Min(double num1, double num2);
	double Mul(double num1, double num2);
	double Div(double num1, double num2);
	void ShowOpcount();
};