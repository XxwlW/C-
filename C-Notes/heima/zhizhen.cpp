#include<iostream>

using namespace std;

void bubbleSort(int *arr, int len)
{
    for(int i = 0; i < len; ++i)
    {
        for(int j = 0; j < len; ++j)
        {
            if(arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArr(int *arr, int len)
{
    for(int i = 0; i < len; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// void bubbleSort2(int (&arr)[10])
// {
//     int len = sizeof(arr) / sizeof(int);
//     for(int i = 0; i < len; ++i)
//     {
//         for(int j = 0; j < len; ++j)
//         {
//             if(arr[i] < arr[j])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     for(int i = 0; i < len; ++i)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

int main()
{
    
    // int a = 10, b = 10;
    // //1. const 修饰指针  常量指针
    // const int *p = &a; // 常量指针，指针指向的值不可以改， 指针的指向可以改
    // // *p = 20; //指针指向的值不可以改
    // p = &b; // 指针的指向可以改

    // //2. const 修饰常量 指针常量
    // int * const p2 = &a; 
    // *p2 = 100; // 指针指向的值可以改
    // // p2 = &b; // 指针的指向不可以改
    
    // //3. const 修饰常量和指针
    // const int * const p3 = &a;
    // // *p3 = 100; // 指针指向的值不可以修改
    // // p3 = &b; // 指针的指向不可以修改
    
    // // cout << "sizeof(int *) = " << sizeof(int *) << endl;

    // //指针与数组
    // int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    // int *p = arr; // p指向数组的首地址
    // // cout << *p << endl;
    // // 指针访问 数组任意位置 p++ 相对于指针p向后移动了4个字节 
    // // cout << *(p+1) << endl;
    // for(int i = 0; i < sizeof(arr) / sizeof(int); ++i)
    // {
    //     cout << *(p++) << " ";
    // }
    

    int arr2[10] = {4,3,6,9,1,2,10,8,7,5};
    int len = sizeof(arr2) / sizeof(int);
    cout << "排序前：" << endl;
    printArr(arr2, len); // 数组以参数的形式传出时会成为一个指针类型，失去了数组的属性， 因此必须传入一个数组的长度。
    // bubbleSort(arr2, len);
    // cout << "排序后：" << endl;
    // printArr(arr2, len);
    
    bubbleSort(arr2);
}