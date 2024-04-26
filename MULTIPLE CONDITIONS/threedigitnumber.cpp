#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the number: ";
    cin>>a;
    if((a<1000) && (a>99))
    {
        cout<<"it is a three digit number";
    }
    else
    {
        cout<<"it is not a three digit number";
    }
    return 0;
}