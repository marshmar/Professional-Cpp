import <iostream>;

using namespace std;

int addNumbers(int number1, int number2)
{
	cout << "Entering function " << __func__ << std::endl;
	// __func__: 모든 함수에 저장되어 있는 함수의 이름을 저장하는 로컬 변수
	return number1 + number2;
}

int main()
{
	addNumbers(1, 2);

	return 0;
}