/*CIST 2362
Nic Smith
SID: 6575
Midterm Project - CSU Database */
#ifndef ADMIN_H
#define ADMIN_H
#include "Student.h"

class Admin
{
protected:
	string adminAcctPassword;
	int adminType, adminAcctNumber;

	// functions check valid input for each variable
	void checkAdminType();
	void checkAdminAcctNumber();
	void checkAdminAcctPassword();

public:
	// exception classes
	class InvalidAdminType {};
	class InvalidAdminAcctNumber {};
	class InvalidAdminAcctPassword {};

	// constructors
	Admin();
	Admin(int, int, string);

	// accessors
	int getAdminType();
	int getAdminAcctNumber();
	string getAdminAcctPassword();

	// mutators
	void setAdminType(int);
	void setAdminAcctNumber(int);
	void setAdminAcctPassword(string);

};
#endif