#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    /*Map is used to store key value pairs.
    Map is an associative array.
    */
   map<string, int> marksMap;
   marksMap["nayan"]=89;
   marksMap["sapan"]=75;
   marksMap["shukla"]=45;
   marksMap.insert({{"harry",70},{"ronit",50}});
   map<string, int>::iterator itr;
   for (itr = marksMap.begin(); itr!=marksMap.end() ; itr++)
   {
    cout<<(*itr).first<<" "<<(*itr).second<<"\n";
   }
   
    return 0;
}