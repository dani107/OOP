#pragma once
#include "Footballer.h"
#include "Functions.h"


class Team
{
	char* name;
	Footballer* footballers;
	double budget;
	int footballersCount;
	int footballersCapacity = 2;
	void resize(int newCapacity);
public:
	Team();
	Team(char*, Footballer*, double, int);
	Team(const Team& other);
	~Team();

	//Getters: 
	char* getName();
	Footballer* getFootballers();
	double getBudget();
	int getFootballersCount();
	int getFootballersCapacity();

	//Setters: 
	void setName(char*);
	void setFootballers(Footballer*,int);
	void setBudget(double);

	//Functions
	void printPlayers();
	void addPlayer(Footballer&);
	void canAfford(Footballer&);
	void printByPos(Position);
	
};	

