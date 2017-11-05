#include "Person.h"
#include "Location.h"
#include "Story.h"
#include <iostream>
using namespace std;
string location::locationname;
string location::locationdesc;
location::location() {
	locationname = "default";
	locationdesc = "default";

}
location::~location() {

}
void location::run()
{
	srand(static_cast<int>(time(NULL)));
	int x = (rand() % 3+1);
	cout << endl <<"x: "<< x << endl;
	// set random location name
	switch (x)
	{
	case 1:
		locationname = "Thunderdome";
		locationdesc = "A barren arena caged in scrap metal and surrounded by bloodthirsty spectators. Two enter, only one leaves.";
		break;
	case 2:
		locationname = "Gladiator Arena";
		locationdesc = "Are you not entertained?";
		break;
	case 3:
		locationname = "The Pit";
		locationdesc = "A desolate place where dreams go to die...and people - loads of people.";
		break;
	case 4:
		locationname = "McDonald's Playpen";
		locationdesc = "A savage land where only the quickest and strongest lay claim to the ball pit.";
		break;
	}

	
}

void location::setlocationvalues()
{
	cout << "Please enter a location name:" << endl;
	cin >> locationname;

	cout << "Please enter a location description:" << endl;
	cin >> locationdesc;

	cout << locationname << endl;
	cout << locationdesc << endl;
}
void location::output() {
	cout << "Location name: " << locationname;
	cout << "Location description: " << locationdesc;
}

