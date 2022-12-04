#include<iostream>
#include<vector>
#include<time.h>
#include<cstdlib>
#include<stdexcept>
using namespace std;

int main()
{
    int a, b;
    cout << "输入两个整数：" << endl;

    // cin >> a;
    // cin >> b;
    // if(b == 0){
    //     throw runtime_error("除数不能为0");
    // }

    while(cin >> a >> b){
        try
        {
            if(b == 0)
            {
                throw runtime_error("除数不能为0");
            }
            cout << "两数相除结果：" << a / b << endl;
        }
        catch(runtime_error err)
        {
            cout << err.what() << endl;
            cout << "是否继续？(y / n)" << endl;
            char ch;
            cin >> ch;
            if (ch != 'y' && ch != 'Y')
            {
                break;
            }
        }
    }   


    return 0;
}