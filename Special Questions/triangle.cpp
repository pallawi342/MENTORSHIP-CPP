#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter";
    cin>>a;
    cout<<"enter";
    cin>>b;
    cout<<"enter";
    cin>>c;
    if(a==b&&b==c)
    {
        cout<<"equilateral";
    }
    else if (a==b||b==c||c==a)
    {
        cout<<"isoseles";

    }
    else if(a!=b&&b!=c)
    {
        cout<<"scalane";
    }
    return 0;
}