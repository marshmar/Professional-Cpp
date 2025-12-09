import <iostream>;

using namespace std;

enum class Mode {Default, Custom, Standard};

int main()
{
	int value{ 42 };
	Mode mode{ /*...*/ };
	switch (mode)
	{
	using enum Mode;
	case Custom:
		value = 84;
		[[fallthrough]]; // 의도적으로 폴스루(break문이 없이 다음 case문이 계속 실행되는 것)를 표현
						 // 폴스루에 대한 경고 메시지를 출력하지 않게 함.
	case Standard:
	case Default:
		// 작업을 수행한다.
		break;
	}
}