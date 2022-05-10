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
	peopleinfo infor[1000];//联系人数组
	int size;//记录联系人个数
}contact;

//菜单  
void menu();
//添加
void AddContact(contact* pf, int num);
//初始化
void InitContact(contact* pf);
//打印
void PrintContact(contact* pf);
//删除
void DelContact(contact* pf);
//查找
int FindContact(contact* pf, string name);
//打印查找联系人信息
void ContAch(contact* pf, int tmp);
//修改联系人
void ModiContact(contact* pf, string name);
//清空联系人
void EmptyContact(contact* pf);
// 排序
void ContactSort(contact* pf);







