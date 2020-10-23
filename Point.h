//header -> Khai báo lớp
#include <iostream>
using namespace std;

class Point
{   
        // Khai báo tập hợp tên thuộc tính của lớp
        // quyền truy cập, public, private, protected 
    private: 
        // const int m; 
        //// Point -> điểm trong hệ tọa độ Descartes -> tọa độ xVal, yVal 
        int xVal;
        int yVal;

    // Khai báo thuộc tính tĩnh
    // public:
    //     static int n; 

        // Khai báo tập hợp các thuộc tính/hành vi của lớp
    public:
        //  // get
        // int Get_xVal();
        // // set
        // void Set_xVal(int);

        // Khai báo hàm tịnh tiến
        void TT(int);
        // Khai báo hàm Show
        void Show();

        // Constructor -> Khởi tạo giá trị thuộc tính cho đối tượng -> được gọi khi khai báo đối tượng
        // Tồn tại vô số hàm dựng -> 3 loại hàm dựng cơ bản - Nạp chồng phương thức 
        // Đa năng hóa hàm -> cách định nghĩa nhiều hàm cùng tên 
        // user defined 
        Point();
        // Có tham số 
        Point(int, int);
        // Copy constructor -> khởi tạo 1 đối tượng từ 1 đối tượng tồn tại trước đó 
        // Point(const Point&);

        // Destructor -> Hàm hủy -> Tự động được gọi khi đối tượng được giải phóng -> giải phóng vùng nhớ cấp phát cho đối tượng
        // Khi cấp phát động cho đối tượng hoặc đối tượng có con trỏ.
        // Tên hàm hủy có dấu ~ và không có tham số 
        ~Point();

        //friend void Display(const Point&);
        static void PrintCount();

        friend Point operator+(const Point&, const Point&);
        Point operator-(const Point&);

        // Đa năng hóa toán tử đặc biệt
        friend ostream& operator<<(ostream&, const Point&);
        friend istream& operator>>(istream& , Point&);


        // Hàm dựng để ép kiểu int về thành 1 đối tượng Point
        Point(int); 
        //friend Point operator+(const Point&, const int&);

        
        Point& operator++();

        const Point operator++(int);

};