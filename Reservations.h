#pragma once

#include <vector>
#include <string>

using namespace std;

int random_value(int a, int b);

class Passenger
{
public:
	int position();
};

class Tickets
{
private:
	int _seat, _car;


public:
	int seat_number() {return _seat;}
	int car_number() {return _car;}
};

class Railroad_company
{
public:
	int _start_station(int a);
	int _end_station(int a, int b);
	int _number_of_car, _number_of_seat;

};
