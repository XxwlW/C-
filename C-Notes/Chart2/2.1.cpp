#include <iostream>
#include <string>
using namespace std;

// 练习2.10
// int global_int;
string global_str;

int main()
{
	// unsigned u = 10, u2 = 42;
	// std::cout << u2 - u << std::endl;  
	// std::cout << u - u2 << std::endl; 
    
    // string a = "2\tM\n";
    // cout << a << endl;
    /*2.2*/
    // 练习2.10
    // int local_int;
    // string local_str;
    // // cout << global_int << endl;
    // cout << global_str << endl;
    // cout << local_int << endl;
    // cout << local_str << endl;

    //练习 2.15
    // int ival = 1.01;
    // cout << ival << endl;

    //练习 2.16
    // int i = 0, &r1 = i;
    // double d = 0, &r2 = d;
    // r1 = d ;
    // cout << r1 << endl;

    //练习 2.18
    // int i = 5, j = 199;
    // int *p = &i;
    // cout << p << " " << *p << endl;
    // p = &j;
    // cout << p << " " << *p << endl;
    // *p = 10;
    // cout << p << " " << *p << endl;
    // j = 30;
    // cout << p << " " << *p << endl;
    // return 0;

    // 练习2.20
    // int i = 5;
    // int *p = &i;
    // cout << p << " " << *p << endl;
    // *p = *p * *p;
    // cout << p << " " << *p << endl;

    // int i = 42;
    // int *p;
    // int *&r = p;
    // r = &i;


    // cout << p << " " << *p << endl;
    // cout << r << " " << *r << endl;

    // int i = 11;
    // int &r1 = i;
    // const int &r2 = i;
    // cout << r1 << endl;
    // cout << r2 << endl;
    // r1 = 3;
    // cout << i << endl;
    // // r2 = 4;
    // cout << r2 << endl;
  

    // 练习 2.34
    // int i = 0, &r = i;
    // auto a = r;
    // cout << "a:" << a << endl;
    // const int ci = i, &cr = ci;
    // auto b = ci;
    // auto c = cr;
    // auto d = &i;
    // auto e = &cr;
    // const auto f = ci;
    // auto &g = ci;
    // const auto &j = 42;

    // cout << "b:" << b << endl;
    // cout << "c:" << c << endl;
    // cout << "d:" << d << endl; 
    // cout << "e:" << e << endl;
    // cout << "f:" << f << endl;
    // cout << "g:" << g << endl; 
    // cout << "j:" << j << endl;

    // a = 42;
    // b = 42;
    // c = 42;
    // cout << "a:" << a << endl;
    // cout << "b:" << b << endl;
    // cout << "c:" << c << endl;

    // 练习 2.35
    // const int i = 42;
    // auto j = i;
    // const int &k = i;
    // auto *p = &i;
    // const auto j2 = i, &k2 = i;

    // cout << typeid(i).name() << endl;
    // cout << typeid(j).name() << endl;
    // cout << typeid(k).name() << endl;
    // cout << typeid(p).name() << endl; // PKi： 指针
    // cout << typeid(j2).name() << endl;
    // cout << typeid(k2).name() << endl;

    // const int ci = 0, &cj = ci;
    // decltype(ci) x = 0;

    //练习2.36
    // int a = 3, b = 4;
    // decltype(a) c = a;
    // decltype((b)) d = a;
    // ++c;
    // ++d;

    // cout << c << endl;
    // cout << d << endl;

    // string s;
    // while (cin >> s)
    // {
    //     cout << s << endl;
    // }

    return 0;
}