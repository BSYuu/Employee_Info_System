#include "Employee.h"

Employee::Employee() :employeeNo(-1)
{
	name = new char[strlen("ȫ�浿") + 1];
	strcpy(name, "ȫ�浿");
}

Employee::Employee(int no, const char* name) :employeeNo(no)
{
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
}

Employee::Employee(Employee* emp)
{
	employeeNo = emp->employeeNo;
	name = new char[strlen(emp->name) + 1];
	strcpy(name, emp->name);
}

int Employee::getEmployeeNo()
{
	return employeeNo;
}

const char* Employee::getName()
{
	return name;
}

ostream& operator << (ostream& ostm, Employee& emp)
{
	ostm << "�����ȣ : " << emp.employeeNo << " �̸� : " << emp.name;
	return ostm;
}

bool operator ==(Employee& emp1, Employee& emp2)
{
	return (emp1.employeeNo == emp2.employeeNo && !strcmp(emp1.name, emp2.name));
}

bool operator >=(Employee& emp1, Employee& emp2)
{
	return (strcmp(emp1.name,emp2.name) == -1 || strcmp(emp1.name, emp2.name) == 0);
}

bool operator >(Employee& emp1, Employee& emp2)
{
	return (strcmp(emp1.name, emp2.name) == -1);
}

bool operator <=(Employee& emp1, Employee& emp2)
{
	return (strcmp(emp1.name, emp2.name) == 1 || strcmp(emp1.name, emp2.name) == 0);
}

bool operator <(Employee& emp1, Employee& emp2)
{
	return (strcmp(emp1.name, emp2.name) == 1);
}
