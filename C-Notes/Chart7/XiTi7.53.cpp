#include<iostream>

using namespace std;

class Debug
{
    private:
        bool hw; // 硬件错误
        bool io; // IO错误
        bool other; // 其他错误
    public:
        constexpr Debug(bool b = true) : hw(b), io(b), other(b) {};
        constexpr Debug(bool h, bool i, bool o) : hw(h), io(i), other(o) {};
        constexpr bool any() {return hw || io || other;};

        void set_io(bool b) {io = b;};
        void set_hw(bool b) {hw = b;};
        void set_other(bool b) {hw = b;};

};

int main()
{
    constexpr Debug io_sub(false, true, false); 
    if(io_sub.any())
    {
        cerr << "print appropriate error messages" << endl;
    }
    constexpr Debug prob(false);
    if(prob.any())
    {
        cerr << "print an error message" << endl;
    }

    return 0;
}