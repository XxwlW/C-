#include<iostream>
#include<string>

using namespace std;

class Window_mgr
{
    public:
        void clear();
};

class Screen
{
    friend void Window_mgr::clear();
    private:
        unsigned height = 0, width = 0;
        unsigned cursor = 0;
        string contents;
    public:
        Screen() = default;
        Screen(unsigned ht, unsigned wd) : height(ht), width(wd), contents(ht * wd, ' ') {};
        Screen(unsigned ht, unsigned wd, char c) : height(ht), width(wd), contents(ht * wd, c) {};
        Screen& move(unsigned r, unsigned c)
        {
            cursor = r * width + c;
            return *this;
        }
        Screen& set(char c)
        {
            contents[cursor] = c;
            return *this;
        }
        Screen& set(unsigned r, unsigned c, char ch)
        {
            contents[r * width + c] = ch;
            return *this;
        }
        Screen& display()
        {
            cout << contents;
            return *this;
        }

        // Screen move(unsigned r, unsigned c)
        // {
        //     cursor = r * width + c;
        //     return *this;
        // }
        // Screen set(char c)
        // {
        //     contents[cursor] = c;
        //     return *this;
        // }
        // Screen set(unsigned r, unsigned c, char ch)
        // {
        //     contents[r * width + c] = ch;
        //     return *this;
        // }
        // Screen display()
        // {
        //     cout << contents;
        //     return *this;
        // }

};

void Window_mgr::clear()
{
    Screen myScreen(1, 2, 'X');
    cout << "清理之前的myScreen内容:" << myScreen.contents << endl;
    myScreen.contents = string(myScreen.height * myScreen.width, ' '); 
    cout << "清理之后的myScreen内容:" << myScreen.contents << endl;
}

class X;
class Y
{
    X* x;
};
class X
{
    Y y;
};




int main()
{
    // Screen myScreen(5, 5, 'x');
    // myScreen.move(4,0).set('#').display();
    // cout << "\n";
    // myScreen.display();
    // cout << endl;

    Window_mgr w;
    w.clear();


    // string a(3, '$');
    // cout << a << endl;
    return 0;
}