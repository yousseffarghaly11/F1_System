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
    raceEvent(): add_car(),add_racer(), eventName("unknown"),lapsCount(0)
    {
    }
    //initial value constructor
    raceEvent(string init_eventName,int init_lapsCount,
        //parameters from base class (add_car.h)
        string init_teamName , string init_engineType ,double init_topSpeed,double init_fuelLevel
        //parameters from base class (add_racer.h)
        ,string init_racerName, string init_team, int init_racerNumber, int init_points, int init_age, float init_high, float init_weight, string init_carModel):
        add_car(init_teamName,init_engineType,init_topSpeed,init_fuelLevel),
        add_racer(init_racerName,init_team,init_racerNumber,init_points,init_age,init_high,init_weight,init_carModel)
        
        ,eventName(init_eventName),lapsCount(init_lapsCount)
    {
    }

    //setters
    void set_eventName(string eventName_1);
    void set_lapsCount(int lapsCount_1);
    
    //getters
    string get_eventName() const;
    int get_lapscounts() const;

    void addRacer(const add_racer newRacer);
    virtual void display()const = 0;

};


#endif