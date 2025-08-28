#include<iostream>
#include <cstring>
using namespace std;
class cwn{
    protected:
    string title;
    float rating;
    public:
    cwn(string s, float r){
       title =s;
        rating = r;
    }
   virtual void display(){
        /*cout<<"Title: "<<title<<endl;
        cout<<"Rating: "<<rating<<endl;*/
    }
};
class cwnvideo: public cwn{
    float videolength;
    public:
    cwnvideo(string s, float r, float vl):cwn(s, r){
        videolength = vl;
    }
    void display(){
        cout<<"Title: "<<title<<endl;
        cout<<"Rating: "<<rating<<endl;
        cout<<"Video Length: "<<videolength<<" minutes"<<endl;
    }
};

class cwntext: public cwn{
    int words;
    public:
    cwntext(string s, float r, int wc):cwn(s, r){
        words = wc;
    }
    void display(){
        cout<<"Title: "<<title<<endl;
        cout<<"Rating: "<<rating<<endl;
        cout<<"Word Count: "<<words<<" words"<<endl;
    }
};
int main()
{
    string title;
    float rating,vlen;
    int words;
    title = "C++ Programming";
    vlen=4.2;
    rating=5;
    cwnvideo v(title, rating, vlen);
    v.display();
    title = "C programming";
    words = 1000;
    rating = 4.5;
    cwntext t(title, rating, words);
    t.display();

    cwn *tuts[2];
    tuts[0]=&v;
    tuts[1]=&t;
    tuts[0]->display();
    tuts[1]->display();
    return 0;
}

/*rules for virtual functions
1. they cannot be static.
2. they are accessed by object pointers.
3. virtual functions can be a friend of another class.
4. a virtual function in base class might not be used.
5. if a virtual function defined in a base class there is no necessity to redefining in derived class. */