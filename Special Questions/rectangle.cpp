#include<iostream>
using namespace std;
int main()
{
    int area, perimeter, l=6, b=5;
    area=(l*b);
    perimeter=2*(l+b);
    if(area>perimeter)
    {
        cout<<"area is greater";
    }
    else
    {
        cout<<"area is not greater";
    }
    return 0;
}