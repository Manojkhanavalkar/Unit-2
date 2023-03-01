#include<iostream>
using namespace std;
class add
{
    int a,b;
    public:
        add(int x, int y)
        {
            a=x;
            b=y;
        }
        void display()
        {
            cout<<"\nAddition of two numbers="<<(a+b);
        }
};
int main()
{
    // add a1(10,5); //implicit call
    add a1=add(3,6); //explict call 
    a1.display();
    return 0;
}
