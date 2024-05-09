#include<iostream>
using namespace std;
int main()
{
    int r, c, size;
    cout<<"enter the size: ";
    cin>>size;
    int x=size;
    for(r=1;r<=size;r++)
    {
        for(c=1;c<=x;c++)
        {
            cout<<c;
        }
        x--;
        cout<<endl;
    }
    return 0;
}