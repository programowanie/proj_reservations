#include "Reservations.h"

#include <iostream> 
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char *argv[])
{
	srand(time(NULL));
	int quantity=rand()%1000+1;
	int parameters[5];

	vector<vector<int> > Occupancy;
	vector<int> occupancy(15);

    fill(occupancy.begin(), occupancy.end(), 0);
 
    for (int i=0; i<1; i++)
    {
    	Occupancy.push_back(occupancy);
     }

     Passenger account[quantity];

     for(int i=0; i<quantity; i++)
     	parameters[0]=account.coach;

 }