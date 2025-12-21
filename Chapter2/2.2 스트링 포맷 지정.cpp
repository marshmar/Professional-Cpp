import <iostream>;
import <format>;
using namespace std;

int main()
{
	int n = 1;
	auto s1{ format("Read {}bytes from {}", n, "file1.txt") };			// 인덱스 생략 가능
	auto s2{ format("Read {0}bytes from {1}", n, "file1.txt") };		// 인덱스 표기 가능
	auto s3{ format("Read {1}bytes from {0}", n, "file1.txt") };		
	//auto s3{ format("Read {1}bytes from {0}", n, "file1.txt") };		// 둘을 혼합하여 사용하는건 안됨

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;

	return 0;
}