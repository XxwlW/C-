#include<iostream>
#include<string>
#include <cstring>
#include<vector>
#include<cmath>

using namespace std;
// void test1()
// {
//     char string[10];
//     char* str1 = "0123456789";
//     strcpy(string, str1);
//     cout << string << endl;
// }

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    vector<int> res;
    if(matrix.empty()) return res;
    int loop = max(m,n) / 2; // 转圈次数
    int start_x = 0, start_y = 0;
    int offset = 1;
    int i, j;
    while(loop--)
    {
        i = start_x;
        j = start_y;
        for(j = start_y; j < n - offset; ++j)
        {
            res.push_back(matrix[start_x][j]);
        }
        // cout << j << endl;
        for(i = start_x; i < m - offset; ++i)
        {
            res.push_back(matrix[i][j]);
        }
        for(; j > start_y; --j)
        {
            res.push_back(matrix[i][j]);
        }
        for(; i > start_x; --i)
        {
            res.push_back(matrix[i][j]);
        }

        //下一圈
        start_x++;
        start_y++;
        // offset++;
    }
    // if(n % 2)
    // {
    //     res.push_back(matrix[m / 2][n / 2]);
    // }
    return res;
}

// string* GetMemory(string *str)
// {
//     char p[] = "hello";
//     str = p;
//     return str;
// }

int main()
{
    // string *str = NULL;
    // str = GetMemory(str);
    // cout << str;

    // char *str = (char*) malloc(100);
    // strcpy(str, "hello");    
    // cout << str << endl;
    // free(str);

    // vector<vector<int>> matrix(3, vector<int>(3, 0));
    // int count = 1;
    // for(int i = 0; i < 3; ++i)
    // {
    //     for(int j = 0; j < 3; ++j)
    //     {
    //         matrix[i][j] = count;
    //         count++;
    //     }
    // }
    // vector<vector<int>> matrix;
    // vector<int> a;
    // a.push_back(3);
    // matrix.push_back(a);
    // vector<int> b;
    // b.push_back(2);
    // matrix.push_back(b);
    // vector<int> c;
    // c.push_back(1);
    // matrix.push_back(c);
    // spiralOrder(matrix);
    int i;
    for(i = 0; i < 2; ++i)
    {
        cout << i << endl;
    }
    cout << i << endl;

} 