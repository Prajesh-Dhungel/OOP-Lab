//Create a RainGauge class that store rainfallincm information and city name.
//Include a zero parameter constructor. Write methods for the following fnRead
//Measurement that generates a random decimal value in the range 0-20cms and
//reads the name of the city
//fnDispReading that display city name and rainfall received
//Write a friend function that takes an array of RainGauge objects and the
//number of cities as parameters and calculates the average rainfall received
//Create an array of RainGauge objects in main and display the results

#include<iostream>
#include<ctime>

using namespace std;

class RainGauge{
  float rain;
  char *city;

public:
  RainGauge(){
    rain=0.0;
    city=new char[1];
  }
  void fnReadMeasurement(){
    cout<<"Enter the city\n";
    cin>>city;
    rain=rand()%20;
  }
  void fnDispReading(){
    cout<<"City: "<<city<<" Rainfall received: "<<rain<<endl;

  }
  void friend avgRain(RainGauge *, int);
};
void avgRain(RainGauge *r,int n)
{
    int i;
    float avg;
    float sum=0;
    for (i=0;i<n;i++)
    {
      sum=sum+r[i].rain;
    }
    avg=sum/n;
    cout<<"Average rainfall received: "<<avg<<endl;
}

int main()
{
  cout<<"Enter the no. of cities\n";
  int no;
  cin>>no;
  RainGauge R[no];
  srand(time(NULL));
  for(int i=0;i<no;i++)
  {
    R[i].fnReadMeasurement();
  }
  for(int i=0;i<no;i++)
  {
    R[i].fnDispReading();
  }

  avgRain(R,no);
  return 0;



}
