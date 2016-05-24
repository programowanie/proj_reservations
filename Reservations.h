#pragma once

#include <vector>
#include <string>

using namespace std;

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
	int _start_station();
	int _end_station();
	int _number_of_car, _number_of_seat;

};
