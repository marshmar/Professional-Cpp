import <iostream>;
import <array>;

using namespace std;



int main()
{
	// 구조적 바인딩(structuredd binding): 여러 변수를 선언할 때, array, struct, pair등에 담긴 원소들을 이용하여 변수값을 한꺼번에 초기화
	// 가능, C++ 17부터 사용 가능
	array values{ 11, 22, 33 };
	auto [x, y, z] {values };

	cout << format("x = {}, y = {}, z = {}", x, y, z) << endl;

	// 비 static 멤버가 모두 public으로 선언된 구조체에도 적용 가능
	struct Point { double m_x, m_y, m_z; };
	Point point;
	point.m_x = 1.0; point.m_y = 2.0; point.m_z = 3.0;
	auto [x2, y2, z2]{ point };

	// pair에도 적용 가능
	pair myPair{ "hello", 5 };
	auto [theString, theInt] {myPair};
	cout << format("theString: {}", theString) << endl;
	cout << format("theInt: {}", theInt) << endl;

	return 0;
}