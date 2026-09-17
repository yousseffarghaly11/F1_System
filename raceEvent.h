#ifndef RACEEVENT_H
#define RACEEVENT_H
#include "add_car.h"
#include "add_racer.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class raceEvent
{
private:
    string eventName;
    int lapsCount;
    vector<add_racer> registeredRacers;
    vector<add_car> registeredCars;

public:
    // Default constructor
    raceEvent() : eventName("unknown"), lapsCount(0) {}

    // Initial value constructor
    raceEvent(string init_eventName, int init_lapsCount) 
        : eventName(init_eventName), lapsCount(init_lapsCount) {}

    // Setters
    void set_eventName(string eventName_1);
    void set_lapsCount(int lapsCount_1);
    
    // Getters
    string get_eventName() const;
    int get_lapscounts() const;

    // Methods to add entities
    void addRacer(const add_racer& newRacer);
    void addCar(const add_car& newCar);

    // Display event details
    void display() const;
};

#endif