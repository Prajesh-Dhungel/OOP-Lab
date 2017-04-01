#include<iostream>

using namespace std;

class books
{
    char auth[20];
    char title[20];
    int price;
    int stk;

  public:
    books(char au,char t,int p,int s)
    {
      char *auth=new char(au);
      char *title=new char(t);
      price=p;
      stk=s;
    }
    books(){}

    void display()
    {
      cout<<"Details of book:\n";
      cout<<"Author: "<<auth<<endl;
      cout<<"Title: "<<title<<endl;
      cout<<"Price: "<<price<<endl;
      cout<<"Stock: "<<stk<<endl;
    }
    friend void chk_book(books *,int );

};


void chk_book(books *c1,int n)
{
  char a[20];char t[20];
  int flag=0;
  int cpy;
  cout<<"Enter the author\n";
  cin>>a;
  cout<<"Enter the title\n";
  cin>>t;
  int i;
  for(i=0;i<n;i++)
  {
    if (strcmp(a,c1[i].auth)==0 && strcmp(t,c1[i].title)==0)
    {
        flag=1;
        break;
    }

  }
  if(flag==0)
  {
    cout<<"Sorry,this book is not available.\n";
  }
  else
  {
    c1[i].display();
    cout<<"Enter the no. of copies required\n";
    cin>>cpy;
    if(cpy<c1[i].stk)
    {
      cout<<"Requested copies not available\n";
    }
    else
    {
      cout<<"Total Price: "<<cpy*c1[i].price<<endl;
    }
  }

}

int main()
{

  cout<<"Enter the no. of books\n";
  int no;
  cin>>no;
  books c[no];
  int i=0;
  char author[20];char ttl[20];int cost,stock;
  while(i<no)
  {
    cout<<"Enter the author\n";
    cin>>author;
    cout<<"Enter the title\n";
    cin>>ttl;
    cout<<"Enter the price\n";
    cin>>cost;
    cout<<"Enter the stock quantity\n";
    cin>>stock;
    

  }
  int ch;
  while(1)
  {
    cout<<"Enter your choice:\n";
    cout<<"1.Check a book 2.Exit\n";
    cin>>ch;
    switch (ch) {
      case 1:chk_book(c,no);
              break;
      case 2:return(0);
    }
  }
  return 0;
}
