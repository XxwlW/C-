#include<iostream>

using namespace std;


//int main()
//{
//    int arr[] = {4, 2, 8, 0, 5,  7, 1, 3, 9};
//    int len = sizeof(arr) / sizeof(int);
//    cout << "排序前：" << endl;
//    for(int i = 0; i < len; ++i)
//    {   
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    // 冒泡排序
//    // 总轮数 = 元素数 - 1 ； 内层循环对比次数 = 元素数 - 当前轮数 - 1
//    for(int i = 0; i < len - 1; ++i)
//    {
//        for(int j = 0; j < len - i - 1 ; ++j)
//        {
//            //如果第一个数 > 第二个数 交换
//            if(arr[j] > arr[j + 1])
//            {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//    cout << "排序后：" << endl;
//    for(int i = 0; i < len; ++i)
//    {   
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}