/*
* 학습한 개념: 포인터, const, constexpr
*/
import <iostream>;
import <array>;

using namespace std;

constexpr int getArraySize() { return 32; }
const int getArraySize2() { return 32; }

int main()
{
	const int c1 = 100;
	constexpr int c2 = 200;

	int myArray1[c1];
	int myArray2[c2];
	int myArray3[getArraySize()];
	//int myArray3[getArraySize2()];
	
	array<int, getArraySize()> a1;
	//array<int, getArraySize2()> a2;
	return 0;
}