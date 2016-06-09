/*CIST 2362
Nic Smith
SID: 6575
Midterm Project - CSU Database */
#ifndef GRADUATE_H
#define GRADUATE_H
#include "Student.h"

class Graduate : public Student
{
protected:
	string degreeType, thesisTopic;
	void checkDegreeType();

public:
	// exception class
	class InvalidDegreeType {};

	// constructors
	Graduate();
	
	// accessors
	string getDegreeType();
	string getThesisTopic();

	// mutators
	void setDegreeType(string);
	void setThesisTopic(string);

};
#endif