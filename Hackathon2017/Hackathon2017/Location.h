#ifndef __Location_H
#define __Location_H

#include <string>
#include <iostream>
#include <ctime>
#include <cstring>

using namespace std;

class location
{
	static string locationname;
	static string locationdesc;

public:
	location();
	~location();

	// void set();
	static void run();
	// static bool writetofile();
	
	// mutator for location name & desc
	static void setlocationvalues();
	void output();
};
#endif // !__Location_H

