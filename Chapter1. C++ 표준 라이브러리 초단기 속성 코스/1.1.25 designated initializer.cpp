import <iostream>;

using namespace std;

struct Employee
{
	char firstInitial;
	char lastInitial;
	int employeeNumber;
	int salary{ 75'000 };
};

int main()
{

	// 지정초기자(C++ 20 이상부터 사용가능)
	// 지정초기자의 장점은 구조체에 멤버를 추가하더라도 기존 코드는 그대로 작동하고, 새로 추가된 데이터 멤버는 디폴트값으로 초기화 된다는 점
	Employee anEmployee
	{
		.firstInitial = 'J',
		.lastInitial = 'D',
		.employeeNumber = 42,
		.salary = 80'000
	};


	return 0;
}