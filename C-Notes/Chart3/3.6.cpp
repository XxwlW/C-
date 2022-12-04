#include<iostream>

using namespace std;
using int_arr = int[4];

int main()
{
    // int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
    // cout << "范围for语句：" << endl;
    // for(int (&row)[4] : a){
    //     for(int &col : row){
    //         cout << col << " " ;
    //     }
    //     cout << endl;
    // }

    // cout << "下标for：" << endl;

    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 4; j++){
    //         cout << a[i][j]<<  " ";;
    //     }
    //     cout << endl;
    // }

    // cout << "指针for:" << endl;
    // for(int (*p)[4] = a; p != a + 3; p++){
    //     for(int *q = *p; q != *p + 4; q++){
    //         cout << *q <<  " ";
    //     }
    //     cout << endl;
    // }
    
    // //利用别名
    // cout << "利用别名范围for语句：" << endl;
    // for(int_arr &row : a){
    //     for(int &col : row){
    //         cout << col << " " ;
    //     }
    //     cout << endl;
    // }

    // cout << "下标for：" << endl;

    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 4; j++){
    //         cout << a[i][j]<<  " ";;
    //     }
    //     cout << endl;
    // }

    // cout << "指针for:" << endl;
    // for(int_arr (*p) = a; p != a + 3; p++){
    //     for(int *q = *p; q != *p + 4; q++){
    //         cout << *q <<  " ";
    //     }
    //     cout << endl;
    // }

    int k = 0;
    k = {};

    return 0;
}