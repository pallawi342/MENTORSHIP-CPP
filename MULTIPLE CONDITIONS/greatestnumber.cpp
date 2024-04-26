#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"value of a: ";
    cin>>a;
    cout<<"value of b: ";
    cin>>b;
    cout<<"value of c: ";
    cin>>c;
    if((a>b) && (a>c))
    {
        cout<<"a is greater";
    }
    else if((b>a) && (b>c))
    {
        cout<<"b is greater";
    }
    else((c>a) && (c>b));
    {
        cout<<"c is greater";
    }
    return 0;
}