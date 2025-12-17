import <iostream>;
import <array>;
import <vector>;

using namespace std;

namespace HR
{
	enum class Title
	{
		Manager,
		SeniorEngineer,
		Engineer
	};

	struct Employee
	{
		string firstInitial;
		string lastInitial;
		int employeeNumber;
		int salary{ 75'000 };
		Title title{ Title::Manager };
	};
}

int main()
{
	using namespace HR;

	Employee emp1{
		.firstInitial = "Kang",
		.lastInitial = "Haedam",
		.employeeNumber = 1,
		.salary = 20,
		.title = Title::Manager
	};

	Employee emp2{
	.firstInitial = "Kang",
	.lastInitial = "Haedam",
	.employeeNumber = 2,
	.salary = 20,
	.title = Title::Manager
	};


	Employee emp3{
	.firstInitial = "Kang",
	.lastInitial = "Haedam",
	.employeeNumber = 3,
	.salary = 20,
	.title = Title::Manager
	};


	std::array<Employee, 3> employees{emp1, emp2, emp3};
	
	for (const auto& emp : employees)
	{
		cout << format("Empoyee : {} {}", emp.firstInitial, emp.lastInitial) << endl;
		cout << format("Employee Number: {}", emp.employeeNumber) << endl;
		cout << format("Salary: {}", emp.salary) << endl;
	}

	vector<Employee> employeeVec;
	employeeVec.push_back(emp1);
	employeeVec.push_back(emp2);
	employeeVec.push_back(emp3);

	for (const auto& emp : employeeVec)
	{
		cout << format("Empoyee : {} {}", emp.firstInitial, emp.lastInitial) << endl;
		cout << format("Employee Number: {}", emp.employeeNumber) << endl;
		cout << format("Salary: {}", emp.salary) << endl;
	}
	return 0;
}