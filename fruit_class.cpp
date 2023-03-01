/*Write c++ Program that represents fruit with properties frout name,fruit type,fruit color
and accepts data of four fruits and displays the results*/
#include<iostream>
using namespace std;
class fruit
{
    char fruit_name[20];
    char fruit_type[20];
    char fruit_color[20];
    public:
        void get_fruit_info()
        {
           cout<<"\nEnter the fruit name:";
           cin>>fruit_name;
           cout<<"\nEnter the fruit type:";
           cin>> fruit_type;
           cout<<"\nEnter the fruit color:";
           cin>>fruit_color;
        }
        void display()
        {
            cout<<"\n"<<fruit_name<<"\t"<<fruit_type<<"\t"<<fruit_color;        
        }
};
int main()
{
    fruit f[4]; int i;
    for(i=0;i<4;i++)
    {
        f[i].get_fruit_info();
    }
    cout<<"\n************fruit stall***************";
    cout<<"\nNAME\tTYPE\tCOLOR";
    cout<<"\n========================================";
    for(i=0;i<4;i++)
    {
        f[i].display();
    }
}