#include "Reservations.h"

#include <cstdlib>
#include <ctime>

using namespace std;


int random_value(int a, int b)
{
	srand(time(NULL));
	return rand()%a+b;
}

int Railroad_company::_start_station()
{
	return random_value(14, 1);
}

int Railroad_company::_end_station()
{
	return random_value(15, 1);
}

int Passenger::position()
{
	return random_value(6, 1);
}





