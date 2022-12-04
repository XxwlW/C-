#include<iostream>

using namespace std;

// 动物类
class Animal
{
    public:
        int Age; //年龄
};

// 继承方式前 加virtual关键字后，为虚继承，其基类为虚基类
// 羊类
class Sheep : virtual public Animal // 虚继承
{

};

// 驼类
class Tuo : virtual public Animal //虚继承
{

};

// 羊驼类
class SheepTuo : public Sheep, public Tuo
{

};

void test1()
{
    SheepTuo st;
    st.Age = 10; // 菱形继承导致数据有一份浪费。虚继承可以解决菱形继承问题。
    cout << st.Age <<endl;
}
// 虚继承内部的工作原理 
void test2()
{    
    SheepTuo st;
    st.Age = 100; 
    
    cout << "st的地址：" << &st << endl;
    //通过Sheep类找到偏移量值
    cout << "通过Sheep找到的偏移量为：" << *(int *)((int*)*(int *)&st + 1) << endl;

    //通过Tuo类找到偏移量值
    // cout << "通过Tuo找到的偏移量为：" << *(int *)((int*)*((int *)&st + 1) + 1) << endl;

    // 通过偏移量求 Age值
    cout << ((Animal *)((char *)&st + (*(int *)((int*)*(int *)&st + 1))))->Age << endl;
}

int main()
{
    test1();
    test2();

    return 0;
}