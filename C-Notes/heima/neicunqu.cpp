#include<iostream>
using namespace std;

int g_a = 10;
int g_b = 10;

int main()
{
	// 全局变量
    int a = 10;
    int b = 10;
    cout << "局部变量a的地址" << (int)&a << endl;
    cout << "局部变量a的地址" << (int)&b << endl;

    cout << "全局变量a的地址" << (int)&g_a << endl;
    cout << "全局变量a的地址" << (int)&g_b << endl;

	return 0;
}