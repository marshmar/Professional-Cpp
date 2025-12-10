import <iostream>;
import <utility>;

using namespace std;

int main()
{
	pair<double, int> myPair{ 1.23, 5 };
	cout << format("{} {}", myPair.first, myPair.second);

	return 0;
}