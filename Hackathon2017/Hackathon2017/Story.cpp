#include "Person.h"
#include "Location.h"
#include "Story.h"
#include <iostream>
using namespace std;
Story::Story() {
	
	
	a.set();
	
	b.set();
	x.run();

}
Story::~Story() {


}
void Story::printcharater() {

	cout << "a = ";
	a.print_char();
	
	cout << endl << "b = ";
	b.print_char();
	x.output();

}