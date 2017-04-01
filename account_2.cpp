#include<iostream>
#include<cstring>
using namespace std;
class BankAccount
{
    char name[20];
    char acc_no[20];
    char acc_type[20];
    float amount;
public:
    BankAccount(char a[20],char b[20],char c[20] ,float d)
    {
        strcpy(name,a);
        strcpy(acc_no,b);
        strcpy(acc_type,c);
        amount=d;
    }
    void deposit(float deposit)
    {
        amount=amount+deposit;
    }
    void withdrawl(void)
    {
        float money;
        cout<<"enter the amount to be withdrawn:\n";
        cin>>money;
        if(money>amount)
        {
            cout<<"money cannot be withdrawn\n";
        }
        else
        {
            cout<<"current balance is:"<<amount;
            amount=amount-money;
            cout<<"\namount after withdrawl is:"<<amount;
        }
    }
    void display(void)
    {
        cout<<"\nname of the depositer is:"<<name;
        cout<<"\nbalance is:\n"<<amount;
    }
};
int main()
{
    char a[20],b[20],c[20];
    float d;
    cout<<"\nenter the name,acc no,acc type,amt:\n";
    cin>>a>>b>>c>>d;
    BankAccount b1(a,b,c,d);
    float amt;
    cout<<"\nenter the amount to be deposited:";
    cin>>amt;
    b1.deposit(amt);
    cout<<"\ncheck my balance\n";
    b1.display();
    cout<<"\nto with draw the money\n";
    b1.withdrawl();
    return 0;
}