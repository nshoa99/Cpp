#include <iostream>
#include "TG.h"
using namespace std;

TG::TG(int xA, int yA, int xB, int yB, int xC, int yC) : A(xA, yA), B(xB, yB), C(xC, yC)
{
}

TG::~TG()
{
    cout << "TG" << endl;
}

void TG::Show()
{
    (this->A).Show();
    (this->B).Show();
    (this->C).Show();
}
