#include<iostream>

using namespace std;

class Base
{
    public:
        int m_A;
    protected:
        int m_B;
    private:
        int m_C;
};

class Son : public Base
{
    public:
        int m_D;
};


int main()
{   
    cout << sizeof(Son) << endl; // Son继承了父类的属性，private属性被隐藏，但是 Son中有4个int属性，一个int字节为4，因此son所占内存 为 16，

    system("pause");
    return 0;
}