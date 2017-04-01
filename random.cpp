#include<iostream>
#include<cstring>
using namespace std;

int main()
{
  cout<<"Enter the size";
  int size;
  cin>>size;
  string a[size];
  cout<<"Enter the elements:\n";
  for (int i=0;i<size;i++)
  {
     cin>>a[i];
  }
  for (int i=0;i<size;i++)
  {
     cout<<a[i];
  }
  return 0;
}
