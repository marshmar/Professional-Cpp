import <iostream>;

using namespace std;

void printString(const string& myString)
{
	cout << myString << endl;
}

int main()
{
	string someString{ "Hello World" };
	printString(someString);
	printString("Hello Wolrd");

	return 0;
}