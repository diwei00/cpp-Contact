#include "contact.h"
int main()
{

	string name = "0";
	string name1 = "0";

	int tmp = 0;
	
	contact date;//��ϵ��
	InitContact(&date);
	int input = 0;
	do
	{
		menu();
		cout << "���������ѡ��" << endl;
		cin >> input;
		switch (input)
		{
		case 1:
			AddContact(&date,1000);
			break;
		case 2:
			PrintContact(&date);
			break;
		case 3:
			DelContact(&date);
			break;
		case 4:
			cout << "��������Ҫ������ϵ�˵�������" << endl;
			cin >> name;
			tmp = FindContact(&date, name);
			ContAch(&date, tmp);
			break;
		case 5:
			cout << "��������Ҫ�޸���ϵ�˵�������" << endl;
			cin >> name1;
			ModiContact(&date, name1);

			break;
		case 6:
			EmptyContact(&date);
			break;
		case 7:
			ContactSort(&date);
			break;
		case 0:
			cout << "�˳�����" << endl;
			break;
		default:
			cout << "ѡ��Ƿ���������ѡ��" << endl;
			break;
		}
	} while (input);
	
	system("pause");
	return 0;
}