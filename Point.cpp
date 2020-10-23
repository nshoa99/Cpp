// Định nghĩa lớp -> định nghĩa hàm thành viên
#include "Point.h"

// int Point::n = 0; 

// void Point::PrintCount()
// {
//     cout << "n = " << Point::n << endl;
// }

// int Point::Get_xVal()
// {
//     return this->xVal;
// }

// void Point::Set_xVal(int new_xVal)
// {
//     this->xVal = new_xVal;
// }

void Point::TT(int x)
{
    this->xVal += x;
    this->yVal += x;
}

void Point::Show()
{
    // cout <<"m = " << this->m << ", " << this->xVal << ", " << this->yVal << endl;
    cout << this->xVal << ", " << this->yVal << endl;
}

Point::Point() //: m(1), xVal(1), yVal(1)
{   
    // Point::n++;
    // this->n++;      // Hạn chế dùng cách khai báo này 
    // (*this).n++;    // Hạn chế dùng cách khai báo này

    this->xVal = 2;
    this->yVal = 2;
}

Point::Point(int xVal, int yVal) //: m(2), xVal(xVal), yVal(yVal)
{
    // Point::n++;
    this->xVal = xVal;
    this->yVal = yVal;
}

// Point::Point(const Point& p) //: m(3), xVal(p.xVal), yVal(p.yVal)
// {
//     // Point::n++;
//     this->xVal = p.xVal;
//     this->yVal = p.yVal;
// }

Point::~Point()
{
    cout << "Delete " << this->xVal << ", " << this->yVal << endl;
    // Point::n--;
}

// void Display(const Point& p)
// {
//     cout << p.xVal << ", " << p.yVal <<endl;
// }

// Đa năng hóa bằng hàm toàn cục
Point operator+(const Point& p1,const Point& p2)
{
    Point p(p1.xVal + p2.xVal, p1.yVal + p2.yVal);
    return p;
}


// Đa năng hóa bằng hàm thành viên của lớp
Point Point::operator-(const Point& p2)
{
    Point p(this->xVal - p2.xVal, this->yVal - p2.yVal);
    return p; 
}

// Đa năng hóa toán tử đặc biệt

ostream& operator<<(ostream& o, const Point& p)
{
    o << p.xVal << ", " << p.yVal << endl;
    return o;
}

istream& operator>>(istream& i, Point& p)
{
    cout << "xVal = "; 
    i >> p.xVal;
    cout << "yVal = "; 
    i >> p.yVal;
    return i;
}

Point::Point(int x) : xVal(x), yVal(x)
{
}


// Point operator+(const Point& p1,const int& t)
// {
//     Point p(p1.xVal + t, p1.yVal + t);
//     return p;
// }


Point& Point::operator++()
{
    this->xVal++;
    this->yVal++;
    return (*this);
}

const Point Point::operator++(int)
{
    Point before = *this;
    cout << before;
    this->xVal++;
    this->yVal++;
    return before;
}

