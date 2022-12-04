#include<iostream>

using namespace std;

class Base1
{
    public:
        Base1()
        {
            m_A = 10;
        }
        int m_A;
};

class Base2
{
    public:
        Base2()
        {
            m_A = 20;
        }
        int m_A;
};

class Son : public Base1, public Base2
{
    public: 
        int m_C;
        int m_D;
};

int main()
{
    // cout << sizeof(Son) << endl; //16
    Son s;
    cout << "Base1中的 m_A = " << s.Base1::m_A << endl; // 多继承时 会出现 二义性
    cout << "Base2中的 m_A = " << s.Base2::m_A << endl;
    return 0;
}