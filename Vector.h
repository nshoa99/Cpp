#include <iostream>
using namespace std;

class Vector
{
    private:
        int* data;
        int size; 
    public:
        Vector(int = 3, int = 2);
        ~Vector();
        void Show();
        friend ostream& operator<<(ostream&, const Vector&);
        int& operator[](const int&);
};