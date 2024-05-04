/*Print the number triangle pattern
1 
1 2 
1 2 3 
1 2 3 4*/
#include<iostream>
using namespace std;
int main()
{
    int r,c;
    for(r=1;r<=4;r++)
    {
        for(c=1;c<=r;c++)
        {
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}