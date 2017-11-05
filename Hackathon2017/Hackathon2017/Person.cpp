#include "Person.h"
#include "Location.h"
#include <iostream>
#include <stdlib.h>    
#include <time.h>
#include "windows.h"
#include <fstream>
using namespace std;
Person::Person() {
	sex = NULL;
	firstname = " ";
	lastname = " ";
	hair = " ";
	skin = " ";
	desc = " ";
	weight = NULL;
	height = NULL;
	age = NULL;
	STR = NULL;
	DEX = NULL;
	CON = NULL;
	INT = NULL;
	WIS = NULL;
	CHA = NULL;

}
Person::~Person() {

}
void Person::set() {
	set_sex();
	set_firstname(sex);
	set_lastname();
	set_hair();
	set_skin();
	set_weight();
	set_height();
	set_age();
	set_STR();
	set_DEX();
	set_CON();
	set_INT();
	set_WIS();
	set_CHA();
	set_love();
	set_friends();
}
	void Person::set_sex() {
		if (sex == NULL) {
			Sleep(400);
			srand(static_cast<int>(time(0)));
			sex = (rand()%2);
			cout <<"sex= "<< sex << endl;
		}

	}

	void Person::giveAtt()
	{
		string read = " ";

		int counter = 0;
		int tally = (rand() % 230) + 1;

		fstream infile;
		infile.open("traits+.txt");

		if (infile.fail())
		{
			cerr << "\n\tFailed to open traits+ file.";
		}
		else     // input file opens successfully
		{
			infile >> read;     //First num is read in

			while ((!infile.eof()) && (counter < tally))    //While the end of the file has not been reached...
			{	//Also, while the end of the array has not been reached...
				counter++; //Moves to next location in array if possible
				infile >> read; //Read in the next integer
			}

		}  // end of else statement

		pers[0] = read;
		infile.close();

		counter = 0;
		tally = (rand() % 110) + 1;

		infile.open("traitsN.txt");

		if (infile.fail())
		{
			cerr << "\n\tFailed to open traitsN file.";
		}
		else     // input file opens successfully
		{
			infile >> read;     //First num is read in

			while ((!infile.eof()) && (counter < tally))    //While the end of the file has not been reached...
			{	//Also, while the end of the array has not been reached...
				counter++; //Moves to next location in array if possible
				infile >> read; //Read in the next integer
			}

		}  // end of else statement

		pers[1] = read;
		infile.close();

		counter = 0;
		tally = (rand() % 290) + 1;

		infile.open("traits-.txt");

		if (infile.fail())
		{
			cerr << "\n\tFailed to open traits- file.";
		}
		else     // input file opens successfully
		{
			infile >> read;     //First num is read in

			while ((!infile.eof()) && (counter < tally))    //While the end of the file has not been reached...
			{	//Also, while the end of the array has not been reached...
				counter++; //Moves to next location in array if possible
				infile >> read; //Read in the next integer
			}

		}  // end of else statement

		pers[2] = read;
		infile.close();

		if (!read.compare(" ")) // Return error message, no previous input was triggered
		{
			read = "ERROR";
		}
	}
	void Person::set_firstname(int sex) {
		
		string read;
		int counter = 0;
		srand(static_cast<int>(time(NULL)));
		int tally = (rand() % 500) + 1;

		fstream infile;
		if (sex == 0)
		{
			infile.open("randomboynames.txt");
		}
		else
		{
			infile.open("randomgirlnames.txt");
		}


		if (infile.fail())
		{
			cerr << "\n\tFailed to open input file.";
		}
		else     // input file opens successfully
		{
			infile >> read;     //First num is read in

			while ((!infile.eof()) && (counter < tally))    //While the end of the file has not been reached...
			{ //Also, while the end of the array has not been reached...

				counter++; //Moves to next location in array if possible
				infile >> read; //Read in the next integer
			}

		}  // end of else statement

		infile.close();
		firstname = read;
	}

	
void Person::set_lastname() {
	Sleep(500);
	srand(static_cast<int>(time(0)));
	int x = (rand() % 2000);
		string read;
		int counter = 0;

		fstream infile;
		infile.open("randomnames.txt");

		if (infile.fail())
		{
			cerr << "\n\tFailed to open input file.";
		}
		else     // input file opens successfully
		{
			infile >> read;     //First num is read in

			while ((!infile.eof()) && (counter < x))    //While the end of the file has not been reached...
			{ //Also, while the end of the array has not been reached...

				counter++; //Moves to next location in array if possible
				infile >> read; //Read in the next integer
			}

		}  // end of else statement
		lastname = read;
		infile.close();
	
	}




