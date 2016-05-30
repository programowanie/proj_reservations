#include "Reservations.h"
#include "Reservations.cpp"
#include "Statements.h"
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

	int quantity=random_value(70, 1);
	int parameters[3];
	int plan_cars=random_value(2, 1)*100;
	int extra_cars=random_value(10, 1);
	int temp=0;
	int temp1=plan_cars;
	bool ending=false;

	ifstream train;
	train.open("train3.txt");
    ofstream diagram;
    diagram.open("diagram.txt");

	string data[100];

	while(! train.eof())
	{
		getline(train, data[temp]);
		temp++;
	}

	int stations = atoi(data[0].c_str());

	diagram<<endl<<data[1]<<endl<<data[2]<<endl<<data[4]<<endl<<data[3+stations]<<endl<<endl;
	cout<<endl<<data[1]<<endl<<data[2]<<endl<<data[4]<<endl<<data[3+stations]<<endl<<endl;

	info(plan_cars, extra_cars, quantity);
	diagram<<endl<<"Planowa ilosc wagonow: "<<plan_cars/100<<endl;
	diagram<<"Przygotowana rezerwa: "<<extra_cars<<endl;
	diagram<<"Planowana ilosc pasazerow: "<<quantity<<endl<<endl;

	vector < vector < int > > Occupancy;
	vector < int > occupancy(4);

	for (int i=0; i<plan_cars; i++)
    {
    	Occupancy.push_back(occupancy);
     }

     Passenger account;
     Railroad_company _account;

     for(int i=0; i<quantity; i++)
     {
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
                     diagram<<"Wagon dodany z rezerwy taborowej: nr"<<plan_cars/100<<endl;
    		}
    		else
    		{
    			no_extra_car(temp1-plan_cars/100*60);
    			diagram<<"Przepraszamy, brak dostępnych miejsc"<<endl;
				diagram<<"Liczba pasazerow bez miesjca do siedzenia: "<<temp1-plan_cars/100*60<<endl;
    			quantity=quantity-i;
    			break;
    		} 
     	}

     	parameters[0]=_account._start_station(stations);
     	parameters[1]=_account._end_station(stations, parameters[0]);
     	parameters[2]=account.position();

     	if((i%10>6)||(i%10==0)) quantity++;
     	else if((parameters[2]==(6))||(parameters[2]==5))
     	{
     		for(int j=1; j<plan_cars; j++)
     		{
     		if(ending==false)
     		{
     		if(Occupancy[j][0]==1);
     		else if((j%10==6)||(j%10==5))
     		{
     				Occupancy[j][0]=1;
     				Occupancy[j][1]=parameters[0];
     				Occupancy[j][2]=parameters[1];
     				Occupancy[j][3]=parameters[2];
     				ending=true;
     				//cout<<"a";
     			}
     		}
     	}
     	}
     	else if((parameters[2]==(4))||(parameters[2]==3))
     	{
     		for(int j=1; j<plan_cars; j++)
     		{
     		if(ending==false)
     		{
     		if(Occupancy[j][0]==(1)) ;
     		else if((j%10==4)||(j%10==3))
     		{
     				Occupancy[j][0]=1;
     				Occupancy[j][1]=parameters[0];
     				Occupancy[j][2]=parameters[1];
     				Occupancy[j][3]=parameters[2];
     				ending=true;
     				//cout<<"b";
     			}
     		}
     	}
     	}
     	else if ((parameters[2]==(2))||(parameters[2]==1))
     	{
     		for(int j=1; j<plan_cars; j++)
     		{
     		if(ending==false)
     		{
     		if(Occupancy[j][0]==1);
     		else if((j%10==2)||(j%10==1))
     		{
     				Occupancy[j][0]=1;
     				Occupancy[j][1]=parameters[0];
     				Occupancy[j][2]=parameters[1];
     				Occupancy[j][3]=parameters[2];
     				ending=true;
     				//cout<<"c";
     				}
     			}
     		}
     	}
     	
     	if((i%10)>7) ;
     	else if(ending==false)
     		{
     		for(int j=1; j<plan_cars; j++)
     		{
     		if(ending==false)
     		{
     		if(Occupancy[j][0]==1);
     		else if(j%10>6);
     		else if(j%10==0);
     		else
     		{
     				Occupancy[j][0]=1;
     				Occupancy[j][1]=parameters[0];
     				Occupancy[j][2]=parameters[1];
     				Occupancy[j][3]=parameters[2];
     				ending=true;
     				//cout<<"d";
     				}
     			}
     		}
     	}
     	ending=false;
     	cout<<i<<endl;
     }
          	for(int t=0; t<plan_cars; t++)
          	{
     		if(t%100==0) diagram<<endl<<endl<<"wagon nr: "<<t/100+1<<endl;
     		diagram<<t%100<<" "<<data[Occupancy[t][1]+3]<<" -> "<<data[Occupancy[t][2]+3]<<"\n";
     		if(t%100==0) cout<<endl<<endl<<"wagon nr: "<<t/100+1<<endl;
     		cout<<t%100<<" "<<Occupancy[t][1]<<" "<<Occupancy[t][2]<<" "<<Occupancy[t][3]<<"\n";
     	    }
 }


 