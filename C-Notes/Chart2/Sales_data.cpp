#include<iostream>
#include<string>
// #include "Sales_data.h"
using namespace std;


class Sales_data
{
    friend std::istream& operator >> (std::istream&, Sales_data&);
    friend std::ostream& operator << (std::ostream&, Sales_data&);
    friend bool operator < (const Sales_data&, const Sales_data&);
    friend bool operator == (const Sales_data&, const Sales_data&);
    
    public:
        Sales_data() = default;
        Sales_data(const std::string &book) : bookNo(book) {}
        Sales_data(std::istream &is) {is >> *this; }
    public:
        Sales_data& operator+= (const Sales_data&);
        std::string isbn() const {return bookNo;}

    public:
        std::string bookNo; // 书籍编号 隐式初始化为空
        unsigned units_sold = 0; // 销量 显式初始化为 0
        double sellingprice = 0.0; // 原价
        double saleprice = 0.0; // 售价
        double discount = 0.0; // 折扣
};

inline bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs)
{
    return lhs.isbn() == rhs.isbn();
}

Sales_data operator + (const Sales_data &, const Sales_data &);
inline bool operator == (const Sales_data &lhs, const Sales_data &rhs)
{
    return lhs.units_sold == rhs.units_sold && lhs.sellingprice == rhs.sellingprice && lhs.saleprice == rhs.saleprice && lhs.isbn() == rhs.isbn();
}

inline bool operator != (const Sales_data &lhs, const Sales_data &rhs)
{
    return !(lhs == rhs); // 基于运算符== 给出!=定义
}

Sales_data& Sales_data::operator += (const Sales_data & rhs)
{
    units_sold += rhs.units_sold;
    saleprice = (rhs.saleprice * rhs.units_sold + saleprice * units_sold) / (rhs.units_sold + units_sold);
    if(sellingprice != 0)
    {
        discount = saleprice / sellingprice;
    }
    return *this;
}

std::istream& operator >> (std::istream& in, Sales_data& s)
{
    in >> s.bookNo >> s.units_sold >> s.sellingprice >> s.saleprice;
    if( in && s.sellingprice != 0)
        s.discount = s.saleprice / s.sellingprice;
    else
        s = Sales_data();
    return in;
}

std::ostream& operator << (std::ostream& out, const Sales_data& s)
{
    out << s.isbn() << " " << s.units_sold << " " << s.sellingprice << " " << s.saleprice << " " << s.discount;
    return out;
}

int main()
{
    Sales_data book;
    std::cout << "请输入销售记录：" << std::endl;
    while(cin >> book)
    {
        std::cout << "ISBN、售出数量、原价、实价、折扣：" << book << std::endl;
    }
    Sales_data trans1, trans2;
    std::cout << "请输入两条ISBn相同的记录：" << std::endl;
    cin >> trans1 >> trans2;
    if (compareIsbn(trans1, trans2))
    {
        std::cout << "汇总信息：ISBN、售出数量、原价、实价、折扣：" << trans1 + trans2 << std::endl;
    }
    else
        std::cout << "两天记录ISBN不同" << std::endl;

    Sales_data total, trans;
    std::cout << "请输入n条ISBn相同的记录：" << std::endl;
    if(cin >> total)
    {
        while(cin >> trans){
            if (compareIsbn(total, trans))
                total = total + trans;
            else
            {
                std::cout << "当前数据ISBN不同" << std::endl;
                break;
            }
        }
        std::cout << "汇总信息：ISBN、售出数量、原价、实价、折扣:" << total << std::endl;
    }
    else
    {
        std::cout << "没有数据" << std::endl;
        return -1;
    }

    int num = 1; // 记录当前销售总数
    std::cout << "请输入若干记录" << std::endl;
    if(std::cin >> trans1)
    {
        while(std::cin >> trans2)
        {
            if(compareIsbn(trans1, trans2)) // ISBN相同
            {
                num++;
            }
            else
            {
                std::cout << trans1.isbn() << "共有" << num << "条记录" << std::endl;
                trans1 = trans2;
                num = 1;
            }
        }
        std::cout << trans1.isbn() << "共有" << num << "条记录" << std::endl;
    }
    else
    {
        std::cout << "没有数据" << std::endl;
        return -1;
    }
    return 0;

}