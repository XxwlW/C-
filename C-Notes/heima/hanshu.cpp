#include<hanshu.h>

void swap(int n1, int n2)
{
    cout << "交换前：" << endl;
    cout << "n1:" << n1 << endl;
    cout << "n2:" << n2 << endl;
    int temp = n1;
    n1 = n2;
    n2 = temp;
    cout << "交换后：" << endl;
    cout << "n1:" << n1 << endl;
    cout << "n2:" << n2 << endl;
}

// 函数样式
//1. 无参无返
void test1()
{
    cout << "This is Test1()." << endl;
}

//2. 有参无返
void test2(int a)
{
    cout << "This is Test2(), a = " << a << endl;
}

//3. 无参有返
int test3()
{   
    int a = 10;
    cout << "This is Test3() " << endl;
    return a;
}

//4. 有参有返
int test4(int a, int b)
{   
    cout << "This is Test4(), a = " << a << " b = " << b <<  endl;
    return a + b;
}

// 函数声明 提前告诉编译器函数存在
// int max(int a, int b);
//比较函数 返回较大值


//int main()
//{
//    //// 值传递
//    // int n1 = 10, n2 = 20;
//    // cout << "实参：" << endl;
//    // cout << "n1:" << n1 << endl;
//    // cout << "n2:" << n2 << endl;
//    // swap(n1, n2);
//    // cout << "实参：" << endl;
//    // cout << "n1:" << n1 << endl;
//    // cout << "n2:" << n2 << endl;
//
//    // 1.无参无返函数调用
//    test1();
//    // 2.有参无返函数调用
//    test2(4);
//    // 3.无参无返函数调用
//    int test3_return = test3();
//    cout << "Test3 返回值 = " << test3_return << endl;
//    // 2.有参有返函数调用
//    int test4_return = test4(4,5);
//    cout << "Test4 返回值 = " << test4_return << endl;
//
//    cout << "max：" << max(4, 10) << endl;
//
//    return 0;
//}
//

// 函数定义 
int max(int a, int b)
{
    return a > b ? a : b;
}
