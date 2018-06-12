#include "stdafx.h"
#include "Team.h"



void Team::resize(int newCapacity)
{
	Footballer* tempArr = new Footballer[newCapacity];
	for (int i = 0; i < this->footballersCount; ++i)
	{
		tempArr[i] = this->footballers[i];
	}
	delete[]this->footballers;
	footballers = tempArr;
	this->footballersCapacity = newCapacity;
} 

Team::Team()
{
	name = nullptr;
	budget = 0;
	footballersCount = 0;

}

Team::Team(char* name, Footballer* footballers, double budget, int footballersCount)
{
	mystrcpy(this->name, name);
	this->footballersCount = footballersCount;
	this->footballersCapacity = footballersCount * 2;
	this->footballers = new Footballer[this->footballersCapacity];
	for (int i = 0; i < this->footballersCount; ++i)
	{
		this->footballers[i] = footballers[i];
	}
	
	this->budget = budget;
}

Team::Team(const Team & other)
{
	delete[]footballers;
	delete[]this->name;
	mystrcpy(this->name, other.name);
	this->budget = other.budget;
	this->footballersCount = other.footballersCount;
	footballers = new Footballer[other.footballersCount];
	for (int i = 0; i < footballersCount; ++i)
	{
		this->footballers[i] = other.footballers[i];
	}
}


Team::~Team()
{
	delete[]name;
	delete[]footballers;
}

char * Team::getName()
{
	return name;
}

Footballer* Team::getFootballers()
{
	return footballers;
}

double Team::getBudget()
{
	return budget;
}

int Team::getFootballersCount()
{
	return footballersCount;
}

int Team::getFootballersCapacity()
{
	return this->footballersCapacity;
}

void Team::setName(char* name)
{
	delete[]this->name;
	mystrcpy(this->name, name);
}

void Team::setFootballers(Footballer* footballers, int footballersCount)
{
	if (this->footballersCount != footballersCount)
	{
		delete[]this->footballers;
		this->footballers = new Footballer[footballersCount];
		for (int i = 0; i < footballersCount; ++i)
		{
			this->footballers[i] = footballers[i];
		}
	}
	else 
	{
		for (int i = 0; i < footballersCount; ++i)
		{
			this->footballers[i] = footballers[i];
		}
	} 
	this->footballersCount = footballersCount;
}

void Team::setBudget(double budget)
{
	this->budget = budget;
}


void Team::printPlayers()
{
	for (int i = 0; i < this->footballersCount; ++i)
	{
		footballers[i].printFootballer();
	}
}

void Team::addPlayer(Footballer& other)
{

	if (this->footballersCapacity == this->footballersCount)
	{
		resize(this->footballersCapacity * 2);
	}
	this->footballers[footballersCount] = other;
	footballersCount++;
}

void Team::canAfford(Footballer& other)
{
	double price = other.getAnnualSalary();
	if (this->budget < price) cout << "You dont have enough money";
	else cout << "You have enough money and after buying you will have " << (this->budget - price);
}

void Team::printByPos(Position position)
{
	if (position == Paraliq) cout << "EI TIQ TUKA NE SI ZNAQT PARITE :)" << endl;
	for (int i = 0; i < this->footballersCount; ++i)
	{
		
		if (footballers[i].getPosition() == position) cout << footballers[i].getName();
	}
}


