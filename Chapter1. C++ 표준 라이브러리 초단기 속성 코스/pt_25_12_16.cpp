import <iostream>;

using namespace std;

int main()
{
	int i{ 10 };

	auto p{ &i };
	auto* p2{ &i };
	const auto p3{ &i };
	auto const p4{ &i };
	const auto* p5{ &i };
	auto* const p6{ &i };

	*p = 15;
	*p2 = 20;
	*p3 = 25;
	*p4 = 30;
	//*p5 = 35;
	p5 = p;
	*p6 = 40;
	p6 = p;
	return 0;
}