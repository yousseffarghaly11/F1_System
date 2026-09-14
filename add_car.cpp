#include<iostream>
#include "add_car.h"

using namespace std;

//setters
void add_car::set_teamName(string teamName_1)
{
    teamName = teamName_1;
}

void add_car::set_engineType(string engineType_1)
{
    engineType = engineType_1;
}

void add_car::set_topSpeed(double topSpeed_1)
{
    topSpeed = topSpeed_1;
}

void add_car::set_fuelLevel(double fuelLevel_1)
{
    fuelLevel = fuelLevel_1;
}

//getters
string add_car::get_teamName() const
{
    return teamName;
}

string add_car::get_engineType() const
{
    return engineType;
}

double add_car::get_topSpeed() const
{
    return topSpeed;
}

double add_car::get_fuelLevel() const
{
    return fuelLevel;
}