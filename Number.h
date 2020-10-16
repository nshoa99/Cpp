class Number
{
private:
    double data;
public:
    Number(double = 0);
    ~Number();
    operator int();
    operator double();
};

