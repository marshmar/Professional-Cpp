/*
* 3방향 비교연산자(three-way comparison operator)
* or 우주선 연산자(spaceship operator)

* 평가 결과가 비교 대상이 되는 값과 같은지 아니면 크거나 작은지 알려줌
* 결과가 bool타입이 아님


*/
import <iostream>;
import <compare>;

using namespace std;
int main()
{
	int i{ 11 };
	
	strong_ordering result_i{ i <=> 0 }; // 피연산자가 정수타입인 경우 사용

	/*
	* less:: 첫 번째 피연산자가 두 번째 피연산자보다 작다
	* greater:: 첫 번째 피연산자가 두 번째 피연산자보다 크다
	* equal:: 두 피연산자가 같다.
	*/
	if (result_i == strong_ordering::less) { cout << "less" << endl; }
	if (result_i == strong_ordering::greater) { cout << "greater" << endl; }
	if (result_i == strong_ordering::equal) { cout << "equal" << endl; }
	
	partial_ordering result_p{ float(i) <=> 0.0f};	// 피연산자가 부동소수점 타입이면 사용

	/*
	* equivalent: 두 피연산자가 같다
	* unordered: 두 피연산자 중 하나는 숫자가 아니다.
	*/
	if (result_p == partial_ordering::less) { cout << "less" << endl; }
	if (result_p == partial_ordering::greater) { cout << "greater" << endl; }
	if (result_p == partial_ordering::equivalent) { cout << "equivalent" << endl; }
	if (result_p == partial_ordering::unordered) { cout << "unordered" << endl; }

	/*
	* weak_ordering: 자신이 직접 정의한 타입에 사용
	*/

	// 결과를 true나 false로 반환하는 함수들
	if (is_lt(result_i)) { cout << "less(<)" << endl; }
	if (is_lteq(result_i)) { cout << "less(<=)" << endl; }
	if (is_gt(result_i)) { cout << "greater(>)" << endl; }
	if (is_gteq(result_i)) { cout << "greater(>=)" << endl; }
	if (is_eq(result_i)) { cout << "equal(==)" << endl; }
	if (is_neq(result_i)) { cout << "not equal(!=)" << endl; }

	return 0;
}