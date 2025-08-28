#include<iostream>
#include<fstream>

/*the useful classes for working with files are:
1.ifstream: used for reading from files.
2.ofstream: used for writing to files.
there are two ways to open a file:
1.using the constructor of the class
2.using the open() member function of the class.
*/
using namespace std;
int main()
{
    string st="nayan jain";
    //opening files using constructor
    ofstream out("60.txt");//write operation
    out<<st;
    //string st;
    /*read operation
    ifstream in("60.txt");
    in>>st;
    getline(in,st);
    cout<<st;*/
    return 0;
}