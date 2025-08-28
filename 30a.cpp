#include<iostream>
#include<cmath>
using namespace std;
class point{
int x,y;
public:
point(int a, int b){
    x=a;
    y=b;
}
friend double calculateDistance(point p, point q);

void displayPoint(){
    cout<<"the point is ("<<x<<","<<y<<")"<<endl;
}
};
double calculateDistance(point p, point q){
    return sqrt(pow(q.x - p.x ,2) + pow(q.y - p.y , 2));
}

int main()
{
    int x1,y1,x2,y2;
    cout<<"enter the coordinates of point p (x1,y1) ";
    cin>>x1>>y1;
    cout<<"enter the coordinates of points q(x2,y2) ";
    cin>>x2>>y2;
    point p(x1,y1);
    point q(x2,y2);
    p.displayPoint();
    q.displayPoint(); 
    cout<<"distance between P and Q is "<<calculateDistance(p,q)<<endl;
    return 0;
}