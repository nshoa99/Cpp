#include "Matrix.h"

Matrix::Matrix(int row, int col, int t) : col(col), row(row)
{
    this->data = new int*[this->row];
    for( int i = 0; i < this->row; ++i)
    {
        *(this->data + i) = new int[this->col];
        for(int j = 0; j < this->col; ++j)
        {
            *(*(this->data + i) + j) = t;
        }
    }
}

Matrix::~Matrix()
{
    for(int i = 0; i < this->row; ++i)
    {
        delete[] *(this->data + i);
    }
    delete[] this->data;
}

void Matrix::Show()
{   
    cout<< "Matrix: " << endl;
    for(int i = 0; i < this->row; ++i)
    {
        for(int j = 0; j < this->col; ++j)
        {
            // cout << *(*(this->data + i) + j) << " ";
            cout << (*this)(i,j) << " ";
        }
        cout << endl;
    }
}

ostream& operator<<(ostream& o,const Matrix& m)
{
    o << "Matrix: " << endl;
    for (int i = 0; i < m.row; ++i )
    {
        for (int j = 0; j < m.col; ++j)
        {
            o << *(*(m.data + i) + j) << " ";
        }
        o << endl;
    }
}

int& Matrix::operator()(const int& i, const int& j)
{
    static int error = 100; 
    return (i >= 0 && i < this->row && j >=0 && j < this->col) ? *(*(this->data + i) + j) : error;
}
