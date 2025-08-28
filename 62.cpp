#include<iostream>
#include<fstream>
using namespace std;
int main()
{

    //with the help of open function we can 
    //also write in a file using the below method
    ofstream out;
    out.open("60.txt");
    out<<"this is me";
    out.close();

    ifstream in;
    string st,st2;
    in.open("60.txt");
    //in>>st>>st2;
    //cout<<st<<st2;
    
    while (in.eof()==0)
    {
        getline(in,st);
        cout<<st<<endl;
    }
    
    in.close();
    return 0;
}