#include <iostream>
using namespace std;
// CONSTRUCTOR IN C++

class complex
{
    int a, b;

public:
    complex(void); // constructor declaration

    void printData()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};
complex::complex(void) // this is a default constructor as it takes no parameter
{
    a = 10;
    b = 0;
};
int main()
{
    complex c;
    c.printData();
    return 0;
}



/*CHARACTERISTICS OF CONSTRUCTORS
1. it should  be declared inside the public section of the class
2. they are automatically invoked whenever the object is created
3. they cannot return values and do not have return types
4. it can have default arguments
5. we cannot refer to their address 
*/ 