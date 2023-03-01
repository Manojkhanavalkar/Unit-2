#include<iostream>
using namespace std;
class student
{
   private:
        int roll_no;
        char Name[10];
        float marks;
    public:
    void get_data()
    {
        cout<<"\nEnter the roll no: ";
        cin>>roll_no;
        cout<<"\nEnter the name: ";
        cin>>Name;
        cout<<"\nEnter marks:";
        cin>>marks;
    }
    void display()
    {
        cout<<"\nRoll no :"<<roll_no;
        cout<<"\nName:    "<<Name;
        cout<<"\nMarks:   "<<marks;
    }
};
int main()
{
    student s1;
    s1.get_data();
    s1.display();
}