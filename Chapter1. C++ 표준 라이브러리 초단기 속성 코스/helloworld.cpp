import <iostream>; // Module: C++ 20부터 새롭게 추가된 기능(헤더파일 메커니즘을 완벽하게 대체)

//using namespace std;

int main()
{
	using std::cout;
	cout << "Hello, World!" << std::endl;
	return 0;
}