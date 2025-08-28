#include <iostream>
using namespace std;
int main()
{
    cout << "welcome to the mindgame hosted by nayan" << endl;
    int n, sum, result;
    cout << "enter the number you thhink inn your mind :" << endl;
    cin >> n;
    cout << "enter the number you want to add in the doubled number : " << endl;
    cin >> sum;
    int doubleNumber = n * 2;
    int totalSum = doubleNumber + sum;
    int dividedResult = totalSum / 2;
    result = dividedResult - n;
    cout << "the final answer is: " << result << endl;
    if (result == sum / 2)
        cout << "you have lost the game!..." << endl;
    else
        cout << "you have won the game!...." << endl;

    return 0;
}