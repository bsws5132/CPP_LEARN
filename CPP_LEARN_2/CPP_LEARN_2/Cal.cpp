#include "Cal.h"

void Calculator::Init()
{
	numOfAdd = 0;
	numOfDiv = 0;
	numOfMin = 0;
	numOfMul = 0;
}
double Calculator::Add(double num1, double num2)
{
	numOfAdd++;
	return num1 + num2;
}
double Calculator::Min(double num1, double num2)
{
	numOfMin++;
	return num1 - num2;
}
double Calculator::Mul(double num1, double num2)
{
	numOfMul++;
	return num1 * num2;
}
double Calculator::Div(double num1, double num2)
{
	numOfDiv++;
	return num1 / num2;
}

void Calculator::ShowOpcount()
{
	cout << "µ¡¼À: " << numOfAdd << ' ';
	cout << "–y¼À: " << numOfMin << ' ';
	cout << "°ö¼À: " << numOfMul << ' ';
	cout << "³ª´°¼À: " << numOfDiv << endl;

}


