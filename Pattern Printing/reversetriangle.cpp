#include<iostream>
using namespace std;
int main()
{
    int r, c;
    for(r=1;r<=3;r++)
    {
        for(c=4;c>=r;c--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}