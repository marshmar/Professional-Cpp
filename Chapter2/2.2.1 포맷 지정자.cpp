import <iostream>;
using namespace std;

int main()
{
	// width: 폭을 결정
	int i{ 42 };
	cout << format("|{:5}|", i) << endl;
	cout << format("|{:{}}|", i, 7) << endl;
	cout << endl;

	// [fill]align: 채울 문자와 해당 필드에 값이 정렬되는 방식을 지정
	// <: 왼쪽 정렬(정수나 부동소수점수가 아닌 값이 기본 적용)
	// >: 오른쪽 정렬(정수나 부동소수점수에 기본 적용)
	// ^: 가운제 정렬
	cout << format("|{:7}|", i) << endl;
	cout << format("|{:<7}|", i) << endl;
	cout << format("|{:_>7}|", i) << endl;
	cout << format("|{:_^7}|", i) << endl;
	cout << endl;

	// sign: 부호 지정
	// -: 음수에만 부호를 붙인다(디폴트)
	// +: 음수와 양수 모두에 부호를 붙인다.
	// space: 음수에는 마이너스 기호를 붙이고, 양수에는 빈 칸을 적용한다.
	cout << format("|{:<5}|", i) << endl;
	cout << format("|{:<+5}|", i) << endl;
	cout << format("|{:< 5}|", i) << endl;
	cout << format("|{:< 5}|", -i) << endl;
	cout << endl;

	// #: 얼티네이트 포매팅, 정수타입과 16진수, 2진수, 8진수 숫자 포맷 지정에 대해 적용할 경우 0x,0X, 0b, 0B, 0등을 숫자 앞에 붙인다.

	// type: 주어진 값을 반드시 따라야 할 타입을 지정한다.
	cout << format("|{:10d}|", i) << endl;
	cout << format("|{:10b}|", i) << endl;
	cout << format("|{:#10b}|", i) << endl;
	cout << format("|{:10X}|", i) << endl;
	cout << format("|{:#10X}|", i) << endl;
	cout << endl;

	string s{ "ProCpp" };
	cout << format("|{:_^10}|", s) << endl;

	// precision: 부동소수점과 스트링 타입에만 적용. 부동소수점 타입을 표기할 때는 점을 먼저 붙이고, 그 뒤에 10진수 숫자를 적고, 스트링을 표기할 때는
	//			  점 뒤에 문자 개수를 적는다.
	double d{ 3.1415 / 2.3 };
	cout << format("|{:12g}|", d) << endl;
	cout << format("|{:12.2}|", d) << endl;
	cout << format("|{:12e}|", d) << endl;
	cout << endl;

	int width{ 12 };
	int precision{ 3 };
	cout << format("|{2:{0}.{1}f}|", width, precision, d) << endl;
	cout << endl;

	// 0: 숫잣값에 대해 적용할 때 width로 지정한 최소 폭에 맞게 0을 집어넣는다.
	cout << format("|{:06d}|", i) << endl;
	cout << format("|{:+06d}|", i) << endl;
	cout << format("|{:06X}|", i) << endl;
	cout << format("|{:#06X}|", i) << endl;

	return 0;
}