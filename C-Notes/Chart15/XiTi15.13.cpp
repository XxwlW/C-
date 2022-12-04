#include<iostream>
#include<string>

using namespace std;

class base
{
    public:
        base(string szNm) : basename(szNm){}
        string name()
        {
            return basename;
        }
        virtual void print(ostream &os) 
        {
            os << "base：" << basename << endl;
        }
    private:
        string basename;
};

class derived : public base
{
    public:
        derived(string szName, int iv) : base(szName), i(iv) {}
        void print(ostream &os) override
        {
            base::print(os);
            os << "--" << i;
        }
    private:
        int i;
};

int main()
{
    derived d("aa", 1);
    d.print(std::cout);

    return 0;
}