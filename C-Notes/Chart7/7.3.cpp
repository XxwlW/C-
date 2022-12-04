#include<iostream>
#include<string>
#include<vector>
#include <list>

using namespace std;

class Screen
{
    public:
        friend class Window_mgr;
        using pos = std::string::size_type; // pos 位置的名字
        //Screen的构造函数
        Screen() = default; //因为需要用到另一个构造函数，如果要使用默认的构造函数时即需要将其显式定义 即 = default
        Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht*wd, c) { };
        char get() const {return contents[cursor];}; //隐式内联 返回当前光标位置字符
        inline char get(pos ht, pos wd) const; // 显式内联 该函数不改变数据成员，因此加const 进行标识  返回由行号 列号确定的位置字符
        Screen &move(pos r, pos c); 
        pos size() const;

    private:
        pos cursor = 0; // 光标当前位置
        pos height = 0, width = 0; // 屏幕的高和宽
        std::string contents; // 屏幕内容
};

Screen::pos Screen::size() const
{
    return height * width;
}

inline Screen &Screen::move(pos r, pos c)
{
    pos row = r * width; // 计算行的位置
    cursor = cursor + row; // 行内光标移动到指定的列
    return *this; // 返回对象
}

char Screen::get(pos r, pos c) const
{
    pos row = r * width; //计算航的位置
    return contents[row + c]; // 返回给定列的字符
}

class Window_mgr
{
    private:
        std::vector<Screen> screens{Screen(24, 80, ' ')};
    public:
        using ScreenIndex = std::vector<Screen>::size_type; // 窗口中每个屏幕的编号
        void clear(ScreenIndex); // 按照编号将指定Screen重置为空白

};

void Window_mgr::clear(ScreenIndex i)
{
    Screen &s = screens[i]; // 修改s的内容，因此用引用
    s.contents = string(s.height * s.width, ' '); // 重置为空白
}

int main()
{   
    list<int> li;
    vector<int> vi;
    for(int i = 0; i < 5; i++)
    {
        
        li.push_back(i);
        vi.push_back(i);
    }

    cout << li[li.size()-2] << endl;
    cout << vi[li.size()-2] << endl;

    return 0;
}