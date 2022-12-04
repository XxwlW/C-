#include <iostream>

using namespace std;

class Base1  // 基类
{
    public:
        int a;
    protected:
        int b;
    private:
        int c;
};

//派生类 公共继承
class Son1 : public Base1
{
    public:
        void func() // 接口函数
        {
            a = 100; // a在son1中 权限为 public
            b = 10;   // b 在son1 中为 protected 权限
            cout << 'a:' << a << endl;
            cout << 'b' << b << endl;
            // c = 11; // 父类中的私有属性子类无法访问
        }
};

// -----------保护继承 -------------
class Base2 // 基类
{
    public:
        int a;
    protected:
        int b;
    private:
        int c;
};

//派生类 保护继承
class Son2 : protected Base2
{
    public:
        void func() 
        {
             // c = 11; // 父类中的私有属性子类无法访问
            a = 100;  // a在son1中 权限为protected
            b =  99;  // b在son1中 权限为protected
            cout << 'a:' << a << endl;
            cout << 'b' << b << endl;
        }
};

// ------------私有继承-------

class Base3
{
    public:
        int a;
    protected:
        int b;
    private:
        int c;
};
class Son3 : private Base3
{
    public:
        void func() // 接口函数
        {
            a = 100; // son3可以访问其基类base3的public 成员， 并在son3中a的权限为 private
            b = 100; // son3可以访问其基类base3的protected 成员， 并在son3中b的权限为 private
            // c = 100; // // 父类中的私有属性子类无法访问
            cout << 'a:' << a << endl;
            cout << 'b' << b << endl;
        }
};
class GrandSon3 : public Son3
{
    public:
        void func()
        {
            // a = 100; // a 在son3中权限为 private 因此无法访问。
        }
};

int main()
{
    Son1 s1;
    s1.a = 222; // a在son1中权限为public，在类外可以访问，因此其对象可以访问。

    Son2 s2;
    // s.a = 100; // a在son2中权限为 protected，在类外不能访问，因此其类对象不能访问

    Son3 s3;
    // s3.a = 100; // a 在son3中的权限为private 在类外不能访问
    // cout << s3.a << endl; 


    return 0;
}