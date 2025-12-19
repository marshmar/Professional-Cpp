import <iostream>;
import <string_view>;

using namespace std;

string_view extractExtension(string_view filename)
{
	return filename.substr(0, filename.rfind('.'));
}

void hanedleExtension(const string& extension)
{

}

int main()
{
	string filename{ R"(c:\temp\my file.ext)" };
	cout << format("C++ string: {}", extractExtension(filename)) << endl;

	const char* cString(R"(c:\temp\my file.ext)");
	cout << format("C string: {}", extractExtension(cString)) << endl;

	cout << format("Literal: {}", extractExtension(R"(c:\temp\my file.ext)")) << endl;

	const char* raw{};
	size_t length{};
	cout << format("Raw: {}", extractExtension({ raw, length })) << endl;
	cout << format("Raw: {}", extractExtension(string_view{ raw, length })) << endl;

	//hanedleExtension(extractExtension("my file.ext")); // compile error: why? 스트링 뷰를 사용하는 것 만으로는 string이 생성되지 않음.
	hanedleExtension(extractExtension("my file.ext").data());
	hanedleExtension(string{ extractExtension("my file.ext")});

	// string과 string_view는 서로 결합 불가능
	string str{ "Hello" };
	string_view sv{ " World!" };
	//auto result{ str + sv }; // compile error
	auto result1{ str + sv.data() };
	auto result2{ str };
	result2.append(sv.data(), sv.size());

	string s{ "Hello" };
	string_view sv{ s + " World!" };
	//cout << sv;		ciritical error, why?: s + " World!"는 string 객체를 생성하는 데 ;이 나오면 이 임시객체가 사라지고, sv는 이 임시 객체에 대한 포인터를 나타내고 있으므로

	// string_view 리터럴
	auto sv2{ "My String_view"sv };
	return 0;
}