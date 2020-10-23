#include "Vector.h"

Vector::Vector(int size, int t)
{
    if (size > 0)
    {
        this->size = size;
        this->data = new int[this->size];
        for(int i = 0; i < this->size; ++i)
        {
            *(this->data + i) = t;
            // (this->data)[i] = t;
            // *((*this).data + i) = t;
            // (*this).data[i] = t;
        }
    }
}

Vector::~Vector()
{
    delete[] this->data;
}

void Vector::Show()
{
    cout << "Vector: ";
    for (int i = 0; i < this->size; ++i)
    {
        // cout << *(this->data + i) << " "; 
        cout << (*this)[i] << " ";
    }
    cout << endl;
}                                                                               

ostream& operator<<(ostream& o, const Vector& v)
{
    cout << "Vector: " ;
    for (int i = 0; i < v.size; ++i)
    {
        cout << *(v.data + i) << " "; 
    }
    cout << endl;
    return o;
}

int& Vector::operator[](const int& index)
{   
    static int error = -100;
    return (index >= 0 && index < this->size) ? *(this->data + index) : error;
}

Vector::Vector(const Vector& v)
{
    cout << "Copy" << endl; 
    this->size = v.size;
    this->data = new int[this->size];
    for(int i = 0; i < v.size; ++i)
    {
        (*this)[i] = *(v.data + i);
    }
}

const Vector& Vector::operator=(const Vector& v)
{
    cout << "=" << endl;
    this->size = v.size;
    this->data = new int[this->size];
    for(int i = 0; i < v.size; ++i)
    {
        (*this)[i] = *(v.data + i);
    }
    return (*this);
}



