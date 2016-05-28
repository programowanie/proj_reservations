#include "Reservations.h"
#include "Reservations.cpp"
#include "Statements.cpp"

#include <iostream> 
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>


using namespace std;

int main(int argc, char *argv[])
{
    srand(time(NULL));

	int quantity=random_value(1000, 1);
	int parameters[3];
	int plan_cars=random_value(5, 3)*100;
	int extra_cars=random_value(5, 1);
	int temp=0;

	ifstream train;
	train.open("train.txt");
    ofstream diagram;
    diagram.open("diagram.txt");

	string data[100];

	while(! train.eof())
	{
		getline(train, data[temp]);
		temp++;
	}

	int stations = atoi(data[0].c_str());

	info(plan_cars, extra_cars, quantity);

	vector < vector < int > > Occupancy;
	vector < int > occupancy(3);

	for (int i=0; i<plan_cars; i++)
    {
    	Occupancy.push_back(occupancy);
     }

     Passenger account;
     Railroad_company _account;

     for(int i=0; i<quantity; i++)
     {
     	if((i%10>6)||(i%10==0)) quantity++;
     	if(i+1>plan_cars)
     	{
     		if(extra_cars>0)
     		{
     			extra_cars--;
     			plan_cars=plan_cars+100;
     			Occupancy.end();
     			for (int l=0; l<100; l++)
                    {
    	              Occupancy.push_back(occupancy);
                     }
                     extra_car(plan_cars);
    		}
    		else
    		{
    			no_extra_car();
    			quantity=quantity-i;
    			break;
    		} 
     	}

     	parameters[0]=_account._start_station(stations);
     	parameters[1]=_account._end_station(stations, parameters[0]);
     	parameters[2]=account.position()/2;
     	for(int j=1; j<plan_cars; j++)
     	{
     		if(Occupancy[j][0]==1) ;
     		else if(j%10>6) ;
     		else if(j%10==0) ;
     		else
     		{
     				Occupancy[j][0]=1;
     				Occupancy[j][1]=parameters[0];
     				Occupancy[j][2]=parameters[1];
     				break;
     			}
     	}
     	//cout<<i<<" "<<Occupancy[i][1]<<" "<<Occupancy[i][2]<<"\n";
     }
     	for(int t=0; t<plan_cars; t++)
     	{
     		cout<<t<<" "<<Occupancy[t][1]<<" "<<Occupancy[t][2]<<"\n";
     		diagram<<t<<" "<<data[Occupancy[t][1]+3]<<" "<<data[Occupancy[t][2]+3]<<"\n";
     	}

 }


 