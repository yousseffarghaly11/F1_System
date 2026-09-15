#ifndef RACEEVENT_H
#define RACEEVENT_H
#include "add_car.h"
#include "add_racer.h"
#include<string>
#include<iostream>
#include<vector>

using namespace std;

class raceEvent : public add_car , public add_racer
{
    private:
    string eventName;
    int lapsCount;
    vector<add_racer> registeredRacers;

    public:
    //default constructor
    raceEvent():eventName("unknown"),lapsCount(0)
    {
    }
    //initial value constructor
    raceEvent(string init_eventName,int init_lapsCount):
    eventName(init_eventName),lapsCount(init_lapsCount)
    {
    }

    //setters
    void set_eventName(string eventName_1);
    void set_lapsCount(int lapsCount_1);
    
    //getters
    string get_eventName() const;
    int get_lapscounts() const;

    void addRacer(const add_racer newRacer);
    void display()const;

};


#endif