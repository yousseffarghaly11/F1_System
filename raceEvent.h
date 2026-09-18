#ifndef RACEEVENT_H
#define RACEEVENT_H
#include "add_car.h"
#include "add_racer.h"
#include <string>
#include <vector>

using namespace std;

class raceEvent
{
private:
    string eventName;
    int lapsCount;
    vector<add_racer> registeredRacers;

public:
    raceEvent();
    raceEvent(string init_eventName, int init_lapsCount);

    void set_eventName(string name);
    void set_lapsCount(int laps);
    
    string get_eventName() const;
    int get_lapscounts() const;
    vector<add_racer> get_racers() const;

    void addRacer(const add_racer& newRacer);
    void saveEventToFile() const;
    void display() const;

    static void searchInArchive();
};
#endif