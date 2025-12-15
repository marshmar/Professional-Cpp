import <iostream>;

using namespace std;

int main()
{

	//int x{ 3 }, z{ 5 };
	//int& xRef{ x };
	//int& zRef{ z };

	//zRef = xRef;
	//cout << format("zRef: {}, xRef: {}", zRef, xRef) << endl;

	//zRef = 10;
	//cout << format("zRef: {}, xRef: {}", zRef, xRef) << endl;
	// 
	//int z;
	//const int& zRef{ z };
	//zRef = 4; // compile error, why? const로 선언되어 값을 변경하려고 시도했기 때문에

	int& unnameRef1{ 5 }; // compiel error, why? -> 5라는 상수를 레퍼런스로 수정하겠다는 뜻이기 때문.
	const int& unnameRef2{ 5 }; // 정상 동작 why? -> const로 선언헀기 때문에 애초에 값을 변경할 일이 없기 때문.

	return 0;
}