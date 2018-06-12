#pragma once
#include "Pos.h"
class Footballer
{

	char* name;
	int number;
	double weeklySalary;
	Position position;
public:
	Footballer();
	Footballer(char*, int, double, Position);
	Footballer(const Footballer& other);
	Footballer operator=(const Footballer& other);
	~Footballer();

	//Getters: 
	char* getName() const;
	int getNumber() const;
	double getWeeklySalary() const;
	Position getPosition() const;

	//Setters: 
	void setName(char*);
	void setNumber(int);
	void setWeeklySalary(double);
	void setPosition(Position);

	//Functions
	double getAnnualSalary();
	void printFootballer();

};