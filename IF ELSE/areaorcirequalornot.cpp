#include<iostream>
using namespace std;
int main()
{
  int area, circumfrence, r;
  cout<<"enter the value of r : ";
  cin>>r;
  area=3.14*r*r;
  circumfrence=2*3.14*r;
  if(area>circumfrence)
  {
    cout<<"area is greater than circumfrence";
  }
  else
  {
    cout<<"area is not greater than circumfrence";
  }
  return 0;
}