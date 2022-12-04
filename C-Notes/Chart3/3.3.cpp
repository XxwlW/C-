#include<iostream>
#include<string>
#include<typeinfo>
#include<time.h>
#include<vector>
using namespace std;

int main()
{
    
    // string str1, str2;
    // cin >> str1 >> str2;
    // if (str1 == str2){
    //     cout << str1 << endl;
    //     cout << str2 << endl;
    // }else{
    //     if(str1 > str2){
    //         cout << "str1 > str2" << str1 << endl;
    //     }else{
    //         cout << "str2 > str1" << str2 << endl;
    //     }
    // }

    // string s, S;
    // cout << "输入字符：" << endl;
    // while (cin >> s)
    // {
    //     S += s;
    //     S += " ";
    // }
    // cout << "输出结果：" << S << endl;

    // string str1("some hhhh");
    // for(auto c:str1)    
    // {
    //     cout << c << endl;
    // }

    // 练习 3.6
    // string C;
    // cout << "输入字符串" << endl;
    // cin >> C;
    // if(! C.empty())
    // {
    //     for (auto &i:C)
    //     {
    //         i = 'X';
    //     }
    // }
    // else{
    //     cout << "字符串为空" << endl;
    // }
    // cout << "替换后结果：" << C << endl;

    // 练习 3.11
    // const string s = "Keep out!";
    // for(auto &c : s)
    // {
        
    //     cout << typeid(c).name() << endl;
    // }

    // 3.14 
    // string i;
    // vector<string> aa; // vector对象
    // char cont = 'y'; // 交互
    // while (cin >> i){
    //     aa.push_back(i);
    //     cout << "是否继续？" << endl;
    //     cin >> cont;
    //     if(cont != 'y' && cont != 'Y'){
    //         break;
    //     }
    // }
    // for(auto a : aa){
    //     cout << a << endl;
    // }


    // vector<int> v{1,2,3,4,5,6};
    // for (auto &i : v){
    //     i *= i;
    // }
    // for (auto i : v){
    //     cout << i << endl;
    // }

    // vector<unsigned> scores(11, 0);
    // unsigned graded;
    // while(cin >> graded){
    //     if (graded <= 100){
    //         ++scores[graded/10];
    //     }
    // }
    // for(auto g : scores){
    //     cout << g << endl;
    // }

    // vector<int> a;
    // for(decltype(a.size()) ix = 0; ix != 10 ; ++ix){
    //     a.push_back(ix);
    // }

    // for(auto g : a){
    //     cout << g << endl;
    // }
    // decltype(a.size()) aaa;

    // cout << typeid(aaa).name() << endl;

    vector<int> in;
    srand((unsigned)time(NULL)); // 生成随机种子
    for (int i = 0; i < 10; i++){
        in.push_back(rand() % 100);// 生成随机数
    }
    cout << "生成随机数：" << endl;
    for (vector<int>::iterator it = in.begin(); it != in.end(); it++){
        cout << *it << endl;
    }
    cout << "翻倍后：" << endl;
    for (auto it = in.begin(); it != in.end(); *it++){
        *it *= 2;
        cout << *it << endl;
    }


    return 0;
}