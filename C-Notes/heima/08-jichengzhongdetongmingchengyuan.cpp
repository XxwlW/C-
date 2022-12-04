#include<iostream>

using namespace std;

class Base
{
    public:
        Base()
        {
            this->m_A = 100;
        }
    void func()
    {
        cout << "基类/父类中的Func()调用" << endl;
    }

    void func(int a) // 同名的成员函数，子类会隐藏掉父类中的所有同名函数
    {
        cout << "基类/父类中的Func(int a)调用,其值：" << a << endl;
    }

    int m_A;
};

class Son : public Base
{
    public:
        Son()
        {
            this->m_A = 200;
        }
        
        void func()
        {
            cout << "子类/派生类中的Func()调用" << endl;
        }

        int m_A;
};

int main()
{
    Son s;
    cout << "子类/派生类中的值：" << s.m_A << endl;  // 访问派生类/子类的同名成员 直接访问 就近原则
    cout << "父类/基类中的值：" << s.Base::m_A << endl; // 派生类/子类 访问基类/父类的同名成员，添加作用域 对象.基类/父类名::成员名 


    s.func();  // 访问派生类/子类的同名成员函数 直接访问 就近原则； 若子类/派生类中没有该同名成员或同名函数，则调用父类/基类的该成员或者函数 
    s.Base::func();// 派生类/子类 访问基类/父类的成员函数，添加作用域 对象.基类/父类名::成员名

    // s.func(10); // 无法访问 ：// 同名的成员函数，子类会隐藏掉父类中的所有同名函数,只能调用派生类/子类本身的函数。
    s.Base::func(10); 
    return 0;
}