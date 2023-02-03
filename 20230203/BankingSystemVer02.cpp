/*
	Account 클래스 정의, 객체 포인터 배열 적용 연습

	2023-02-03 작성
*/

#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN = 20;

void ShowMenu(void); // 메뉴
void MakeAccount(void); // 계좌 개설 함수
void DepositMoney(void); // 입금
void WithdrawMoney(void);// 출금
void ShowAllAccInfo(void); // 잔액조회


enum {MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

class Account
{
private:
	int accID;
	int balance;
	char* cusName; 

public:
	Account(int ID, int money, const char* name) : accID(ID), balance(money) // 입력을 char * 에서 const char*로 변경.
	{
		cusName = new char[strlen(name) + 1];
		strcpy(cusName, name);
	}

	int GetAccID()
	{
		return accID;
	}

	void Deposit(int money)
	{
		balance += money;
	}

	int WithDraw(int money)
	{
		if (balance < money)
			return 0;
		balance -= money;
		return money;
	}


	void ShowAccInfo()
	{
		cout << "계좌ID: " << accID << endl;
		cout << "이름: " << cusName << endl;
		cout << "잔액: " << balance << endl;
	}

	~Account()
	{
		delete[]cusName;
	}
};


Account* accArr[100];


int accNum = 0;

int main(void)
{
	int choice;

	while (1)
	{
		ShowMenu();
		cout << "선택 : ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case MAKE:
			MakeAccount();
			break;

		case DEPOSIT:
			DepositMoney();
			break;

		case WITHDRAW:
			WithdrawMoney();
			break;

		case INQUIRE:
			ShowAllAccInfo();
			break;

		case EXIT:
			for (int i = 0; i < accNum; i++)
				delete accArr[i];
			return 0;


		default:
			cout << "잘못된 선택입니다...." << endl;
		}
	}

	return 0;
}


void ShowMenu(void)
{
	cout << "-------------메뉴-------------" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입금" << endl;
	cout << "3. 출금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 종료" << endl;
}


void MakeAccount(void)
{
	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[계좌개설]" << endl;
	cout << "계좌ID: "; cin >> id;
	cout << "이름 : "; cin >> name;
	cout << "입금액: "; cin >> balance;
	cout << endl;

	accArr[accNum++] = new Account(id, balance, name);
}
