import <iostream>;
import <string>;
import <charconv>; // 로우 레벨 숫자 변환
using namespace std;

int main()
{
	long double d{ 3.14L };
	string s{ to_string(d) };

	cout << s << endl;

	const string toParse{ " 123USD" };
	size_t index{ 0 };	// index는 변환되지 않은 부분의 맨 앞에 있는 문자의 인덱스를 저장하는 포인터
	int value{ stoi(toParse, &index) };
	cout << format("Parse value: {}", value) << endl;
	cout << format("First non-parsed character: '{}'", toParse[index]) << endl;

	// 로우 레벨 숫자 변환
	// 퍼펙트 라운드 트리핑: 숫잣값을 스트링 형태로 직렬화한 뒤, 그 결과로 나온 스트링을 다시 숫자값으로 역직렬화하면 원래 값이 나옴
	// 숫자 데이터와 사람이 읽기 좋은 포맷(JSON, XML등) 사이의 변환 작업을 로케일에 독립적이고 퍼펙트 라운드 트리핑을 지원하면서 빠른 속도로 처리하고 싶다면
	// 사용한다
	const size_t BufferSize{ 50 };
	string out(BufferSize, ' ');
	auto result{ to_chars(out.data(), out.data() + out.size(), 12345) };
	if (result.ec == errc{})
	{
		cout << out << endl;	// 제대로 변환된 경우
	}

	string out2(BufferSize, ' ');
	auto [ptr, error] {to_chars(out2.data(), out2.data() + out2.size(), 12345)}; // to_chars 리턴값: to_chars_result 구조체
	if (error == errc{})
	{
		cout << *ptr << endl;
		cout << out2 << endl;
	}

	double value3{ 0.314 };
	string out3(BufferSize, ' ');
	auto [ptr2, error2] {to_chars(out3.data(), out3.data() + out3.size(), value)};
	if (error2 == errc{})
	{
		cout << out3 << endl;
	}

	double value4{ 0.314 };
	string out4(BufferSize, ' ');
	auto [ptr3, error3] {to_chars(out.data(), out.data() + out.size(), value4)};
	if (error3 == errc{})
	{
		cout << out4 << endl;
	}

	double value5;
	auto [ptr4, error4] {from_chars(out.data(), out.data() + out.size(), value5)};
	if (error == errc{})
	{
		if (value4 == value5)
		{
			cout << "Perfect roundtrip" << endl;
		}
		else
		{
			cout << "No perfect roundtrip?!?" << endl;
		}
	}
	return 0;
}