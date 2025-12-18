import <iostream>;
using namespace std;

int main()
{
	const char* str1{ "Hello \"World\"! " };
	const char* str2{ R"(Hello "World"!)" };	// Raw String Literal: Escape 시퀀스를 무시함
	const char* str3{ "Line 1\nLine 2" };		// 단점: 스트링 중간에 )가 들어갈 수 없음 -> extended raw string literal로 단점 극복 가능
	const char* str4{ R"(Line 1					
Line 2)" };

	const char* str5{ R"(Is the following a tab character? \t)" };
	// R"d-char-sequence(r-char-sequence)d-char-sequence" d-char-sequence: 내가 지정한 문자, 로 스트링에 나오면 안됨
	// ex) R"?(Hello World!))?
	const char* str6{ R"-(Embedded )" characters)-" };	// extended raw string literal(확장 로 스트링 리터럴)
	
	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str4 << endl;
	cout << str5 << endl;
	cout << str6 << endl;

	cout << R"?(Hello World!) (I'm fine Thank you))?" << endl;
	return 0;
}