#include <iostream>

using namespace std;

class Base
{
    public:
        static int m_A; // 静态成员 共享数据，编译阶段分配内存，必须在类内声明，在类外初始化；
        // 如果要在类内初始化静态成员，要为其提供const整数类型的初始值，且其类型必须为constexpr 类型 或者 const

        static constexpr int m_B = 10000 ; 
        static void func() // 静态成员函数可以在类内初始化，也可以在类外初始化 
        {
            cout << "基类中的func调用" << endl;
        };
        static void func(int a) // 静态成员函数可以在类内初始化，也可以在类外初始化 
        {
            cout << "基类中的func(int a)调用,其值：" << a << endl;
        };
};

int Base:: m_A = 10;

class Son : public Base
{
    public:
        static int m_A;
        static void func()
        {
            cout << "派生类中的func调用" << endl;
        };
};

int Son::m_A = 20;

int main()
{   
    //对m_A 进行访问
    Son s;

    // 第一种 通过对象进行访问， 方法与同名函数访问相同
    cout << "通过对象访问子类/派生类中的值：" << s.m_A << endl; 
    cout << "通过对象访问子类/派生类中的值：" << s.m_B << endl; 
    cout << "通过对象访问父类/基类中的值：" << s.Base::m_A << endl;  

    // 第二种 通过类名进行访问
    cout << "通过类名访问子类/派生类中的值：" << Son::m_A << endl; 
    cout << "通过类名访问父类/基类中的值：" << Base::m_A << endl; 
    cout << "通过类名访问父类/基类中的值：" << Son::Base::m_A << endl;  // 通过Son类访问静态成员，且其作用域为 Base

    //对静态成员函数进行访问
    // 第一种 通过对象进行访问， 与同名函数访问相同
    s.func();  // 子类/派生类 同名静态成员函数
    s.Base::func();  // 父类/基类 同名静态成员函数

    // 第二种 通过类名进行访问    
    Son::func();
    Base::func();
    Son::Base::func();
    
    // 若父类/基类中有多版本的同名函数（重载）,则子类会隐藏所有同名成员函数，只能通过父类来进行访问
    // s.func(1); //无法访问？
    s.Base::func(1);
    Son::Base::func(1);
    return 0;
}