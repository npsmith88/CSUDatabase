/*CIST 2362
Nic Smith
SID: 6575
Midterm Project - CSU Database */
#include "Undergraduate.h"

// valid input functions
void Undergraduate::checkClassification()
{
	if (classification != "Freshman" || classification != "Sophomore"
		|| classification != "Junior" || classification != "Senior")
		throw InvalidClassification();
}
// constructor creates Undergraduate object
Undergraduate::Undergraduate() {};
// accessor gets classification
string Undergraduate::getClassification()
{
	return classification;
}
// mutator sets classification
void Undergraduate::setClassification(string c)
{
	classification = c;
	checkClassification();
}