/*CIST 2362
Nic Smith
SID: 6575
Midterm Project - CSU Database */
#include "Admin.h"

// valid input functions
void Admin::checkAdminType()
{
	if (adminType > 3 || adminType < 1)
		throw InvalidAdminType();
}
void Admin::checkAdminAcctNumber()
{
	if (adminAcctNumber > 999 || adminAcctNumber < 000)
		throw InvalidAdminAcctNumber();
}
void Admin::checkAdminAcctPassword()
{
	if (adminAcctPassword != "CSUgobears1")
		throw InvalidAdminAcctPassword();
}
// constructors
Admin::Admin() {};
Admin::Admin(int at, int aan, string aap)
{
	adminType = at;
	adminAcctNumber = aan;
	adminAcctPassword = aap;

	checkAdminType();
	checkAdminAcctNumber();
	checkAdminAcctPassword();
}
// accessor gets adminType
int Admin::getAdminType()
{
	return adminType;
}
// accessor gets adminAcctNumber
int Admin::getAdminAcctNumber()
{
	return adminAcctNumber;
}
// accessor gets adminAcctPassword
string Admin::getAdminAcctPassword()
{
	return adminAcctPassword;
}
// mutator sets adminType
void Admin::setAdminType(int at)
{
	checkAdminType();
	adminType = at;
}
// mutator sets adminAcctNumber
void Admin::setAdminAcctNumber(int aan)
{
	checkAdminAcctNumber();
	adminAcctNumber = aan;
}
// mutator sets adminAcctPassword
void Admin::setAdminAcctPassword(string aap)
{
	checkAdminAcctPassword();
	adminAcctPassword = aap;
}