//default constructor'
#include<iostream>
using namespace std;
class addition
{
    private:
        int a,b;
    public:
        addition() //default constructor
        {
            a=100;
            b=50;
        }
        void display()
        {
            cout<<"\nAddition of two numbers="<<(a+b);
        }
};
int main()
{
    addition a1;
    a1.display();
    return 0;
}