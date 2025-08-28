#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "enter the id:" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "the id of this employee is : " << id << " and this is employee number" << count << endl;
    }
    static void getCount(void)//this is the static function of this class
    {
//cout<<id; it will throw an error as static function can only access static variable not any other variable
        cout << "the value of count is  : " << count << endl; // this is our static function
    }
};
int Employee::count; // default value is 0
int main()
{
    Employee harry, nayan, rahul;
    // count is the static data member of class employee
    // harry.id=1;
    // harry.count=1;//cannot do this as id and count are private
    harry.setData();
    harry.getData();
    Employee::getCount();

    nayan.setData();
    nayan.getData();
    Employee::getCount();

    rahul.setData();
    rahul.getData();
    Employee::getCount();
    return 0;
}