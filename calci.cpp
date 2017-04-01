#include<iostream>
using namespace std;
int main()
{
  float a,b;
  int ch;
  while(1)
  {
    cout<<"Enter two nos.\n";
    cin>>a>>b;
    cout<<"Enter your choice\n"<<"1:Addition 2:Subtraction 3:Multiplication"
        <<"4: Division 5:Exit\n";
    cin>>ch
    switch(ch)
    {
      case 1:cout<<"Sum = "<<a+b<<"\n";
              break;
      case 2:cout<<"Difference = "<<a-b<<"\n";
              break;
      case 3:cout<<"Product = "<<a*b<<"\n";
              break;
      case 4:if(b==0)
              {
                cout<<"Division by zero error\n";
                break;

              }
              cout<<"Ratio = "<<a/b<<"\n";
              break;
      case 5: exit(0);
      default:cout<<"Invalid choice\n";
    }
  }
  return 0;
}
