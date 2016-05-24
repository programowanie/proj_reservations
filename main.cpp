#include "Reservations.h"
#include "Reservations.cpp"


#include <iostream> 

using namespace std;

int main(int argc, char *argv[])
{
	int quantity=random_value(1, 1000);
	int parameters[3];
	int plan_cars=random_value(1, 5)*100;
	int extra_cars=random_value(1, 6);

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
     	parameters[0]=account.position();
     	parameters[1]=_account._start_station();
     	parameters[2]=_account._end_station();

     	while(parameters[3]<=parameters[2])
     	{
     		parameters[3]=_account._end_station();
     	} 

     	for(int j=1; j<plan_cars; j++)
     	{
     		if(j%10>6) j++;
     		else
     		{
     			if(Occupancy[j][0]!=0) j++;
     			else {
     				Occupancy[j][1]=parameters[1];
     				Occupancy[j][2]=parameters[2];
     			}

     		}
     		

     		}
     		cout<<i<<" "<<Occupancy[i][1]<<" "<<Occupancy[i][2]<<endl;
     	}

     }


 