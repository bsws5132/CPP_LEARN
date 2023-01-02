#include "Cal.h"

int main(void)
{
	Calculator cal;
	cal.Init();
	cout << cal.Add(3.2, 2.4) << endl;
	cout << cal.Div(3.2, 2.4) << endl;
	cout << cal.Mul(3.2, 2.4) << endl;
	cout << cal.Min(3.2, 2.4) << endl;

	cal.ShowOpcount();

	return 0;

}