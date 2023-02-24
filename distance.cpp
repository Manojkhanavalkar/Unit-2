#include<iostream>
using namespace std;
class distance
{
    int feet , inches;
    public:
        void input();
        void output();
        void sum();
}d1,d2,d3;
void distance ::input()
{
    cout<<"\nEnter the value in feet: ";
    cin>>feet;
    cout<<"\nEnter the value in inches: ";
    cin>>inches;
}
void distance ::output()
{
    cout<<"feet="<<feet;
    cout<<"inches="<<inches;
}
void distance :: sum ()
{
    d3.feet=d1.feet+d2.feet;
    d3.inches=d1.inches+d2.inches;
}
int main()
{
    //int f,i;
    d1.input();
    d2.input();
    d3.sum();
    cout<<"The answer after sum of two object is=";
    d3.output();
}