#include<iostream>
#include<string>

#define MAX 1000 //最大人数

using namespace std;

// 创建联系人结构体
struct Person
{
	string Name; // 姓名
	int Sex; //性别
	int Age; // 年龄
	string Phone; //电话
	string Adress;// 地址
};

//	通讯录结构体
struct Addressbooks
{
	struct Person personArray[MAX]; // 保存联系人的数组
	int Size;
};

//封装 添加联系人函数
void addPerson(Addressbooks *abs)
{
	if (abs->Size == MAX)
	{
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	else {
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->Size].Name = name;

		cout << "请输入性别：" << endl;
		cout << "1 -- 男" << endl;
		cout << "2 -- 女" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->Size].Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入";
		}

		//年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->Size].Age = age;

		//联系电话
		cout << "请输入联系电话：" << endl;
		string phone = "";
		cin >> phone;
		abs->personArray[abs->Size].Phone = phone;

		//家庭住址
		cout << "请输入家庭住址：" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->Size].Adress = address;

		//更新通讯录人数
		abs->Size++;

		cout << "添加成功" << endl;
		system("pause");
		system("cls");
	}
}

// 封装 显示所有联系人

// 展示某个联系人信息
void showOnePerson(Addressbooks *abs, int i)
{
	cout << "联系人信息" << endl;
	cout << "1.姓名：" << abs->personArray[i].Name << "\t";
	cout << "2.性别：" << (abs->personArray[i].Sex == 1 ? "男" : "女") << "\t";
	cout << "3.年龄：" << abs->personArray[i].Age << "\t";
	cout << "4.电话：" << abs->personArray[i].Phone << "\t";
	cout << "5.住址：" << abs->personArray[i].Adress << endl;
}

void showPerson(Addressbooks *abs)
{
	if (abs->Size == 0)
	{
		cout << "当前通讯录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->Size; ++i)
		{
			showOnePerson(abs, i);
		}
	}
	system("pause");
	system("cls");
}

//封装 删除联系人
int isExist(Addressbooks *abs, string name)
{
	for (int i = 0; i < abs->Size; ++i)
	{
		if (abs->personArray[i].Name == name)
		{
			return i;
		}
	}
	return -1;
}

void deletePerson(Addressbooks *abs)
{
	cout << "请输入您要删除的联系人" << endl;
	string name;
	cin >> name;

	int index = isExist(abs, name);
	if (index != -1)
	{
		for (int i = index; i < abs->Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->Size--;
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");
}


//封装 查找联系人
void findPerson(Addressbooks *abs)
{
	cout << "请输入您要查找的联系人" << endl;
	string name;
	cin >> name;

	int index = isExist(abs, name);
	if (index != -1)
	{
		cout << "联系人信息" << endl;
		showOnePerson(abs, index);
	}
	else
	{
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");
}

//封装 修改联系人
void modifyPerson(Addressbooks *abs)
{
	cout << "请输入您要修改的联系人" << endl;
	string name;
	cin >> name;

	int index = isExist(abs, name);
	int modifyIndex;
	if (index != -1)
	{
		cout << "原始信息:" << endl;
		showOnePerson(abs, index);
		cout << "要修改的信息：" << endl;

		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[index].Name = name;
		

		cout << "请输入性别：" << endl;
		cout << "1 -- 男" << endl;
		cout << "2 -- 女" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[index].Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入";
		}

		//年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[index].Age = age;

		//联系电话
		cout << "请输入联系电话：" << endl;
		string phone = "";
		cin >> phone;
		abs->personArray[index].Phone = phone;

		//家庭住址
		cout << "请输入家庭住址：" << endl;
		string address;
		cin >> address;
		abs->personArray[index].Adress = address;

		cout << "修改成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");
}

void clearPerson(Addressbooks *abs)
{
	abs->Size = 0;
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}

void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
	cout << "***************************" << endl;
}


//int main()
//{
//	int select = 0; // 选择功能建
//	// 创建通讯录
//	Addressbooks abs;
//	abs.Size = 0; 
//
//	while (true)
//	{
//		// 展示功能界面
//		showMenu();
//		cin >> select;
//		switch (select)
//		{
//		case 1:  //添加联系人
//			addPerson(&abs);
//			break; 
//		case 2:  //显示联系人
//			showPerson(&abs);
//			break;
//		case 3:  //删除联系人
//			deletePerson(&abs);
//			break;
//		case 4:  //查找联系人
//			findPerson(&abs);
//			break;
//		case 5:  //修改联系人
//			modifyPerson(&abs);
//			break;
//		case 6:  //清空联系人
//			clearPerson(&abs);
//			break;
//		case 0: // 退出
//			cout << "欢迎下次使用" << endl;
//			system("pause");
//			return 0;
//			break;
//		default:
//			break;
//		}
//		
//	}
//
//	system("pause");
//	return 0;
//}