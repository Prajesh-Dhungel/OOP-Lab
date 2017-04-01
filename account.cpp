#include<iostream>

using namespace std;

class ACCOUNT
{
public:
  char name[20];
  int AcNo;
  char type[20];
  float balance;

  void deposit();
  void withdraw();
  void enquiry();

};

void ACCOUNT::deposit()
{
  float dep;
  cout<<"Enter the amount to be deposited:\n";
  cin>>dep;
  balance=balance+dep;
  cout<<"Rupees\t"<<dep<<"\tHas been deposited to your account successively\n";
}

void ACCOUNT::withdraw()
{
  float draw;

  cout<<"Enter the amout to withdraw:\n";
  cin>>draw;

  if (balance<draw)
  {
    cout<<"Insufficient balance \n";
    return;
  }

  balance=balance-draw;

}

void ACCOUNT::enquiry()
{
  cout<<"Your account balance is"<<balance<<"Rupees\n";


}

int main()
{
  ACCOUNT a[20];
  int ch;
  for(int i=0;i<20;i++)
  {
    cout<<"Enter the name:\n";
    cin>>a[i].name;
    cout<<"Enter the A/c no.\n";
    cin>>a[i].AcNo;
    cout<<"Enter the A/c type:\n";
    cin>>a[i].type;

    while(1)
    {
      std::cout << "Select an option:" << '\n';
      std::cout << "1:Deposit 2:Withdraw 3:Enquiry 4:Exit" << '\n';
      cin>>ch;
      if(ch==4)
      {break;}
      switch(ch)
      {
        case 1: a[i].deposit();
                break;
        case 2: a[i].withdraw();
                break;

        case 3: a[i].enquiry();
                break;


      }
    }

  }
  return 0;
}
