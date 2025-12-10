import <iostream>;
import <vector>;

int main()
{
	vector<int> myVector{ 11, 22 };

	myVector.push_back(33);
	myVector.push_back(44);

	cout << format("1st element: {}", myVector[0]) << endl;

	return 0;
}