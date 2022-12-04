#include<iostream>
#include<vector>
#include<time.h>
#include<cstdlib>
using namespace std;

int main()
{
    // constexpr int len = 10;
    // vector<int> arr;
    // srand(time(NULL));
    // cout << "数组初始为：" << endl;
    // for(int i=0; i < len; ++i){
    //     arr.push_back(rand() % 10);
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // for (auto &a : arr)  // 注意要引用！！！
    // {
    //     a = (a % 2 != 0) ? a * 2 : a;
    // }
    // cout << "翻倍后的数组为：" << endl;
    // for(auto it = arr.cbegin(); it != arr.cend(); ++it){
    //     cout << *it << " ";
    // }

    unsigned long quiz1 = 0;
    1UL << 27;
    cout << 1UL << endl;

    quiz1 |= ~(1UL << 27);
    cout << quiz1 << endl;

    return 0;
}
