#include "Point3D.h"
Point3D::Point3D(int xVal, int yVal, int zVal) : Point(xVal, yVal)
{
    this->zVal = zVal;
}

Point3D::~Point3D()
{

}

void Point3D::Show3D()
{
    cout << this->xVal << ", "  << this->yVal << ", " << this->zVal << endl;
}

void Point3D::Show()
{
    cout << this->xVal << ", " << this->yVal << ", " << this->zVal << endl;
}