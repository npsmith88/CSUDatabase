/*CIST 2362
Nic Smith
SID: 6575
Midterm Project - CSU Database */
#ifndef UNDERGRADUATE_H
#define UNDERGRADUATE_H
#include "Student.h"

class Undergraduate : public Student
{
protected:
	string classification;
	void checkClassification();

public:
	// exception class
	class InvalidClassification {};
	// constructor
	Undergraduate();
	
	// accessor
	string getClassification();

	// mutator
	void setClassification(string);

};
#endif