#include <iostream>
using namespace std;
int main()
{
    // arrays in c++
    // these are the two ways of declaring an array
    /*1.*/ int marks[4] = {23, 22, 21, 49};
    /*2.*/ int mathMarks[4];
    mathMarks[0] = 87;
    mathMarks[1] = 77;
    mathMarks[2] = 67;
    mathMarks[3] = 97;
    cout << "these are math marks" << endl;
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;
    cout << "these are marks" << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    // you can change value of an array
    marks[2] = 45;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    // pointers and array
    int *p = marks;
    cout << "the value of marks[0] is" <<*p<< endl;
    cout << "the value of marks[1] is"<<*(p+1) << endl;
    cout << "the value of marks[2] is"<<*(p+2) << endl;
    cout << "the value of marks[3] is" <<*(p+3)<< endl;
    return 0;
}