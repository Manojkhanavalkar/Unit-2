#include<iostream>
using namespace std;
class college
{
    int college_id;
    char college_name[20];
    int no_of_student;
    public:
        college()
        {
            cout<<"\nEnter the college id: ";
            cin>>college_id;
            cout<<"\nEnter the college name";
            cin>>college_name;
            cout<<"\nEnter the no of student in college:";
            cin>>no_of_student;
        }
        void dispay_info()
        {
            cout<<"\nCollege id="<<college_id;
            cout<<"\nCollage name="<<college_name;
            cout<<"\nNumber of student="<<no_of_student;

        }

};
int main()
{
    college c1;
    c1.dispay_info();
}