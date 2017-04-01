#include<iostream>
#include<cmath>

using namespace std;

class CIRCLE
{
  int x,y,h,k;
  float r;
public:
  void getdata();
  void chk_point();

};

void CIRCLE::getdata()
{
  cout<<"Enter the coordinates of centre of a circle:\n";
  cin>>h>>k;
  cout<<"Enter the coordinates of point to be checked:\n";
  cin>>x>>y;
  cout<<"Enter the radius of circle:\n";
  cin>>r;
}

void CIRCLE::chk_point()
{
  float d;
  d=sqrt((h-x)*(h-x)+(k-y)*(k-y));
  if (d==r)
  {
    cout<<"Point lies on the circle\n";
  }
  else if(d<r)
  {
    cout<<"Point lies inside the circle\n";
  }
  else
  {
    cout<<"Point lies outside of the circle\n";
  }
}

int main()
{
  CIRCLE c;
  c.getdata();
  c.chk_point();
  return 0;
}
