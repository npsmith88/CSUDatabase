/*CIST 2362
Nic Smith
SID: 6575
Midterm Project - CSU Database */
#include "Graduate.h"

// valid input functions
void Graduate::checkDegreeType()
{
	if (degreeType != "Doctorate" || degreeType != "Masters" || degreeType != "Specialist")
		throw InvalidDegreeType();
}
// constructor creates Graduate object
Graduate::Graduate() {}
// accessor gets degreeType
string Graduate::getDegreeType()
{
	return degreeType;
}
// accessor gets thesisTopic
string Graduate::getThesisTopic()
{
	return thesisTopic;
}
// mutator sets degreeType
void Graduate::setDegreeType(string dt)
{
	degreeType = dt;
	checkDegreeType();
}
// mutator sets thesisTopic
void Graduate::setThesisTopic(string tt)
{
	this->thesisTopic = tt;
}