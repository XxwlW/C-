#include<iostream>
#include<string>
#include<vector>
using namespace std;

// void fact(int *p, int *q)
// {
//     int temp;
//     temp = *p;
//     *p = *q;
//     *q = temp;

// }

// void fact2(int &p)
// {
//     p = 0;

// }

// string::size_type find_char(string &s, char c, string::size_type &cout)
// {
//     auto len = s.size();
//     cout = 0;
//     for (decltype(len) i = 0; i != s.size(); ++i)
//     {
//         if(s[i] == c){
//             if(len == s.size())
//                 len = i;
//             cout++;
//         }
//     }
//     return len;
// }

// bool is_essentence(const string &s)
// {
//     string::size_type ctr = 0;
//     string a;
//     a = s;
//     return find_char(a, '.', ctr) == s.size() - 1 && ctr == 1;
// }

// bool is_capital(const string &s)
// {
//     for(auto ss : s)
//     {
//         if(isupper(ss))
//             return true;
//         return false;
//     }
// }

// string modify_capital(string &s)
// {   
//     for(auto &ss : s)
//     {
//         if(isupper(ss))
//             ss = tolower(ss);
//     }
//     return s;
// }

// vector<int>::iterator change_val(vector<int>::iterator a)
// {
//     return a;
// }

int compare(int a, int *p)
{
    return (a > *p) ? a : *p;
}

void swap_needle1(int &p, int &q)
{
    int temp;
    temp = p;
    p = q;
    q = temp;
}

void swap_needle2(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

void swap_needle3(int *&p, int *&q)
{
    int *temp = p;
    p = q;
    q = temp;
}

// int main()
// {

    

//     // 习题6.10
//     // int *p, *q;
//     // int a = 1, b = 2;
//     // p = &a;
//     // q = &b;

//     // cout << "交换前： a = " << a << " b = " << b << endl; 
//     // fact(&a, &b);
//     // cout << "交换后： a = " << a << " b = " << b << endl; 
    
//     // int j = 42;
//     // fact2(j);
//     // cout << j << endl;


//     // 使用引用参数返回额外信息
//     // string s = "aoooa.";
//     // string::size_type ctr = 0;
//     // bool a;
//     // a = is_essentence("aoooa.");


//     //练习 6.11
//     // int i = 42;
//     // fact2(i);
    
//     //练习 6.17
//     // cout << "输入字符串：" << endl;
//     // string str;
//     // cin >> str;
//     // if(is_capatil(str))
//     // {
//     //     modify_capatil(str);
//     //     cout << "转换后字符串：" << str << endl;
//     // }
//     // else
//     // {
//     //     cout << "字符串没有大写字母." << endl;
//     // }
    
//     // vector<int> a;
//     // for(int i = 0; i < 5; ++i)
//     // {
//     //     a.push_back(i);
//     // }
//     // change_val(a);
//     // for(auto i : a)
//     //     cout << i << endl;

//     //练习 6.211
//     int a, b;
//     cout << "输入两个数:" << endl;
//     cin >> a >> b;
//     int *p = &a, *q = &b;
//     // cout << "较大的数：" << compare(a, p) << endl;
//     swap_needle1(*p, *q);
//     cout << "交换后：" << *p << " " << *q << endl;

//     swap_needle2(p, q);
//     cout << "交换后：" << *p << " " << *q << endl;
    
//     swap_needle3(p, q);
//     cout << "交换后：" << *p << " " << *q << endl;
//     return 0;
// }

int main(int argc, char **argv)
{
    for(int i = 0; i != argc; ++i)
    {
        cout << "arg[" << i << "]" << argv[i] << endl;
    }
    return 0;
}