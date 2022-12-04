#include<iostream>

using namespace std;

class Shape
{
    protected:
        int width, height;
    public:
        Shape(int  a, int b)
        {
            width = a;
            height = b;
        }
        virtual int area() = 0;
        // {
        //     cout << "Parent class area :" << endl;
        //     return 0;
        // }
};

class Recatangle : public Shape
{
    public:
        Recatangle(int a, int b) : Shape(a, b) {}
        virtual int area()
        {
            cout << "Recatangle class area :";
            return (width * height);
        }
};

class Triangle : public Shape
{
    public:
        Triangle(int a, int b) : Shape(a, b) {}
        virtual int area()
        {
            cout << "Recatangle class area :";
            return ((width * height) / 2);
        }
};

int main()
{
    Shape *shape; // 基类指针
    Recatangle rec(10, 7);
    Triangle tri(10, 5);

    // 存储矩形的地址
    shape = &rec;
    // 调用矩形的面积函数
    cout << shape -> area() << endl;

    // 存储三角形的地址
    shape = &tri;
    // 调用三角形的面积函数
    cout << shape -> area() << endl;

    return 0;
}