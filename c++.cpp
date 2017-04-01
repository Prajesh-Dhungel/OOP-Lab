#include<iostream>

using namespace std;

class Student
{
  char name[20];
  int USN;

public:
void getdata();
void putdata();
};
void Student::getdata()
{
  cout<<"Enter the name:\n";
  cin>>name;
  cout<<"Enter the usn:\n";
  cin>>USN;
}

void Student::putdata()
{
  cout<<"Name: "<<name<<"\n";
  cout<<"USN: "<<USN<<"\n";

}

int main()
{
  Student s;
  s.getdata();
  s.putdata();
  return 0;
}
