import <iostream>;

using namespace std;

void swap(int& first, int& second)
{
	int temp{ first };
	first = second;
	second = temp;
}

int main()
{
	int* intP{ nullptr };
	int*& ptrRef{ intP };
	ptrRef = new int;
	*ptrRef = 5;

	cout << format("ptrRef: {}", *ptrRef) << endl;
	//cout << format("intP: {}", *intp) << endl; // format은 void 포인터 외에 포인터에 대한 지원을 하지 않는다.

	int x{ 3 };
	int& xRef{ x };
	int* xPtr{ &xRef }; // 레퍼런스의 주소는 값에 대한 포인터와 값다.
	*xPtr = 100;

	cout << format("xPtr: {}", *xPtr) << endl;

	int x2{ 5 }, y2{ 6 };
	int* xp{ &x2 }, * yp{ &y2 };
	swap(*xp, *yp);

	cout << format("x2: {}, y2: {}", x2, y2) << endl;
	return 0;
}