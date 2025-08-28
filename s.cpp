#include <iostream>
using namespace std;

struct employee
{
    // data of all employees
    int eId;
    string name;
    string post;
    double salary;
};

int main()
{
    int n;
    cout << "enter the no. of employees of whom you wants details : " << endl;
    cin >> n;
    employee employees[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter details of employees" << i + 1 << endl;
        cout << "Name : ";
        cin >> employees[i].name;
        cout << "EId : ";
        cin >> employees[i].eId;
        cout << "Post : ";
        cin >> employees[i].post;
        cout << "Salary : ";
        cin >> employees[i].salary;
    }
    cout << "\n Details of all the employees are : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "employee " << i + 1 << endl;
        cout << "Name : " << employees[i].name << endl;
        cout << "EId : " << employees[i].eId << endl;
        cout << "Post : " << employees[i].post << endl;
        cout << "Salary : " << employees[i].salary << endl;
    }

    return 0;
}