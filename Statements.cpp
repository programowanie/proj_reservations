#include "Statements.h"

#include <iostream>

using namespace std;

void extra_car(int plan_cars)
{
	cout<<"Wagon dodany z rezerwy taborowej: nr"<<plan_cars/100<<endl;
}

void no_extra_car(int no)
{
	cout<<"Przepraszamy, brak dostępnych miejsc!"<<endl;
	cout<<"Liczba pasazerow bez miesjca do siedzenia: "<<no<<endl;
}

void info(int plan_cars, int extra_cars, int quantity)
{
	cout<<endl<<"Planowa ilosc wagonow: "<<plan_cars/100<<endl;
	cout<<"Przygotowana rezerwa: "<<extra_cars<<endl;
	cout<<"Planowana ilosc pasazerow: "<<quantity<<endl<<endl;
}


