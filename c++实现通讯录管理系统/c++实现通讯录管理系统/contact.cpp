#include "contact.h"
void ContAch(contact* pf, int tmp)
{
	if (tmp != -1)
	{
		cout << "�ҵ��������ҵ���ϵ��" << endl;
		cout << "����" << "\t" << "�Ա�" << "\t" << "����" << "\t" << "�绰" << "\t" << "��ͥסַ" << endl;
		cout << pf->infor[tmp].name << "\t" << pf->infor[tmp].sex << "\t" << pf->infor[tmp].age << "\t" << pf->infor[tmp].phone << "\t" << pf->infor[tmp].loca << endl;
	}
	else
	{
		cout << "��Ǹ��û����Ҫ���ҵ���ϵ��" << endl;
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
	pf->size = 0;//��ʼ����ϵ�˸���Ϊ0
	
}
void AddContact(contact* pf, int num)
{

	if (pf->size < num)
	{
		cout << "���������䣺" << endl;
		cin >> pf->infor[pf->size].age;
		cout << "�������ַ��" << endl;
		cin >> pf->infor[pf->size].loca;

		cout << "���������֣�" << endl;
		cin >> pf->infor[pf->size].name;

		cout << "������绰��" << endl;
		cin >> pf->infor[pf->size].phone;

		cout << "�������Ա�" << endl;
		cin >> pf->infor[pf->size].sex;

		pf->size++;
	}
	else
	{
		cout << "ͨѶ¼���������������ϵ��" << endl;
	}
}
void PrintContact(contact* pf)
{
	cout << "����" << "\t" << "�Ա�" << "\t" << "����" << "\t" << "�绰" << "\t" << "��ͥסַ" << endl;
	for(int i = 0; i < pf->size; i++)
	{
		cout << pf->infor[i].name<< "\t" << pf->infor[i].sex << "\t" << pf->infor[i].age << "\t" << pf->infor[i].phone << "\t" << pf->infor[i].loca << endl;
	}
}
void DelContact(contact* pf)
{
	string name1 = "0";
	cout << "��������Ҫɾ����ϵ�˵�������" << endl;
	cin >> name1;
	if (FindContact(pf, name1) != -1)
	{
		if (pf->infor[FindContact(pf, name1)].name == name1)//�ж��Ƿ���Ҫɾ������ϵ��
		{
			//�ƶ�������ϵ��
			for (int i = FindContact(pf, name1); i < pf->size - 1; i++)
			{
				pf->infor[i] = pf->infor[i + 1];
			}
			pf->size--;//������1
			cout << "ɾ���ɹ�" << endl;
		}
	}
	else
	{
		cout << "û����Ҫɾ������ϵ��" << endl;
	}
}
int FindContact(contact* pf, string name)
{
	for (int i = 0; i < pf->size; i++)
	{
		if (pf->infor[i].name == name)
		{
			return i;//�����±�
		}
	}
	return -1;
}
void ModiContact(contact* pf, string name)
{
	int tmp = FindContact(pf, name);
	if (tmp != -1)
	{
		cout << "���������䣺" << endl;
		cin >> pf->infor[tmp].age;
		cout << "�������ַ��" << endl;
		cin >> pf->infor[tmp].loca;

		cout << "���������֣�" << endl;
		cin >> pf->infor[tmp].name;

		cout << "������绰��" << endl;
		cin >> pf->infor[tmp].phone;

		cout << "�������Ա�" << endl;
		cin >> pf->infor[tmp].sex;

	}
	else
	{
		cout << "��Ǹ��û����Ҫ�޸ĵ���ϵ��" << endl;
	}
}
void EmptyContact(contact* pf)
{
	if (pf->size != 0)
	{
		pf->size = 0;
		cout << "�����ϵ���б�ɹ�" << endl;
	}
	else
	{
		cout << "��ϵ���б��Ѿ��ǿգ������ٴ����" << endl;
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
	cout << "����ɹ�" << endl;
}