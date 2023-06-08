// 현재 미완성입니다!!!!

// account(은행 계좌) 클래스를 선언, 정의 , 사용하는 프로그램입니다.

#include <iostream>
#include <cassert>
using namespace std;


// 클래스 정의

class Account
{
private:
	long accNumber;
	double balance;
	static int base; //정적 데이터 멤버
public:
	Account(double bal); // 생성자
	~Account(); // 소멸자
	void checkBalance() const; // 접근자
	void deposit(double amount); // 설정자
	void withdraw(double amount);// 설정자
};

int Account::base = 0;

// 모든 멤버 함수를 정의합니다.

// 매개변수가 있는 생성자

Account::Account(double bal):balance(bal)
{
	if (bal < 0.0)
	{
		cout << "잔액은 음수가 될 수 없습니다, 프로그램을 종료합니다.";
		assert(false);
	}
	base++;
	accNumber = 100000 + base;

	cout << "계좌_#" << accNumber << " 이 만들어졌습니다." << endl;
	cout << "$" << balance << "를 고객에게 보냈습니다. " << endl << endl;
}


//소멸자
Account::~Account()
{
	cout << "계좌_#" << accNumber << " 가 닫혔습니다." << endl;
	cout << "$" << balance << "를 고객에게 보냈습니다." << endl << endl;
}

//접근자 멤버 함수
void Account::checkBalance() const
{
	cout << "계좌_#" << accNumber << endl;
	cout << "트랜잭션 - 잔액확인" << endl;
	cout << "잔액 : $" << balance << endl << endl;
}

//설정자 멤버 함수
void Account::deposit(double amount)
{

}
