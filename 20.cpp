#include <iostream>
using namespace std;

// classes in c++
class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1); // declaration
    void getData()
    {
        cout << "the value of a is : " << a << endl;
        cout << "the value of b is : " << b << endl;
        cout << "the value of c is : " << c << endl;
        cout << "the value of d is : " << d << endl;
        cout << "the value of e is : " << e << endl;
    }
};

void employee::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    employee nayan;
    nayan.setData(1, 2, 3);
    nayan.d = 124;
    nayan.e = 23;
    nayan.getData();
    return 0;
}