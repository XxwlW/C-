#include<iostream>
#include<string>

using namespace std;

class Quote
{
    private:
        std::string bookNo;
    protected:
        double price = 0.0;

    public:
        Quote() = default;
        Quote(const std::string &book, double sales_price) : bookNo(book), price(sales_price) {};
        std::string isbn() const {return bookNo;}
        //派生类赋值改写并使用不同的折扣计算函数
        virtual double net_price(std::size_t n) const {return n * price;}
        virtual ~Quote() = default; // 对析构函数进行动态绑定
};

class Bulk_quote : public Quote
{
    public:
    Bulk_quote() = default;
    Bulk_quote(const std::string& book, double sales_prices, std::size_t m, double d) : Quote(book, sales_prices), min_qty(m), discount(d) {};
    double net_price(size_t cnt) const override
    {
        if(cnt >= min_qty)
        {
            return cnt * (1 - discount) * price;
        }
        else
        {
            return cnt * price;
        }
    }

    private:
        size_t min_qty = 0;
        double discount = 0.0;
};

class Limited_quote : public Quote
{   
    private:
        size_t min_qty = 0;
        double discount = 0.0;

    public:
        Limited_quote() = default;
        Limited_quote(const std::string& book, double sales_prices, std::size_t m, double d) : Quote(book, sales_prices), min_qty(m), discount(d) {};
        double net_price(size_t cnt) const override
        {
            if (cnt <= min_qty)
            {
                return cnt * (1 - discount) * price;
            }
            else
            {
                return min_qty * (1 - discount) * price +  (cnt - min_qty) * price;
            }
        }
};

double print_total(ostream& os, const Quote &item, size_t n)
{
    double ret = item.net_price(n);
    os << "ISBN:" << item.isbn() << " # sold:" << n << " total due:" << ret << endl;
    return ret;
}

int main()
{
    Quote q("MLBook", 10);
    Bulk_quote bq("MLBook", 10, 10, 0.3);
    Limited_quote lq("DLBook", 10, 10 , 0.3);
    print_total(std::cout, q, 5);
    print_total(std::cout, bq, 5);
    print_total(std::cout , lq, 5);
    
    print_total(std::cout, q, 10);
    print_total(std::cout, bq, 5); // 没有折扣
    print_total(std::cout, bq, 10); // 有折扣

    print_total(std::cout, lq, 5); // 有折扣
    print_total(std::cout, lq, 15); // 部分折扣
    
    return 0;
}