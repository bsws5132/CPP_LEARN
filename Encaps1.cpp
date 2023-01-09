//책의 저자가 콘택600에 관련된 이야기를 하면서 캡슐화를 설명하기 시작했음.


#include <iostream>
using namespace std;

class SiniveCap
{
public:
	void Take() const
	{
		cout << "콧물 상태이상 완화" << endl;
	}
};

class SneezeCap
{
public:
	void Take() const
	{
		cout << "재채기 상태이상 완화" << endl;
	}
};

class SnuffleCap
{
public:
	void Take() const
	{
		cout << "코막힘 상태이상 완화" << endl;
	}
};

class ColdPatient
{
public:
	void TakeSiniveCap(const SiniveCap &cap) const
	{
		cap.Take();
	}
	void TakeSneezeCap(const SneezeCap &cap) const
	{
		cap.Take();
	}
	void TakeSnuffleCap(const SnuffleCap &cap) const
	{
		cap.Take();
	}
};


int main(void)
{
	SiniveCap scap;
	SneezeCap zcap;
	SnuffleCap ncap;

	ColdPatient sufferer;
	sufferer.TakeSiniveCap(scap);
	sufferer.TakeSneezeCap(zcap);
	sufferer.TakeSnuffleCap(ncap);

	return 0;
}
