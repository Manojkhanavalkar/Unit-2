#include<iostream>
#include<string.h>
#include<manipulations.h>
using namespace std;
class string_class
{
    char str[20];
public:
    void input();
    void concate();
    void length();
    void reverse();
    void compare();
    void output();
};
 void string_class ::input()
 {
    cout<<"Enter the string :";
    gets(str);
 }
 void string_class ::output()
 {
    cout<<"string is "<<"\n";
    puts(str);
 }
 void string_class ::length()
 {
    cout<<"\nThe length of string: "<<strlen(str)<<endl;
 }
 void string_class ::compare()
 {
    char str2[20];
    cout<<"Enter the second string to be compared: ";
    gets(str2);
    if(strcmp(str,str2)==0)
    {
        cout<<"\nTwo strings are same";
    }
    else
    {
        cout<<"\nTwo strings are not same";
    }
 }
 void string_class ::reverse()
 {
    
    strrev(str);
    cout<<"\nreverse string is :";
    puts(str);
 }
 void string_class ::concate()
 {
    char str2[20];
    cout<<"\nEnter the second string to combine";
    gets(str2);
    strcat(str,str2);
    cout<<"\nstring after the combination : ";
    puts(str);
 }
int main()
{
    string_class str_obje;
    str_obje.input();
    str_obje.output();
    str_obje.length();
    str_obje.compare();
    str_obje.concate();
    str_obje.reverse();
    return 0;
     
}