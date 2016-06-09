/*CIST 2362
Nic Smith
SID: 6575
Midterm Project - CSU Database */
#include "Student.h"

// valid input functions
void Student::checkStudentID()
{
	if (studentID > 999999999 || studentID < 000000000)
		throw InvalidStudentID();
}
void Student::checkCourseHours()
{
	if (courseHours < 0)
		throw InvalidCourseHours();
}
//void Student::checkClassification()
//{
//	if (classification != "Freshman" || classification != "Sophomore"
//		|| classification != "Junior" || classification != "Senior"
//		|| classification != "na")
//		throw InvalidClassification();
//}
//void Student::checkDegreeType()
//{
//	if (degreeType != "Doctorate" || degreeType != "Masters" || degreeType 
//		!= "Specialist" || degreeType != "na")
//		throw InvalidDegreeType();
//}
// constructor creates Student object
Student::Student() {};
// constructor creates Student object and variables
Student::Student(string fn, string ln, int sid, string m, string c1, string c2, string c3, string c4, int ch, string gt, string cl, string dt, string tt)
{
	firstName = fn;
	lastName = ln;
	studentID = sid;
	major = m;
	course1 = c1;
	course2 = c2;
	course3 = c3;
	course4 = c4;
	courseHours = ch;
	gradType = gt;
	classification = cl;
	degreeType = dt;
	thesisTopic = tt;

	checkStudentID();
	checkCourseHours();
	//checkClassification();
	//checkDegreeType();
}
// accessor gets firstName
string Student::getFirstName()
{
	return firstName;
}
// accessor gets lastName
string Student::getLastName()
{
	return lastName;
}
// accessor gets studentID
int Student::getStudentID()
{
	return studentID;
}
// accessor gets major
string Student::getMajor()
{
	return major;
}
// accessor gets course1
string Student::getCourse1()
{
	return course1;
}
// accessor gets course2
string Student::getCourse2()
{
	return course2;
}
// accessor gets course3
string Student::getCourse3()
{
	return course3;
}
// accessor gets course4
string Student::getCourse4()
{
	return course4;
}
// accessor gets courseHours
int Student::getCourseHours()
{
	return courseHours;
}
// mutator gets gradType
string Student::getGradType()
{
	return gradType;
}
// accessor gets classification
string Student::getClassification()
{
	return classification;
}
// accessor gets degreeType
string Student::getDegreeType()
{
	return degreeType;
}
// accessor gets thesisTopic
string Student::getThesisTopic()
{
	return thesisTopic;
}
// mutator sets firstName
void Student::setFirstName(string fn)
{
	this->firstName = fn;
}
// mutator sets lastName
void Student::setLastName(string ln)
{
	this->lastName = ln;
}
// mutator sets studentID
void Student::setStudentID(int sid)
{
	this->studentID = sid;
	checkStudentID();
}
// mutator sets major
void Student::setMajor(string m)
{
	this->major = m;
}
// mutator sets course1
void Student::setCourse1(string c1)
{
	this->course1 = c1;
}
// mutator sets course2
void Student::setCourse2(string c2)
{
	this->course1 = c2;
}
// mutator sets course3
void Student::setCourse3(string c3)
{
	this->course1 = c3;
}
// mutator sets course4
void Student::setCourse4(string c4)
{
	this->course1 = c4;
}
// mutator sets courseHours
void Student::setCourseHours(int ch)
{
	this->courseHours = ch;
	checkCourseHours();
}
// mutator sets gradType
void Student::setGradType(string gt)
{
	this->gradType = gt;
}
// mutator sets classification
void Student::setClassification(string c)
{
	this->classification = c;
	//checkClassification();
}
// mutator sets degreeType
void Student::setDegreeType(string dt)
{
	this->degreeType = dt;
	//checkDegreeType();
}
// mutator sets thesisTopic
void Student::setThesisTopic(string tt)
{
	this->thesisTopic = tt;
}