#include<iostream>
#include<string.h>
using namespace std;
class college
{
    int college_id;
    char college_name[20];
    int no_of_student;
    public:
        college(int c_id,char cnm[],int no)
        {
           college_id=c_id;
           strcpy(college_name,cnm);
           no_of_student=no;
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
    college c1(322,"dyp",1760);
    c1.dispay_info();
}