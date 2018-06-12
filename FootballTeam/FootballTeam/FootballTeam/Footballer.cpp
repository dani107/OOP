#include "stdafx.h"
#include "Footballer.h"
#include "Functions.h"


Footballer::Footballer()
{
	name = nullptr;
	weeklySalary = 0;
	number = 0;
	position = Goalkeeper;
}

Footballer::Footballer(char* name, int number, double salary, Position position)
{
	mystrcpy(this->name, name);
	this->number = number;
	this->weeklySalary = salary;
	this->position = position;
}

Footballer::Footballer(const Footballer & other)
{
	mystrcpy(this->name, other.name);
	this->number = other.number;
	this->weeklySalary = other.weeklySalary;
	this->position = other.position;
}

Footballer Footballer::operator=(const Footballer & other)
{
	if (this == &other) return *this;
	delete[]this->name;
	mystrcpy(this->name, other.name);
	this->number = other.number;
	this->weeklySalary = other.weeklySalary;
	this->position = other.position;
	return *this;
}


Footballer::~Footballer()
{
	delete[]name;
}

char * Footballer::getName() const
{
	return name;
}

int Footballer::getNumber() const
{
	return number;
}

double Footballer::getWeeklySalary() const
{
	return weeklySalary;
}

Position Footballer::getPosition() const
{
	return position;
}

void Footballer::setName(char* name)
{
	delete[]this->name;
	mystrcpy(this->name, name);
}

void Footballer::setNumber(int number)
{
	this->number = number;
}

void Footballer::setWeeklySalary(double salary)
{
	this->weeklySalary = salary;
}

void Footballer::setPosition(Position position)
{
	this->position = position;
}

double Footballer::getAnnualSalary()
{
	return (this->weeklySalary * 12 * 4);
}


void Footballer::printFootballer()
{
	cout << this->name << " " << this->number << " " << this->weeklySalary << "Mil." << " " << this->position << endl;
}