void Person::set_hair() {

	srand(static_cast<int>(time(0)));
	int x = (rand() % 9);

	switch (x) {
	case '1':
		hair = "brown";
		break;
	case '2':
		hair = "black";
		break;
	case '3':
		hair = "blonde";
		break;
	case '4':
		hair = "red";
		break;
	case '5':
		hair = "pale";
		break;
	case '6':
		hair = "curly";
		break;
	case '7':
		hair = "straight";
		break;
	case '8':
		hair = "short";
		break;
	case '9':
		hair = "long";
		break;
	default:
		hair = "simple";
	}

}
void  Person::set_skin() {
	srand(static_cast<int>(time(0)));
	int x = (rand() % 6);

	switch (x) {
	case '1':
		skin = "pale";
		break;
	case '2':
		skin = "light";
		break;
	case '3':
		skin = "tanned";
		break;
	case '4':
		skin = "brown";
		break;
	case '5':
		skin = "dark";
		break;
	case '6':
		skin = "rough";
		break;
	case '7':
		skin = "smooth";
		break;
	case '8':
		skin = "freckles";
		break;
	case '9':
		skin = "scarred";
		break;
	default:
		skin = "perfect";
	}


}

void Person::set_weight() {
	weight = (rand() % 151) + 100;
}
void Person::set_height() {
	height = (rand() % 23) + 50;
}
void Person::set_age() {
	srand(static_cast<int>(time(NULL)));
	age = (rand() % 31) + 18;
}
void Person::set_STR() {
	srand(static_cast<int>(time(NULL)));
	STR = (rand() % 16) + 3; // Strength
}
void Person::set_DEX() {
	srand(static_cast<int>(time(NULL)));
	DEX = (rand() % 16) + 3; // Dexterity
}
void Person::set_CON() {
	srand(static_cast<int>(time(NULL)));
	CON = (rand() % 16) + 3; // Constitution
}
void Person::set_INT() {
	srand(static_cast<int>(time(NULL)));
	INT = (rand() % 16) + 3; // Intelligence
}
void Person::set_WIS() {
	srand(static_cast<int>(time(NULL)));
	WIS = (rand() % 16) + 3; // Wisdom
}
void Person::set_CHA() {
	srand(static_cast<int>(time(NULL)));
	CHA = (rand() % 16) + 3; // Charisma
}

void Person::set_love() {

}
void Person::set_friends() {

}
void Person::print_sex() {

	cout << "sex: "<<sex << " ";
	return;
}
void Person::print_firstname() {

	cout <<"First name: "<< firstname << " ";
	return;
}
void Person::print_lastname() {

	cout << "Last name: "<<lastname << " ";
	return;
}
void Person::print_hair() {
	cout <<"Hair: "<< hair << " ";
	return;
}
void Person::print_skin() {
	cout << "skin: "<<skin << " ";
	return;
}
void Person::print_desc() {
	cout << "decs: "<<desc << " ";
	return;
}
void Person::print_weight() {
	cout <<"Weight: "<< weight << " ";
	return;
}
void Person::print_height() {
	cout << "Hight: "<<height << " ";
	return;
}
void Person::print_age() {
	cout <<"age: "<< age << " ";
	return;
}

void Person::print_char() {
	print_sex();
	print_firstname();
	print_lastname();
	print_hair();
	print_skin();
	print_desc();
	print_weight();
	print_height();
	print_age();
	print_STR();
	print_DEX();
	print_INT();
	print_WIS();
	print_CHA();
	print_love();
	print_friends();
	return;
}

void Person::print_STR() {
	cout << "STR: " << STR << " ";
	return;
}
void Person::print_DEX() {
	cout << "DEX: " << DEX << " ";
	return;
}
void Person::print_CON() {
	cout << "CON: " << CON << " ";
	return;
}
void Person::print_INT() {
	cout << "INT: " << INT << " ";
	return;
}
void Person::print_WIS() {
	cout << "WIS: " << WIS << " ";
	return;
}
void Person::print_CHA() {
	cout << "CHA: " << CHA<< " ";
	return;
}
void Person::print_love() {
	cout << "love: " << love << " ";
	return;
}
void Person::print_friends() {
	cout << "friends: " << friends << " ";
	return;
}
void Person::print_giveAtt(int x) {
//	cout << "Att: " << Att << " ";
}