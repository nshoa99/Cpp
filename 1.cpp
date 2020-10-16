#include "Vector.h"
#include "Point.h"
#include "Matrix.h"
#include "Number.h"
#include <iostream>
using namespace std;


int main(){
    // Point p1;  // xVal = ?, yVal = ? 
    //// Ham dung -> Ham thanh vien của lớp --> Cung cấp hàm dựng mặc định do trình biên dịch định nghĩa
    // p1.Show(); // hàm dựng cho trình biên dịch cung cấp 

    // cout << "n = " << Point::n << endl;
    // Point::PrintCount();
    // Point p1;
    // Point p2(2,3);
    //Point p3(p2);

    // p1.Show();
    // p2.Show();
    // p3.Show();

    // Point *p = new Point(2,3); // p là biến con trỏ, cấp phát động 
    // p->Show();
    // delete p;
    
    // Point p1(2, 3); 
    // Display(p1);
    // p1.Show();
    // Point p2(3, 4); 

    // p1.Set_xVal(p2.Get_xVal());

    // p1.Show();


    // TG t1(1, 2, 3, 4, 5, 6);
    // t1.Show();
    

    // // Đa năng hóa toán tử
    // Point p1(1, 2);
    // Point p2(3, 4);
    // Point p3 = p1 + p2; 
    // Point p4 = operator+(p1, p2);
    // p3.Show();
    // p4.Show();


    // Point p5 = p1 - p2;
    // Point p6 = p1.operator-(p2);
    // Point p7 = p2.operator-(p1);

    // p5.Show();
    // p6.Show();
    // p7.Show();


    // // Đa năng hóa toán tử nhập xuất 

    // Point p1(1,2);
    // cin >> p1;
    // cout << "p = " << p1 << endl;
    // operator<<(cout, p1);

    // Vector v1(4, 2); 
    // Vector v2;
    // v1.Show();
    // cout << "v1 = " << v1;
    // cout << "v2 = " << v2;

    // Matrix m1(5, 4, 2);
    // Matrix m2;
    // cout << m1;
    // m2.Show();


    //// 16/10/20 

    // // Ép kiểu int thành đối tượng Point để cộng 
    // Point p1(1, 1);
    // Point p2 = p1 + 1;
    // cout << p2;


    // Đa anwng hóa ép kiểu 
    Number n = 3.4;
    int x = int(n);
    double y = double(n);
    cout << "x = " << x << ", y = " << y << endl;
    
    return 0;
}
