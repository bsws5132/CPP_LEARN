#include <iostream>
#include <cstring>
using namespace std;

namespace COMP_POS
{
	enum {CLERK, SENIOR, ASSIST, MANAGER};

	void ShowPositionInfo(int pos)
	{
		switch (pos)
		{
		case CLERK:
			cout << "사원" << endl;
			break;
		case SENIOR:
			cout << "주임" << endl;
			break;
		case ASSIST:
			cout << "대리" << endl;
			break;
		case MANAGER:
			cout << "과장" << endl;
			break;
		}
	}
}


class NameCard
{
private:
	char* name;
	char* company;
	char* phone;
	int position;

public:
	NameCard(char* _name, char* _company, char* _phone, int pos) // ISO C++는 문자열 상수를 'char*'로 변환하는 것을 금지합니다. 최신 버전 C++는 Const Char로 입력받으세요!
		: position(pos)
	{
		name = new char[strlen(_name) + 1];
		company = new char[strlen(_company) + 1];
		phone = new char[strlen(_phone) + 1];
		strcpy(name, _name);
		strcpy(company, _company);
		strcpy(phone, _phone);
	}
	void ShowNameCardInfd()
	{
		cout << "이름 : " << name << endl;
		cout << "회사 : " <<  company << endl;
		cout << "전화번호 : " << phone << endl;
		cout << "직급 : "; COMP_POS::ShowPositionInfo(position);
		cout << endl;
	}

	~NameCard()
	{
		delete[]name;
		delete[]company;
		delete[]phone;
	}
};

int main(void)
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSENIOR("hong", "OrangeEng", "010-3333-2222", COMP_POS::CLERK);
	NameCard manAssist("Kim", "SoGoodComp", "010-4444-5555", COMP_POS::CLERK);

	manClerk.ShowNameCardInfd();
	manSENIOR.ShowNameCardInfd();
	manAssist.ShowNameCardInfd();

	return 0; 
}
