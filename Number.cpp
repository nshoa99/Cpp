#include "Number.h"
#include <iostream>
using namespace std;

Number::Number(double x) : data(x)
{

}

Number::~Number()
{
    cout << "Delete: " << this->data << endl;
}

Number::operator int()
{
    return int(this->data);
}

Number::operator double()
{
    return this->data;
}

// Chỉ được phép đa năng hóa bằng hàm thành viên của lớp và không có kiểu trả về
