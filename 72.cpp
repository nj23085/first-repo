#include<iostream>
#include<list>
using namespace std;
void display(list<int> &lst){
    list<int> :: iterator it;
    for ( it = lst.begin(); it!=lst.end() ; it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    /*list is nothing but a type of container used
    to store data.
    It is bidirectional.
    It is better than array.
    List is used when you have to insert/delete
    elements from the middle of the array.
    */
   list<int> list1;//creates list of zero length.
   list1.push_back(5);
   list1.push_back(7);
   list1.push_back(8);
   list1.push_back(2);
   list1.push_back(9);
   //list<int> ::iterator iter;
   //iter = list1.begin();
   //cout<<*iter;
   display(list1);
   //list1.pop_front();
   //sorting the list
   list1.sort();
   display(list1);
   //reversing the list
   list1.reverse();
   display(list1);
   
   
   list<int> list2(3);//creates empty list of size 7
   list<int>::iterator ite;
   ite=list2.begin();
   *ite=45;
   ite++;
   *ite=6;
   ite++;
   *ite=5;
   ite++;
   display(list2);
   //list1.merge(list2);
   //cout<<"after merging: ";
   //display(list1);
   list1.swap(list2);
   cout<<"after swapping"<<endl;
   display(list1);
   display(list2);
    return 0;
}