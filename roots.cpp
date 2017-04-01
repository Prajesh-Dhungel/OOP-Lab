#include<iostream>
#include<cstdlib>


using namespace std;

int main()
{
  int a,b,c,root1,root2;
  cout<<"Enter the coefficients of quadratic eqn.\n";
  cin>>a>>b>>c;
  if(a==0)
  {
    cout<<"Invalid input\n";
    exit(0);
  }
  int d=b*b-4*a*c;
  if(d==0)
  {
    cout<<"Roots are real and equal\n";
    root1=root2=(-b/2*a);
    cout<<"Root 1: "<<root1<<"\n"<<"Root 2: "<<root2<<"\n";
  }
  else if(d>0)
  {
    cout<<"Roots are real\n";
    root1=(-b/2*a)+sqrt(d)/(2*a);
    root2=(-b/2*a)-sqrt(d)/(2*a);
    cout<<"Root 1: "<<root1<<"\n"<<"Root 2: "<<root2<<"\n";
  }
  else
  {
    cout<<"Roots are imaginary\n";
    root1=-b/2*a;
    root2=sqrt(d)/(2*a);
    cout<<"Root 1: "<<root1<<"+i"<<root2<<"\n";
    cout<<"Root 1: "<<root1<<"-i"<<root2<<"\n";

  }
  return 0;
}
