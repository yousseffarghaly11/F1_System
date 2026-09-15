#include<iostream>
#include<iostream>
#include<vector>
#include "raceEvent.h"

using namespace std;

//setters
void raceEvent::set_eventName(string eventName_1)
{
    eventName = eventName_1;
}

void raceEvent::set_lapsCount(int lapsCount_1)
{
    lapsCount = lapsCount_1;
}

//getters
string raceEvent::get_eventName() const
{
    return eventName;
}

int raceEvent::get_lapscounts() const
{
    return lapsCount;
}

void raceEvent::addRacer(const add_racer newRacer)
    {
        registeredRacers.push_back(newRacer);
        cout<<"Racer added successfully to "<<eventName;
    }

    void raceEvent::display()const
    {
        cout <<"=== Race event: "<<eventName<<" ===\n";
        cout <<"Total Laps: "<<lapsCount<<"\n";
        cout <<"registered Racers Count: "<<registeredRacers.size()<<"\n";
    }