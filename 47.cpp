#include <iostream>
using namespace std;
/*
syntax for initialization list in constructor:-
constructor(argument-list) : initialization-section
{
assignment+other code;
}
class test{
int a;
int b;
public:
test(int i,int j) : a(i),b(j){constructor body}
};
*/

class test
{
    int a;
    int b;

public:
    test(int i, int j) : a(i), b(j)
    {
        cout << "constructor executed" << endl;
        cout << "value of a is " << a << endl;
        cout << "valiue of b is " << b << endl;
    }
};
int main()
{
    test(10, 20);
    return 0;
}