#include "circular linked list.h"
#include "Employee.h"

int main(void)
{
	int numbuffer;
	int employeeNum;
	char namebuffer[20];

	LinkedList<Employee>* linkedlist = new LinkedList<Employee>;

	/*cout << "����� ������ �Է��Ͻðڽ��ϱ�?" << endl;
	cin >> employeeNum;
	cout << employeeNum << "���� ������ �̸��� �Է��մϴ�. : " << endl;*/

	linkedlist->AddNode(new Employee(10, "�谭��"));
	linkedlist->printAllNode();
	cout << "------------------" << endl;
	linkedlist->AddNode(new Employee(20, "�Ǽ���"));
	linkedlist->printAllNode();
	cout << "------------------" << endl;
	linkedlist->AddNode(new Employee(30, "���ص�"));
	linkedlist->printAllNode();
	cout << "------------------" << endl;
	linkedlist->AddNode(new Employee(40, "������"));
	linkedlist->printAllNode();
	cout << "------------------" << endl;
	/*for (int i = 0; i < employeeNum; i++)
	{
		cout << i + 1 << "��° ������" << endl;
		cout << "�����ȣ : ";
		cin >> numbuffer;
		rewind(stdin);
		cout << "�̸� : ";
		cin >> namebuffer;
		linkedlist->AddNode(new Employee(numbuffer, namebuffer));
	}*/
	Employee a(10, "�Ǽ���");
	Employee b(20, "�谭��");
	char c[20] = "���ص�";
	cout << (int)(c[0] << c[1]) << endl;

	cout << (a > b) << endl;
	cout << (int)"�Ǽ���" << endl;
	cout << (int)"�谭��" << endl;
	cout << (int)"������" << endl;
	cout << (int)"���ص�" << endl;
	cout << strcmp("�Ǽ���", "�谭��") << endl;
	linkedlist->printAllNode();
	
	
	
	return 0;
}

