//#include <iostream>
//
//using namespace std;
//
//int main(void)
//{
//	cout << "이 프로그램은 프로그램의 구조를 알아보기 위한 " << endl;
//	cout << "간단한 c++ 프로그램 입니다. " << endl;
//	cout << "이번 장과 이후의 내용을 통해 ";
//	cout << "C++ 프로그래밍 언어와 관련된 다양한 것을 살펴보겠습니다!";
//
//	return 0;
//}
//
//#include <iostream>
//using namespace std;
//
//
//int main(void)
//{
//	// 상수 정의
//	const unsigned int pennyValue = 1;
//	const unsigned int nickeValue = 5;
//	const unsigned int dimeValue = 10;
//	const unsigned int quarterValue = 25;
//	const unsigned int dollerValue = 100;
//
//
//	// 변수 정의
//	unsigned int pennies;
//	unsigned int nickels;
//	unsigned int dimes;
//	unsigned int quarters;
//	unsigned int dollers;
//
//	//전체 값을 나타내는 변수 선언
//	unsigned long totalValue;
//
//	//입력 받기
//	cout << "페니 : ";
//	cin >> pennies;
//
//	cout << "니켈 : ";
//	cin >> nickels;
//
//	cout << "다임 : ";
//	cin >> dimes;
//
//	cout << "쿼터 : ";
//	cin >> quarters;
//
//	cout << "달러 : ";
//	cin >> dollers;
//
//	// 전체 금액 계산
//	totalValue = pennies * pennyValue
//		+ nickels * nickeValue
//		+ dimes * dimeValue
//		+ quarters * quarterValue
//		+ dollers * dollerValue;
//
//	//결과 출력
//
//	cout << "전체 값은 " << totalValue << "페니입니다. ";
//
//	return 0;
//
//
//}

//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	//변수
//
//	int balance = 0;
//	int transaction;
//
//	//1번째 거래 후 잔액 조정!
//
//	cout << "첫 번째 거래 금액 입력 : ";
//	cin >> transaction;
//	balance = balance + transaction;
//
//	//2번째
//
//	cout << "두 번째 거래 금액 입력 : ";
//	cin >> transaction;
//	balance = balance + transaction;
//
//	//3번째
//
//	cout << "세 번째 거래 금액 입력 : ";
//	cin >> transaction;
//	balance = balance + transaction;
//
//	//최종
//
//	cout << "Total Count : " << balance << "Doller !";
//
//	return 0; 
//}

//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	cout << "short int : " << sizeof(short int) << " bytes " << endl;
//	cout << "int : " << sizeof(int) << " bytes " << endl;
//	cout << "long int : " << sizeof(long int) << " bytes " << endl;
//
//	return 0;
//}



//#include <iostream>
//
//using namespace std;
//
//
//int main(void)
//{
//	int x = -1245;
//	unsigned int y = 1245;
//	unsigned int z = -2367;
//	unsigned int t = 14.56;
//
//
//	cout << x << endl;
//	cout << y << endl;
//	cout << z << endl;
//	cout << t << endl;
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//
//int main(void)
//{
//	int x; 
//	unsigned long int y;
//
//	x = 1456;
//	y = -14567;
//
//	cout << x << endl;
//	cout << y << endl;
//	cout << 1234 << endl;
//	cout << 143267L << endl;
//
//	return 0;
//}

#include <iostream>
using namespace std;

int main()
{
	cout << "*" << endl;
	cout << "**" << endl;
	cout << "***" << endl;

	cout << endl;

	cout << "*" << endl;
	cout << "**" << endl;
	cout << "***" << endl;
	cout << "**" << endl;
	cout << "*" << endl;

	cout << "H	H" << endl;
	cout << "H	H" << endl;
	cout << "H	H" << endl;
	cout << "H	H" << endl;
	cout << "HHHHHHHHH" << endl;
	cout << "H	H" << endl;
	cout << "H	H" << endl;
	cout << "H	H" << endl;
	cout << "H	H" << endl;

	cout << false << " " << 'A' << " " << "hello" << endl;
	cout << 23142 << " " << 12897234L << endl;
	cout << 245.78F << 114.782 << " " << 2.051L;

	cout << endl;
	cout << endl;
	cout << endl;
	int x = 4;
	cout << (x * 3) * 5 << endl;
	cout << x * 3 * 5 << endl << endl;
	cout << 12 / (x + 2) << endl;
	cout << 12 / x + 2;


	return 0;
}
