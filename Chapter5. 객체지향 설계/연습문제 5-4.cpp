/*
* 연습문제 5-3에서 완성환 클래스 다이어그램을 토대로 몇 가지 동작과 속성을 추가해보자. 
* 그리고 매니저가 팀원을 관리한다는 사실도 반영해보자
*/
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Person
{
private:
	string m_name;
	string m_address;

public:
	void ChangeName(string newName);
	void MoveTo(string newAddress);
};

class Employee : public Person
{
private:
	int m_id;
	int m_salary;
	string m_hireDate;
	bool m_hired;

public:
	void IncreaseSalary(int newSalary);
	void Hire(string date);
	void Fire(string date);
};

class Manager : public Employee
{
private:
	vector<Employee> team;

public:
	// ManageTeam 말고도 팀원 추가, 삭제 등등 여러 메서드 추가 가능
	void ManageTeam();
};