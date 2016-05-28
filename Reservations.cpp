#include "Reservations.h"

#include <cstdlib>

using namespace std;


int random_value(int a, int b)
{
	return rand()%a+b;
}

int Railroad_company::_start_station(int a)
{
	return random_value(a-1, 1);
}

int Railroad_company::_end_station(int a, int b)
{
	return random_value(a-b, b+1);
}

int Passenger::position()
{
	return random_value(6, 1);
}





