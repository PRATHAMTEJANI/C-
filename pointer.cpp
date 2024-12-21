#include<iostream>
using namespace std;
int main()
{
    int a = 34;
    int *ptr ;
    ptr = &a;
    cout<<"the pointer is value =  "<<a<<endl;
    cout<<"the pointer is value = "<<*ptr<<endl;
    cout<<"the pointer is address = "<<&a<<endl;
    cout<<"the pointer is address = "<<ptr<<endl;

}