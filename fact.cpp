#include <iostream>
using namespace std;
int main()
{
    int n;
    unsigned long long factorial = 1;
    cout << "enter a positive integer"<<endl;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {

        factorial *= i;
    }
    cout << "factorial of" << n << "=" << factorial << endl;
    return 0;
}