#include <iostream>
using namespace std;
typedef struct peopleinfo
{
	string name;
	string sex;
	int age;
	string phone;
	string loca;
}peoinfo;
typedef struct contact
{
	peopleinfo infor[1000];//��ϵ������
	int size;//��¼��ϵ�˸���
}contact;

//�˵�  
void menu();
//���
void AddContact(contact* pf, int num);
//��ʼ��
void InitContact(contact* pf);
//��ӡ
void PrintContact(contact* pf);
//ɾ��
void DelContact(contact* pf);
//����
int FindContact(contact* pf, string name);
//��ӡ������ϵ����Ϣ
void ContAch(contact* pf, int tmp);
//�޸���ϵ��
void ModiContact(contact* pf, string name);
//�����ϵ��
void EmptyContact(contact* pf);
// ����
void ContactSort(contact* pf);







