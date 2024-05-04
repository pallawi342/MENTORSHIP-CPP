/*

Print the alphaber square pattern
A B C D 
A B C D
A B C D
A B C D*/
#include<iostream>
using namespace std;
int main()
{
    int r, c;
    for(r=1;r<=4;r++)
    {
        for(c=1;c<=4;c++)
        {
            cout<<char(c+64);
        }
        cout<<endl;
    }
    return 0;
}