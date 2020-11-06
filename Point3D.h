#include "Point.h"
class Point3D : public Point
{
    private:
        int zVal;
    public:
        Point3D(int = 2, int = 2, int = 2);
        ~Point3D();
        void Show3D();
        void Show();
};