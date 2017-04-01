#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

int getN();
void getArray(int,int*);
float getmean(int,int*);
float getVariance(int,int*);
float getStdDeviation(int,int*);
void display(int,int*);

int main()
{
  int n=getN();
  int a[n];
  getArray(n,a);
  display(n,a);
  return 0;
}

int getN()
{
  int n;
  cout<<"Enter N\n";
  cin>>n;
  return n;
}
void getArray(int n,int* a)
{
  cout<<"Enter the no.\n";
  for(i=0;i<n;i++)
  cin>>a[i];
  return;
}

float getMean(int n,int* a)
{
  int sum=0;
  for(int i=0;i<n;i++)
  sum+=a[i];
  return sum/n;
}
float getVariance(int n,int *a)
{
  int sum=0;
  int mean=getMean(n,0);
  for(int i=0;i<n;i++)
  sum+=pow((a[i]-mean),2);
  return(sum/n);
}

float getStdDeviation(int n,int *a)
{
  return sqrt(getVariance(n,a));
}

void display(int n,int* a)
{
  cout<<"\n Mean:\t"<<getMean(n,a)<<"\n";
  cout<<"Variance:\t"<<getVariance(n,a)<<"\n";
  cout<<"Std Deviation:\t"<<getStdDeviation(n,a)<<"\n";
}
