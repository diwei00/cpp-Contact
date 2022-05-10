#include "contact.h"
int main()
{

	string name = "0";
	string name1 = "0";

	int tmp = 0;
	
	contact date;//联系人
	InitContact(&date);
	int input = 0;
	do
	{
		menu();
		cout << "请输入你的选择：" << endl;
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
			cout << "请输入你要查找联系人的姓名：" << endl;
			cin >> name;
			tmp = FindContact(&date, name);
			ContAch(&date, tmp);
			break;
		case 5:
			cout << "请输入你要修改联系人的姓名：" << endl;
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
			cout << "退出程序" << endl;
			break;
		default:
			cout << "选择非法，请重新选择：" << endl;
			break;
		}
	} while (input);
	
	system("pause");
	return 0;
}