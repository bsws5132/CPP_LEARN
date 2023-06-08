#include <iostream>
using namespace std;



// Rectangle 클래스를 정의합니다.

class Rectangle
{
private:
	double length;
	double height;
	static int count;

public:
	Rectangle(double length, double height);
	Rectangle();
	~Rectangle();
	Rectangle(const Rectangle& rect);
	static int getCount();
};

// 정적 데이터 멤버를 초기화합니다.
int Rectangle::count = 0;


/* 인스턴스 멤버의 함수를 정의합니다.*/


// 매개변수가 있는 생성자를 정의합니다.
Rectangle::Rectangle(double len, double hgt) : length(len), height(hgt)
{
	count++;
}
//기본 생성자를 정의합니다.
Rectangle::Rectangle() :length(0.0), height(0.0)
{
	count++;
}
// 복사 생성자를 정의합니다.
Rectangle::Rectangle(const Rectangle& rect):length(rect.length),height(rect.height)
{
	count--;
}
// 소멸자를 정의합니다.
Rectangle::~Rectangle()
{
	count++;
}



/*정적 멤버 함수를 정의합니다*/

int Rectangle::getCount()
{
	return count;
}


/*Rectangle 객체를 만들고 수를 세는 애플리케이션(메인 함수)*/

int main()
{
	{
		Rectangle rect1(3.2, 1.2);
		Rectangle rect2(1.5, 2.1);
		Rectangle rect3;
		Rectangle rect4(rect1);
		Rectangle rect5(rect2);
		cout << "객체의 수: " << rect5.getCount() << endl;
	}

	cout << "객체의 수 : " << Rectangle::getCount();
	return 0;
}



