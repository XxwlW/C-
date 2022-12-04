#include<iostream>

using namespace std;

int main()
{
    // 定义1 数据类型 数组名[数组长度];
    int arr1[5]; // 声明数组 
    // 赋值 进行初始化
    arr1[0] = 1;
    arr1[1] = 2;
    arr1[2] = 3;
    arr1[3] = 4;
    arr1[4] = 5;

    for(int i = 0; i < 5; ++i)
    {
        cout << arr1[i] << endl; // 输出数组1
    }

    // 定义2 数据类型 数组名[数组长度] = {值1, 值2, ...}  
    // 若初始化时值的个数 ≠ 数组长度，则会用0补全
    int arr2[5] = {6, 7, 8};
    for(int i = 0; i < 5; ++i)
    {
        cout << arr2[i] << endl; // 输出数组2
    }

    // 定义3 数据类型 数组名[ ] = {值1, 值2, ...}
    int arr3[ ] = {11, 12, 13, 14, 15};
    for(int i = 0; i < 5; ++i)
    {
        cout << arr3[i] << endl; // 输出数组3
    }
    cout << "数组1占内存空间：" << sizeof(arr1) << endl;
    cout << "数组1每个元素所占内存：" << sizeof(arr1[0]) << endl;
    cout << "数组1元素个数：" << sizeof(arr1) / sizeof(int) << endl;
    cout << "数组2占内存空间：" << sizeof(arr2) << endl;
    cout << "数组3占内存空间：" << sizeof(arr3) << endl;
    cout << "数组1首地址：" << (int*)arr1 << endl;
    cout << "数组1第一个元素的地址：" << &arr1[0] << endl;
    cout << "数组1第二个元素的地址：" << &arr1[1] << endl;
    cout << "数组2首地址：" << arr2 << endl;
    cout << "数组3首地址：" << arr3 << endl;
    return 0;
}