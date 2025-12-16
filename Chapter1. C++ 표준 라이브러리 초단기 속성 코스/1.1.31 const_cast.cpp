import <iostream>;
import <utility>;

using namespace std;

// 여기서 값을 수정하지 않는 다는 보장이 되어야 함
void ThirdPartyLibraryMethod(char* str);

void f(const char* str)
{
	// const를 제거 가능 -> 단 const 설계 원칙에 위배될 수 있기에 서드파티 라이브러리 같은 걸 사용할 때 정도로 제한적인 경우에만 사용
	ThirdPartyLibraryMethod(const_cast<char*>(str));
}

int main()
{
	string str{ "C++" };
	const std::string& constStr{ as_const(str) };

	return 0;
}