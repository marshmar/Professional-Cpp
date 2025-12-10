import <iostream>;
import <optional>;

using namespace std;

optional<int> getData(bool giveIt)
{
	if (giveIt)
	{
		return 42;
	}
	return nullopt;
}

int main()
{
	optional<int> data1{ getData(true) };
	optional<int> data2{ getData(false) };

	// optional에 값이 있는지 확인하는 방법
	cout << "data1.has_value = " << data1.has_value() << endl;
	if (data2)
	{
		cout << "data2 has a value." << endl;
	}

	// optional에 값이 있을 때는 value()나 역참조 연산자로 그 값을 가져올 수 있음
	cout << "data1.value = " << data1.value() << endl;
	cout << "data1.value = " << *data1 << endl;

	// value_or() optinal에 값이 있을 때는 그 값을 리턴하고, 값이 없을 때는 다른 값을 리턴
	cout << "data2.value = " << data2.value_or(10) << endl;
	return 0;
}