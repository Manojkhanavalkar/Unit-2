/*Declare class book having data members bookid , name and price 
accept and display data for one object*/
#include<iostream>
using namespace std;
class book
{
    int book_id;
    char book_name[20];
    float price;
    public:
    void get_book_data()
    {
        cout<<"\nEnter the book id:";
        cin>>book_id;
        cout<<"\nEnter the book name:";
        cin>>book_name;
        cout<<"\nEnter the price of book: ";
        cin>>price;
    }
    void display()
    {
        cout<<"\nbook id:"<<book_id;
        cout<<"\nbook name:"<<book_name;
        cout<<"\nbook price:"<<price;
    }
    
};
int main()
{
    book b1;
    b1.get_book_data();
    b1.display();
    return 0;
}