#include<iostream>
using namespace std;
int main()
{
    int n, i;
    cout<<"enter the number: ";
    cin>>n;
    for(i=1;i<=2*n-1;i=i+2)
    {
        cout<<i<<" ";
    }
    return 0;
}