#include<iostream>
#include<string>

#define MAX 1000 //�������

using namespace std;

// ������ϵ�˽ṹ��
struct Person
{
	string Name; // ����
	int Sex; //�Ա�
	int Age; // ����
	string Phone; //�绰
	string Adress;// ��ַ
};

//	ͨѶ¼�ṹ��
struct Addressbooks
{
	struct Person personArray[MAX]; // ������ϵ�˵�����
	int Size;
};

//��װ �����ϵ�˺���
void addPerson(Addressbooks *abs)
{
	if (abs->Size == MAX)
	{
		cout << "ͨѶ¼�������޷����" << endl;
		return;
	}
	else {
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->Size].Name = name;

		cout << "�������Ա�" << endl;
		cout << "1 -- ��" << endl;
		cout << "2 -- Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->Size].Sex = sex;
				break;
			}
			cout << "������������������";
		}

		//����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->Size].Age = age;

		//��ϵ�绰
		cout << "��������ϵ�绰��" << endl;
		string phone = "";
		cin >> phone;
		abs->personArray[abs->Size].Phone = phone;

		//��ͥסַ
		cout << "�������ͥסַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->Size].Adress = address;

		//����ͨѶ¼����
		abs->Size++;

		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");
	}
}

// ��װ ��ʾ������ϵ��

// չʾĳ����ϵ����Ϣ
void showOnePerson(Addressbooks *abs, int i)
{
	cout << "��ϵ����Ϣ" << endl;
	cout << "1.������" << abs->personArray[i].Name << "\t";
	cout << "2.�Ա�" << (abs->personArray[i].Sex == 1 ? "��" : "Ů") << "\t";
	cout << "3.���䣺" << abs->personArray[i].Age << "\t";
	cout << "4.�绰��" << abs->personArray[i].Phone << "\t";
	cout << "5.סַ��" << abs->personArray[i].Adress << endl;
}

void showPerson(Addressbooks *abs)
{
	if (abs->Size == 0)
	{
		cout << "��ǰͨѶ¼Ϊ��" << endl;
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

//��װ ɾ����ϵ��
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
	cout << "��������Ҫɾ������ϵ��" << endl;
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
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");
}


//��װ ������ϵ��
void findPerson(Addressbooks *abs)
{
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;

	int index = isExist(abs, name);
	if (index != -1)
	{
		cout << "��ϵ����Ϣ" << endl;
		showOnePerson(abs, index);
	}
	else
	{
		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");
}

//��װ �޸���ϵ��
void modifyPerson(Addressbooks *abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;

	int index = isExist(abs, name);
	int modifyIndex;
	if (index != -1)
	{
		cout << "ԭʼ��Ϣ:" << endl;
		showOnePerson(abs, index);
		cout << "Ҫ�޸ĵ���Ϣ��" << endl;

		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[index].Name = name;
		

		cout << "�������Ա�" << endl;
		cout << "1 -- ��" << endl;
		cout << "2 -- Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[index].Sex = sex;
				break;
			}
			cout << "������������������";
		}

		//����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[index].Age = age;

		//��ϵ�绰
		cout << "��������ϵ�绰��" << endl;
		string phone = "";
		cin >> phone;
		abs->personArray[index].Phone = phone;

		//��ͥסַ
		cout << "�������ͥסַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[index].Adress = address;

		cout << "�޸ĳɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");
}

void clearPerson(Addressbooks *abs)
{
	abs->Size = 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}

void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;
}


//int main()
//{
//	int select = 0; // ѡ���ܽ�
//	// ����ͨѶ¼
//	Addressbooks abs;
//	abs.Size = 0; 
//
//	while (true)
//	{
//		// չʾ���ܽ���
//		showMenu();
//		cin >> select;
//		switch (select)
//		{
//		case 1:  //�����ϵ��
//			addPerson(&abs);
//			break; 
//		case 2:  //��ʾ��ϵ��
//			showPerson(&abs);
//			break;
//		case 3:  //ɾ����ϵ��
//			deletePerson(&abs);
//			break;
//		case 4:  //������ϵ��
//			findPerson(&abs);
//			break;
//		case 5:  //�޸���ϵ��
//			modifyPerson(&abs);
//			break;
//		case 6:  //�����ϵ��
//			clearPerson(&abs);
//			break;
//		case 0: // �˳�
//			cout << "��ӭ�´�ʹ��" << endl;
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