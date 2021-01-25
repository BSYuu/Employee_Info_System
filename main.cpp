#include "circular linked list.h"
#include "Employee.h"

int main(void)
{
	int numbuffer;
	int employeeNum;
	char namebuffer[20];

	LinkedList<Employee>* linkedlist = new LinkedList<Employee>;

	/*cout << "몇명의 직원을 입력하시겠습니까?" << endl;
	cin >> employeeNum;
	cout << employeeNum << "명의 직원의 이름을 입력합니다. : " << endl;*/

	linkedlist->AddNode(new Employee(10, "배강현"));
	linkedlist->printAllNode();
	cout << "------------------" << endl;
	linkedlist->AddNode(new Employee(20, "권세익"));
	linkedlist->printAllNode();
	cout << "------------------" << endl;
	linkedlist->AddNode(new Employee(30, "허준도"));
	linkedlist->printAllNode();
	cout << "------------------" << endl;
	linkedlist->AddNode(new Employee(40, "이태희"));
	linkedlist->printAllNode();
	cout << "------------------" << endl;
	/*for (int i = 0; i < employeeNum; i++)
	{
		cout << i + 1 << "번째 직원의" << endl;
		cout << "사원번호 : ";
		cin >> numbuffer;
		rewind(stdin);
		cout << "이름 : ";
		cin >> namebuffer;
		linkedlist->AddNode(new Employee(numbuffer, namebuffer));
	}*/
	Employee a(10, "권세익");
	Employee b(20, "배강현");
	char c[20] = "허준도";
	cout << (int)(c[0] << c[1]) << endl;

	cout << (a > b) << endl;
	cout << (int)"권세익" << endl;
	cout << (int)"배강현" << endl;
	cout << (int)"이태희" << endl;
	cout << (int)"허준도" << endl;
	cout << strcmp("권세익", "배강현") << endl;
	linkedlist->printAllNode();
	
	
	
	return 0;
}

