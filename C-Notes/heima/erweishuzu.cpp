#include<iostream>
#include <sstream>
#include <string>
#include <cmath>
using namespace std;

int ip2decimal(void* ip)
{
		stringstream str;
		string ip_str;
		str<<ip;
		str>>ip_str;
        int bit=0;
        int ans=0;
        for(int i=ip_str.size();i>=0;--i)
		{
            if(ip_str[i]>='0'&&ip_str[i]<='9')
			{
                ans+=(ip_str[i]-'0')*pow(16,bit++);
            }else if(ip_str[i]>='A'&&ip_str[i]<='F')
			{
                ans+=(ip_str[i]-'A'+10)*pow(16,bit++);
            }
        }
        return ans;
}

int main()
{
    // 定义方式 1
    int arr[2][3];
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[0][2] = 3;
    arr[1][0] = 4;
    arr[1][1] = 5;
    arr[1][2] = 6;

    for(int i = 0; i < 2; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // 定义方式2 没有值的位置用0 补充
    int arr2[2][3] = {{1,2 },{4,5,6}};
    for(int i = 0; i < 2; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    //定义方式3 没有值的位置用0 补充
    int arr3[2][3] = {1, 2, 3};
    for(int i = 0; i < 2; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    //定义方式4
    int arr4[ ][3] = {1,2,3,4};
    for(int i = 0; i < 2; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            cout << arr4[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "二维数组行数：" << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << "二维数组列数：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

    // 获取首地址
    cout << "二维数组的首地址：" << (int*)arr << endl;
    cout << "二维数组的首地址：" << ip2decimal(&arr) << endl;
    cout << "二维数组的第一行地址：" << (int*)arr[0] << endl;
    cout << "二维数组的第一行地址：" << ip2decimal(&arr[0]) << endl;
    cout << "二维数组的第二行地址：" << (int*)arr[1] << endl;
    cout << "二维数组的第二行地址：" << ip2decimal(&arr[1]) << endl;
    cout << "二维数组的第一个元素地址：" << (int*)arr[0][0] << endl;
    cout << "二维数组的第一个元素地址：" << ip2decimal(&arr[0][0]) << endl;

    return 0;
}