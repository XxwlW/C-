#include<iostream>

using namespace std;

int fact(int n)
{
    if(n < 0)
    {
        return -1;
    }
    int res = 1;
    for (int i = 1; i != n + 1; ++i)
    {
        res *= i;
    }
    return res;
}

double MyADD(double val1, double val2)
{
    double res = val1 + val2;
    static double iCnt = -1;
    ++iCnt;
    // 
    return iCnt;
}

int main()
{
    // cout << "输入数字n：" << endl;
    // int n;
    // cin >> n;
    // int res;
    // res = fact(n);
    // cout << "n的阶乘：" << res << endl;

    double n1, n2;
    cout << "输入两个数：" << endl;
    while(cin >> n1 >> n2)
    {
        cout << n1 << "与" << n2 << "之和：" 
        << MyADD(n1, n2) << endl;
    }     
    return 0;
}