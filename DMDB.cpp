// Create two classes DB & DM which store the value of distances.
// DM stores distances in metres & centimeters and DB in feet & inches.
//  Write a program that can read values for the class objects and
//  add one object of DM with another object of DB.
//  Use friend function to carry out the addition.
//  The object that stores the result should be a DB object.

#include<iostream>

using namespace std;
class DM;
class DB{
  float feet;
  float inch;

public:
  DB(){
    feet=0.0;
    inch=0.0;
  }

  void getdata(){
    cout<<"Enter the distance in feet and inches\n";
    cin>>feet>>inch;

  }
  void putdata(){
    cout<<"The distance is "<<feet<<" feet and "<<inch<<" inches\n";
  }
  friend DB add(DB,DM);

};

class DM{
  float m,cm;
public:
  DM(){
    m=0.0;
    cm=0.0;
  }

  void getdata(){
    cout<<"Enter the data in m and cm\n";
    cin>>m>>cm;
    }
    void putdata(){
      cout<<"The distance is "<<m<<" m and "<<cm<<" cm\n";
    }
    friend DB add(DB,DM);
};

DB add(DB d1,DM d2)
{
  DB d3;

  d3.inch=(d2.cm)*.393+d1.inch;
  d3.feet=(d2.m)*3.280+d1.feet+int(d3.inch)/12;
  d3.inch=int(d3.inch)%12;

  return d3;
}

int main()
{
  DB D1,D2;
  DM D3;
  D1.getdata();
  D3.getdata();

  D1.putdata();
  D3.putdata();

  D2=add(D1,D3);
  cout<<"SUM:\n";
  D2.putdata();
  return 0;


}
