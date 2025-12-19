/// <summary>
/// Ultra-Fast Log Analyzer
/// 로그 파일(문자열)에서 숫자 데이터를 추출하고 분석하는 프로그램
/// 
/// 수만 줄의 로그 데이터가 있다고 가정. 각 로그는 [ID:1004] [Value:123.45] [Status:200] 같은 형식을 가짐
/// 1. string_view로 데이터 슬라이싱
/// 2. low-level 변환
/// 3. high-level 변환
/// </summary>
import <iostream>;
import <charconv>;
import <string_view>;
import <vector>;

using namespace std;


void analyze_log(string_view log)
{
	// 1. "Value" 위치 찾기
	size_t pos = log.find("Value:");
	if (pos == std::string_view::npos) return;

	string_view value_part = log.substr(pos + 6);

	// 2. Low-level 변환
	double value = 0;
	auto [ptr, ec] = from_chars(value_part.data(), value_part.data() + value_part.size(), value);
	if (ec == errc{})
	{
		cout << format("Extracted Value: {}", value) << endl;
	}
}
int main()
{
	string log{R"([ID:1001] [Value:98.76] [Status:200])"};
	analyze_log(log);

	return 0;
}