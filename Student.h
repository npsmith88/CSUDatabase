/*CIST 2362
Nic Smith
SID: 6575
Midterm Project - CSU Database */
#include <string>
#include <iostream>
using namespace std;
#ifndef STUDENT_H
#define STUDENT_H

class Student
{
protected:
	string firstName, lastName, major, course1, course2, course3,
		course4, gradType,classification, degreeType, thesisTopic;
	int studentID, courseHours;
	void checkStudentID();
	void checkCourseHours();
	//void checkClassification();
	//void checkDegreeType();
	
public:
	// exception classes
	class InvalidStudentID {};
	class InvalidCourseHours {};
	//class InvalidClassification {};
	//class InvalidDegreeType {};

	// constructors
	Student();
	Student(string, string, int, string, string, string, string, string, int, string, string, string, string);

	// accessors
	string getFirstName();
	string getLastName();
	int getStudentID();
	string getMajor();
	string getCourse1();
	string getCourse2();
	string getCourse3();
	string getCourse4();
	int getCourseHours();
	string getGradType();
	string getClassification();
	string getDegreeType();
	string getThesisTopic();

	// mutators
	void setFirstName(string);
	void setLastName(string);
	void setStudentID(int);
	void setMajor(string);
	void setCourse1(string);
	void setCourse2(string);
	void setCourse3(string);
	void setCourse4(string);
	void setCourseHours(int);
	void setGradType(string);
	void setClassification(string);
	void setDegreeType(string);
	void setThesisTopic(string);

};
#endif