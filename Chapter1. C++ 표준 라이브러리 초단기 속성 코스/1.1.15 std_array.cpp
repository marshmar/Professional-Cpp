import <iostream>;
import <array>;

using namespace std;

int main()
{
	array<int, 3> arr{ 9, 8, 7 };
	array arr2{ 9, 8, 7 };	// CTAD(클래스 템플릿 인수 추론, class template argument deduction)
	cout << format("Array size = {}", arr.size()) << endl;
	cout << format("2nd element = {}", arr[1]) << endl;

	return 0;
}