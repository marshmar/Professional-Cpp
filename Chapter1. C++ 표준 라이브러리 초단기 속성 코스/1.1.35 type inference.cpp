import <iostream>;
import <initializer_list>;

using namespace std;

int main()
{
	int i{ 10 };

	auto p{ &i };
	auto* p2{ &i };
	const auto p3{ &i };
	auto const p4{ &i };
	const auto* p5{ &i };
	auto* const p6{ &i };

	*p = 15;
	*p2 = 20;
	*p3 = 25;
	*p4 = 30;
	//*p5 = 35;
	p5 = p;
	*p6 = 40;
	//p6 = p;

	// 복제 리스트 초기화와 직접 리스트 초기화
	// 복제 리스트 초기화
	auto a = { 11 };
	auto b = { 11, 22 };

	// 직접 리스트 초기화
	auto c{ 11 };
	auto d{ 11, 22 };

	// decltype: 인수로 전달한 표현식의 타입을 알아낸다. 레퍼런스나 const 지정자를 삭제하지 않는다는 점에서 auto와 다르다.
	// 템플릿에서 상당히 유용하다.
	int x{ 123 };
	decltype(x) y{ 456 };
	return 0;
}