#ifndef __Story_H
#define __Story_H

#include "Location.h"
#include "Person.h"
class Story :  public Person
{
private:
	Person a;
	Person b;
	location x;
public:
	Story();
	~Story();
	void printcharater();
};

#endif // !__Story_H