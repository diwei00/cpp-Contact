#include "contact.h"
void ContAch(contact* pf, int tmp)
{
	if (tmp != -1)
	{
		cout << "找到了您查找的联系人" << endl;
		cout << "姓名" << "\t" << "性别" << "\t" << "年龄" << "\t" << "电话" << "\t" << "家庭住址" << endl;
		cout << pf->infor[tmp].name << "\t" << pf->infor[tmp].sex << "\t" << pf->infor[tmp].age << "\t" << pf->infor[tmp].phone << "\t" << pf->infor[tmp].loca << endl;
	}
	else
	{
		cout << "抱歉！没有您要查找的联系人" << endl;
	}
}

void menu()
{
	cout << "********************************" << endl;
	cout << "****    1.Add    2.Show     ****" << endl;
	cout << "****    3.Del    4.Find     ****" << endl;
	cout << "****    5Modi    6.Empty    ****" << endl;
	cout << "****    7.Sort   0.exit     ****" << endl;
	cout << "********************************" << endl;
}
void InitContact(contact* pf)
{
	pf->size = 0;//初始化联系人个数为0
	
}
void AddContact(contact* pf, int num)
{

	if (pf->size < num)
	{
		cout << "请输入年龄：" << endl;
		cin >> pf->infor[pf->size].age;
		cout << "请输入地址：" << endl;
		cin >> pf->infor[pf->size].loca;

		cout << "请输入名字：" << endl;
		cin >> pf->infor[pf->size].name;

		cout << "请输入电话：" << endl;
		cin >> pf->infor[pf->size].phone;

		cout << "请输入性别：" << endl;
		cin >> pf->infor[pf->size].sex;

		pf->size++;
	}
	else
	{
		cout << "通讯录已满，不能添加联系人" << endl;
	}
}
void PrintContact(contact* pf)
{
	cout << "姓名" << "\t" << "性别" << "\t" << "年龄" << "\t" << "电话" << "\t" << "家庭住址" << endl;
	for(int i = 0; i < pf->size; i++)
	{
		cout << pf->infor[i].name<< "\t" << pf->infor[i].sex << "\t" << pf->infor[i].age << "\t" << pf->infor[i].phone << "\t" << pf->infor[i].loca << endl;
	}
}
void DelContact(contact* pf)
{
	string name1 = "0";
	cout << "请输入你要删除联系人的姓名：" << endl;
	cin >> name1;
	if (FindContact(pf, name1) != -1)
	{
		if (pf->infor[FindContact(pf, name1)].name == name1)//判断是否有要删除的联系人
		{
			//移动后面联系人
			for (int i = FindContact(pf, name1); i < pf->size - 1; i++)
			{
				pf->infor[i] = pf->infor[i + 1];
			}
			pf->size--;//个数减1
			cout << "删除成功" << endl;
		}
	}
	else
	{
		cout << "没有您要删除的联系人" << endl;
	}
}
int FindContact(contact* pf, string name)
{
	for (int i = 0; i < pf->size; i++)
	{
		if (pf->infor[i].name == name)
		{
			return i;//返回下标
		}
	}
	return -1;
}
void ModiContact(contact* pf, string name)
{
	int tmp = FindContact(pf, name);
	if (tmp != -1)
	{
		cout << "请输入年龄：" << endl;
		cin >> pf->infor[tmp].age;
		cout << "请输入地址：" << endl;
		cin >> pf->infor[tmp].loca;

		cout << "请输入名字：" << endl;
		cin >> pf->infor[tmp].name;

		cout << "请输入电话：" << endl;
		cin >> pf->infor[tmp].phone;

		cout << "请输入性别：" << endl;
		cin >> pf->infor[tmp].sex;

	}
	else
	{
		cout << "抱歉！没有你要修改的联系人" << endl;
	}
}
void EmptyContact(contact* pf)
{
	if (pf->size != 0)
	{
		pf->size = 0;
		cout << "清空联系人列表成功" << endl;
	}
	else
	{
		cout << "联系人列表已经是空，不用再次清空" << endl;
	}
	
}
void swap(peoinfo* a, peoinfo* b)
{
	peoinfo tmp = *a;
	*a = *b;
	*b = tmp;
}
void ContactSort(contact* pf)
{

	for (int i = 0; i < pf->size - 1; i++)
	{
		for (int j = 0; j < pf->size - 1 - i; j++)
		{
			if (pf->infor[j].age > pf->infor[j + 1].age)
			{
				swap(&pf->infor[j], &pf->infor[j + 1]);
			}
		}
	}
	cout << "排序成功" << endl;
}