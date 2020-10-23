#include <iostream>
using namespace std;

class Vector
{
    private:
        int* data;
        int size; 
    public:
        Vector(int = 3, int = 2);
        // hàm dựng sao chép
        Vector(const Vector&);

        ~Vector();
        void Show();
        friend ostream& operator<<(ostream&, const Vector&);
        int& operator[](const int&);

        // đa năng hóa toán tử gán
        const Vector& operator=(const Vector&);
};


// Chỉ được phép đa năng hóa bằng hàm thành viên của lớp và không có kiểu trả về
