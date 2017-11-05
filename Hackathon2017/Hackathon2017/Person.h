#ifndef __Person_H
#define __Person_H

#include<iostream>
#include <fstream>
#include <string>
using namespace std;
class Person {
private:
	int sex;
	string lastname;
	string firstname;
	string hair;
	string skin;
	string desc; //physical description of character
	double weight;
	double height;
	double age;
	int STR; // Strength
	int DEX; // Dexterity
	int CON; // Constitution
	int INT; // Intelligence
	int WIS; // Wisdom
	int CHA; // Charisma
	string pers[3]; //Personality Traits, Pos, Neu, Neg
	string love;
	string friends[10][2];


public:
	Person();
	~Person();
	void set();
	void set_sex();
	void set_lastname();
	void set_firstname(int sex);
	void set_hair();
	void set_skin();
	void set_weight();
	void set_height();
	void set_age();
	void set_STR();
	void set_DEX();
	void set_CON();
	void set_INT();
	void set_WIS();
	void set_CHA();
	void set_love();
	void set_friends();
	void giveAtt();

	void print_sex();
	void print_firstname();
	void print_lastname();
	void print_hair();
	void print_skin();
	void print_desc();
	void print_weight();
	void print_height();
	void print_age();
	void print_char();
	void print_STR();
	void print_DEX();
	void print_CON();
	void print_INT();
	void print_WIS();
	void print_CHA();
	void print_love();
	void print_friends();
	void print_giveAtt(int x);
	

};
#endif // !__Person_H