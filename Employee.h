#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__
#include <iostream>


using namespace std;

class Employee
{
private:
	int employeeNo;
	char* name;

public:
	Employee();
	
	Employee(int no, const char* name);

	Employee(Employee* emp);

	int getEmployeeNo();

	const char* getName();

	friend ostream& operator << (ostream& ostm, Employee& emp);

	friend bool operator ==(Employee& emp1, Employee& emp2);
	friend bool operator >=(Employee& emp1, Employee& emp2);
	friend bool operator >(Employee& emp1, Employee& emp2);
	friend bool operator <=(Employee& emp1, Employee& emp2);
	friend bool operator <(Employee& emp1, Employee& emp2);
};
#endif // !__EMPLOYEE_H__


