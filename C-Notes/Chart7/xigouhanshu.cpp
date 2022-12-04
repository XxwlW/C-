#include<iostream>
#include<string>
using namespace std;

class Base
{
    public:
        Base() 
        {
            strsBase = new string[10];
            cout << "Base::Base()" << endl;    
        }
        virtual ~Base()
        {
            delete [] strsBase;
            cout << "Free strsBase in Base::Base() " << endl;
        }
        void func()
        {
            cout << "Base::func()" << endl;
        }
    private:
        string *strsBase;
};

class Son : public Base
{
    public:
        Son()
        {
            p = new int[6];
            cout << "Son::Son()" << endl;
        }
        ~Son()
        {
            delete [] p;
            cout << "Free P in Son::Son() " << endl;
        }
        void func()
        {
            cout << "Son::func()" << endl;
        }
    private:
        int *p;
};

int main()
{
    // Son *p = new Son(); // 用子类指针操作子类，释放指针p的过程是：先释放子类中的资源，然后释放基类资源。释放完全。
    // p->func();
    // delete p;

    Base *p = new Son(); // 用基类指针操作子类，释放指针p的过程是：只释放了基类的资源，没有调用子类的析构函数，因此没有释放子类的资源，释放不完全，需讲析构函数声明为虚函数。
    // 之后，释放指针P的过程是：先释放子类申请的资源，再调用基类析构函数，释放父类申请的资源。调用fun1()函数，执行的也是子类中定的函数，表现出了多态特征。
    p->func();
    delete p;


    return 0;
}