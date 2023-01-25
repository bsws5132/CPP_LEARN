#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char * myname, int myage) //Person(char * myname, int myage) c++11 버전은 해당 문법을 거부하는듯 함.
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~Person()
	{
		delete[]name;
		cout << "called Destructor!" << endl;
	}

};

int main(void)
{   
	Person man1("Lee Dong Woo", 29);
	Person man2("Jang Dong Gun", 49);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;
}
