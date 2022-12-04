#include<iostream>
#include<cstring>
#include<time.h>
#include<vector>
#include<iterator>
using namespace std;

int main(){
    system("chcp 65001");
    // char c[4] = "C++";
    // cout << sizeof(c)/sizeof(c[0]) << endl;

    // int a[] = {1,2,3,4,5,6,7,8};
    // int *p1 = begin(a);
    // cout << *p1 << endl;
    // int *p2 = end(a);
    // cout << *p2 << endl;

    // for(;p1 != p2; p1++){
    //     *p1 = 0;
    // }

    // for(int *p1 = begin(a);p1 != p2; p1++){
    //     cout << *p1 << endl;
    // }

    // const int sz = 5;
    // constexpr int ss = 5;
    // vector<int> a, b;
    // srand(time(NULL));
    // for(int i = 0; i < sz; i++)
    // {
    //     a.push_back(rand() % 10);
    //     cout << a[i] << " ";
    // }
    // cout << endl;

    // int in;
    // for(int i = 0; i < ss; i++){
    //     cin >> in;
    //     b.push_back(in);
    // }
    // cout << "输入数组b:" << endl;
    // for(auto ii : b)
    // {
    //     cout << ii << " ";
    // }
    // cout << endl;
    // vector<int>::iterator beg12, beg22;
    // beg12 = a.begin();
    // beg22 = b.begin();
    // auto beg1 = a.cbegin();
    // auto beg2 = b.cbegin();


    // while (beg1 != a.cend() && beg2 != b.cend())
    // {
    //     if(*beg1 != *beg2){
    //         cout << "两个数组不相等" << endl;
    //         return -1;
    //     }
    //     beg1++;
    //     beg2++;
    // }
    // cout << "两个数组相等" << endl;


    // 3.37
    // const char a[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    // const char *p = a;
    // while(*p)
    // {
    //     cout << *p << endl;
    //     ++p;
    // }

    //3.40
    // const char a[] = {'a', 'b', 'c', 'd', '\0'};
    // const char b[] = "efg";

    // cout << "a:" << a << endl;
    // cout << "b:" << b << endl;
    
    // char c[strlen(a) + strlen(b) - 1];
    // strcpy(c, a);
    // strcat(c, b);
    // cout << "c:" << c << endl;


    // string s = "hahah haha";
    // // char ss[] = "hahah haha";
    // const char *ss = s.c_str();
    // cout << s << endl;
    // cout << *ss << endl;

    int a[5] = {0,1,2,3,4};
    vector<int> res(begin(a), end(a));
    // for(auto i:res)
    // {
    //     cout << i << endl;
    // }

    vector<int>::iterator i = res.begin();
    for(i;i!=res.end();i++)
    {
        cout << *i << endl;
    }

    return 0;
}