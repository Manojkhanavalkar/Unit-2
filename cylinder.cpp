#include<iostream>
using namespace std;
class cylinder
{
    int radius , height;
    public:
        void setradius(float);
        void setheight(float);
        float volume(void);
        float area(void);

};
void cylinder ::setradius(float r)
{
    radius=r;
}
void cylinder ::setheight(float h)
{
    height=h;
}
float cylinder ::area()
{
    float A,pi=3.14;
    A=2*pi*radius*height+2*pi*radius*radius;
    return (A);
}
float cylinder ::volume()
{
    float vol,pi=3.14;
    vol=pi*radius*radius*height;
    return (vol);
}
int main()
{
    cylinder d;
    float r,h,vol,area;
    cout<<"\nEntr the radius:";
    cin>>r;
    cout<<"\nEnter the height :";
    cin>>h;
    d.setradius(r);
    d.setheight(h);
    area=d.area();
    vol=d.volume();
    cout<<"\nThe area of cylinder="<<area;
    cout<<"\nThe volume of cylinder="<<vol;

}
