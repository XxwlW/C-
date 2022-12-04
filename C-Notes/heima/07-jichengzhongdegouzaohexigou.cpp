#include <iostream>

using namespace std;

class Base
{
    public:
        Base()
        {
            cout << "调用Base的构造函数" << endl;
        }
        ~Base()
        {
            cout << "调用Base的析构函数" << endl;
        }
};

class Son : public Base 
{
    public:
    Son()
    {
        cout << "调用Son的构造函数" << endl;
    }
    ~Son()
    {
        cout << "调用Son的析构函数" << endl;
    }
};

class Base2
{
    public:
        Base2(int a)
        {
            m_A =  a;
            cout << "Base2 的 m_A: " << m_A << endl;
        }
        int m_A;
};

class Son2 : public Base2
{
    public:
        Son2() = default;
        // Son2(const Son2& a) : Base2(a) {}; // 派生类初始化基类成员变量，显示调用其构造函数和拷贝构造函数
        Son2(int a = 100) : Base2(a) {
            
        };
    

};

int main()
{
    // Base b1;
    // Son s1;
    // Base2 B(100);
    // cout << B.m_A << endl;
    Son2 s2();
    // cout << "s2 的 m_A: " <<  s2.m_A << endl; 

    return 0;
}