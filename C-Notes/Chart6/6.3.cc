#include<iostream>
#include<typeinfo>
#include<vector>
using namespace std;

int initializer_list_sum(initializer_list<int> int_list)
{
    int sum = 0;
    for(auto begin = int_list.begin(); begin != int_list.end(); ++begin)
    {
        sum += *begin;
    }
    return sum;
}

char &get_val(string &s, int ix)
{
    return s[ix];    
}

void pp(vector<int> iv, int index)
{
    int sz = iv.size();
    if(!iv.empty() && index < sz)
    {
        cout << iv[index] << endl;
        pp(iv, index+1);
    }
}

int factorial(int val)
{
    if(val > 1)
        return factorial(val - 1) * val;
    return 1;
}

// 练习3.36
// 正常函数
// string (*func( ))[10]
// {
    
// }
// 使用别名定义
// using arrT = string[10];
// arrT &func();

//尾置类型
// auto func() -> string(*) [10];

//使用 decltype
string a[10];
decltype(a) *func();
 // 练习3.37
int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};

decltype(odd) &arrPtr(int i)
{
    return (i % 2) ? odd : even; // 返回数组的引用
}

int main()
{
    // string str = "12345";
    // cout << typeid(int).name() << endl;
    // get_val(str, 0) = 'A';
    // cout << str << endl;

    //练习6.33
    // vector<int> v = {1,2,3,4,5,6};
    // pp(v,0);

   

    // cout << factorial(3) << endl;
    
    for(auto i : arrPtr(2))
    {
        cout << i << endl;
    }
    return 0;
}