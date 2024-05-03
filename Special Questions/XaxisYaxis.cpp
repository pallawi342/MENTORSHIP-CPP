#include<iostream>
using namespace std;
int main()
{
    int x, y;
    cout<<"enter the value of x: ";
    cin>>x;
    cout<<"enter the value of y: ";
    cin>>y;
    if(x==0 && y!=0)
    {
        cout<<"it lies on y axis";
    }
    else if(x!=0 && y==0)
    {
        cout<<"it lies on x axis";
    }
    else if(x==0 && y==0)
    {
        cout<<"it is on the origin";
    }
    else
    {
cout<<"it lies between x and y axis";
    }
    return 0;

}