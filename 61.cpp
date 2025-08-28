#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //connecting our file with n stream
    ofstream n("60.txt");
    //creating a name string and filling it with the string entered by the user
    cout<<"enter your name "<<endl;
    string name;
    cin>>name;
    //writing a string to the file
    n<<name;
    n.close();

    ifstream n1("60.txt");
    string content;
    getline(n1, content); 
    n1>>content;
    cout<<"the content of the file is: "<<content<<endl;
    return 0;
}