#include<iostream>
using namespace std;
class item
{
    int number;
    float cost;
public:
        void accept(int a, float b);
        void putdata(void)
        {
            cout<<"Number:"<<number<<"\n";
            cout<<"cost:"<<cost<<"\n";
        }
};
void item :: accept(int a,float b)
{
    number=a;
    cost=b;
}
int main()
{
    item x;
    cout<<"\nObject x \n";
    x.accept(100,299.25);
    x.putdata();
    item y;
    cout<<"Object Y\n";
    y.accept(300,44.97);
    y.putdata();
    return 0;
}