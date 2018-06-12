// FootballTeam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Footballer.h"
#include "Team.h"


int main()
{
	Footballer chavo("Chavdar", 10, 21000, LAttacker);
	Footballer nasko("Atanas", 5, 1.32, LHalf);
	Footballer kiril("Kiril", 69, 6.9, Goalkeeper);
	Footballer evgeni("Evgeni", 8877, 1000000000, Paraliq);

	int size = 2;
	Footballer* footballers = new Footballer[size];
	footballers[0] = chavo;
	footballers[1] = nasko;

	 Footballer* newFootballers = new Footballer[3];
	 newFootballers[0] = nasko;
	 newFootballers[1] = chavo;
	 newFootballers[2] = kiril;
	 Team team("Hello", newFootballers, 20000, 3);
	 team.addPlayer(evgeni);
	 team.printPlayers();
	 cout << team.getFootballersCount() << endl;
	 team.addPlayer(evgeni);
	 team.printPlayers();
	 cout << team.getFootballersCount() << endl;
	 team.addPlayer(evgeni);
	 team.printPlayers();
	 cout << team.getFootballersCount() << endl;
	 team.addPlayer(evgeni);
	 team.printPlayers();
	 cout << team.getFootballersCount() << endl;
	 team.addPlayer(evgeni);
	 team.printPlayers();
	 cout << team.getFootballersCount() << endl;
	 team.addPlayer(evgeni);
	 team.printPlayers();
	 cout << team.getFootballersCount() << endl;
	 team.addPlayer(evgeni);
	 team.printPlayers();
	 cout << team.getFootballersCount() << endl;
	 cout << endl;
	 team.addPlayer(evgeni);
	 team.printPlayers();
	 cout << team.getFootballersCount() << endl;
	 cout << endl;
	 team.addPlayer(evgeni);
	 team.printPlayers();
	 cout << team.getFootballersCount() << endl;
	 cout << endl;
	 team.addPlayer(evgeni);
	 team.printPlayers();
	 cout << team.getFootballersCount() << endl;
	 cout << endl;
	 cout << team.getFootballersCapacity();
	
    return 0;
}

