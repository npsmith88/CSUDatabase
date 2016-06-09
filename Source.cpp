/*CIST 2362
Nic Smith
SID: 6575
Midterm Project - CSU Database */
#include <fstream>
#include <iomanip>
#include "Student.h"
#include "Undergraduate.h"
#include "Graduate.h"
#include "Admin.h"
using namespace std;

// prototype functions
bool logIn(int, int, string);

int main()
{
	int menuChoice, userAdminType, userAdminAcctNumber;
	string tempString, userAdminAcctPassword;
	fstream dataFile1, dataFile2, dataFile3, dataFile4, dataFile5, dataFile6, dataFile7, dataFile8, dataFile9;
	dataFile1.open("Admin.txt", ios::in);
	dataFile2.open("studentData.txt", ios::in || ios::out);

	// create array of student objects
	Student* Stud = new Student[6];
	// add data from files to create student objects
	for (int i = 0; i < 6; i++)
	{
		int tempInt = 0;
		dataFile2 << tempInt;
		Stud[i].setStudentID(tempInt);
		dataFile2 << tempString;
		Stud[i].setFirstName(tempString);
		dataFile2 << tempString;
		Stud[i].setLastName(tempString);
		dataFile2 << tempString;
		Stud[i].setMajor(tempString);
		dataFile2 << tempString;
		Stud[i].setCourse1(tempString);
		dataFile2 << tempString;
		Stud[i].setCourse2(tempString);
		dataFile2 << tempString;
		Stud[i].setCourse3(tempString);
		dataFile2 << tempString;
		Stud[i].setCourse4(tempString);
		dataFile2 << tempInt;
		Stud[i].setCourseHours(tempInt);
		dataFile2 << tempString;
		Stud[i].setGradType(tempString);
		dataFile2 << tempString;
		Stud[i].setClassification(tempString);
		dataFile2 << tempString;
		Stud[i].setDegreeType(tempString);
		dataFile2 << tempString;
		Stud[i].setThesisTopic(tempString);
	}
	while (dataFile1.good())
	{
		// display opening message to user
		cout << "Welcome to the CSU Student Database.\n"
			"You have many options while using this database,\n"
			"including show/edit student information, add/remove\n"
			"courses, display the entire university, and search\n"
			"for a student by his/her first or last name.\n\n";
		system("pause");
		// display admin log in page
		cout << "You must log in to view the database\n\n";
		cout << "Enter your Admin Type\n\n1: Administrator\n2: Dean\n3: Registrar\n\n";
		cin >> userAdminType;
		cout << "Enter your Admin Account Number\n";
		cin >> userAdminAcctNumber;
		cout << "Enter your Admin Account Password\n";
		cin >> userAdminAcctPassword;
		if (logIn(userAdminType, userAdminAcctNumber, userAdminAcctPassword) == false)
		{
			system("exit");
		}
		else
		{
			// display menu and ask for user to enter choice
			cout << "\n1: Display CSU Database\n"
				"2: Add course to student schedule\n"
				"3: Remove course from student schedule\n"
				"4: Edit student information\n"
				"5: Search for student by first or last name\n"
				"6: Quit program\n";
			cin >> menuChoice;
			while (menuChoice < 1 || menuChoice > 6)
			{
				cout << "\nSorry, please enter a valid choice (1-6): ";
				cin >> menuChoice;
			}
			switch (menuChoice)
			{
			case 1:
				// display database
				cout << "Name\t\tStudentID\tMajor\tCourse1\tCourse2\tCourse3\tCourse4\tCourse Hours\tStudent Type\tClassification\t"
						"Degree Type\tThesis Topic\n";
				cout << "---------------------------------------------------------------------------------------------\n";
				for (int i = 0; i < 6; i++)
				{
					cout << Stud[i].getFirstName() << "\t" << Stud[i].getLastName() << "\t" << Stud[i].getStudentID() << "\t"
						<< Stud[i].getMajor() << "\t" << Stud[i].getCourse1() << "\t" << Stud[i].getCourse2() << "\t" << 
						Stud[i].getCourse3() << "\t" << Stud[i].getCourse4() << "\t" << Stud[i].getCourseHours() << "\t" <<
						Stud[i].getGradType() << "\t" << Stud[i].getClassification() << "\t" << Stud[i].getDegreeType() << 
						"\t" << Stud[i].getThesisTopic() << "\n\n";
				}
				break;
			case 2:
				// add course to student
				break;
			case 3:
				// remove course from student
				break;
			case 4:
				// edit student information
				break;
			case 5:
				// search for student by f or l name
				break;
			case 6:
				system("exit");
			}
		}
		system("pause");
		return 0;
	}
}
bool logIn(int userAdminType, int userAdminAcctNumber, string userAdminAcctPassword)
{
	// Test the log in exceptions
	try
	{
		// Create an Admin with user input
		Admin(userAdminType, userAdminAcctNumber, userAdminAcctPassword);
		return true;
	}
	catch (Admin::InvalidAdminType)
	{
		cout << "Invalid admin type entered.\n\n";
		return false;
	}
	catch (Admin::InvalidAdminAcctNumber)
	{
		cout << "Invalid account number entered.\n\n";
		return false;
	}
	catch (Admin::InvalidAdminAcctPassword)
	{
		cout << "Invalid password entered.\n\n";
		return false;
	}
}