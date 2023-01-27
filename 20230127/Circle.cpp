#include<iostream>
using namespace std;


class point
{
private:
	int xpos, ypos;
public:
	point(int x, int y) : xpos(x), ypos(y)
	{ }
	void showpointinfo() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

class circle
{
private:
	int rad;
	point center;
public:
	circle(int x, int y, int r) : center(x, y)
	{
		rad = r;
	}
	void showcircleinfo() const
	{
		cout << "radius : " << rad << endl;
		center.showpointinfo();
	}
};

class ring
{
private:
	circle incircle;
	circle outcircle;
public:
	ring(int inx, int iny, int inr, int outx, int outy, int outr)
		:incircle(inx, iny, inr), outcircle(outx, outy, outr)
	{ }

	void showringinfo() const
	{
		cout << "inner circle info" << endl;
		incircle.showcircleinfo();
		cout << "outter circle info" << endl;
		outcircle.showcircleinfo();
	}
};


int main(void)
{
	ring ring(1, 1, 4, 2, 2, 9);
	ring.showringinfo();
	return 0;
}
