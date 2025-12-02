import <iostream>;
import <format>;
import employee;

using namespace std;

int main()
{
	// 직원 레코드 생성 및 값 채우기
	Employee anEmployee;
	anEmployee.firstInitial = 'J';
	anEmployee.lastInitial = 'D';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;

	// 직원 레코드에 저장된 값 출력하기
	cout << format("Employee: {} {}", anEmployee.firstInitial, anEmployee.lastInitial) << endl;
	cout << format("Number: {}", anEmployee.employeeNumber) << endl;
	cout << format("Salary: ${}", anEmployee.salary) << endl;
}

