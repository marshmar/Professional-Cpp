module employee;
import <iostream>;
import <format>;
using namespace std;

namespace Records {
	Employee::Employee(const string& firstName, const string& lastName)
		: m_firstName{firstName}, m_lastName{lastName}
	{ }
}