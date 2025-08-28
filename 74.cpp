#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main()
{
    //Function objects(functor): it is a function wrapped in a class
    //so that it is available ass an object.
    int arr[]={7,5,44,8,12,77,63};
    sort(arr,arr+5);
    //sort(arr,arr+7,greater<int>());
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}