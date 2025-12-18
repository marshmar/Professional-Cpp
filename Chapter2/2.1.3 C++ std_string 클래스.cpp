import <iostream>;
import <string>;
using namespace std;

int main()
{
	string a{ "12" };
	string b{ "34" };
	string c;

	c = a + b;	// 스트링 결합
	cout << c << endl;

	auto result { a.compare(b) };	// compare의 결과는 bool타입이 아닌 int형임
	if (result < 0) { cout << "less" << endl; }
	if (result > 0) { cout << "greater" << endl; }
	if (result == 0) { cout << "euqal" << endl; }
		
	auto result2{ a <=> b };		// 3방향 연산자 사용 가능
	if (is_lt(result2)) { cout << "less" << endl; }
	if (is_gt(result2)) { cout << "greater" << endl; }
	if (is_eq(result2)) { cout << "equal" << endl; }

	string myString{ "hello" };	
	myString += ", there";
	string myOtherString{ myString };
	if (myString == myOtherString)
	{
		myOtherString[0] = 'H';
	}
	cout << myString << endl;
	cout << myOtherString << endl;

	// 스트링 연산
	string strHello{ "Hello!!" };
	string strWorld{ "The World..." };
	auto position{ strHello.find("!!") };
	if (position != string::npos)
	{
		// "!!"서브스트링 발견. 이 값을 교체한다.
		strHello.replace(position, 2, strWorld.substr(3, 6));
	}

	cout << strHello << endl;

	// std::string literal
	auto string1{ "Hello World" };
	auto string2{ "Hello World"s };

	cout << typeid(string1).name() << endl;
	cout << typeid(string2).name() << endl;
	return 0;
}