#include "./Rand.h"

using namespace std;

Rand::Rand()
{ 
	randVal = rand() % 100;
	//refreh123
}
double Rand::evaluate()
{
	return randVal;
}
string Rand::stringify()
{
	return to_string(randVal);
}
