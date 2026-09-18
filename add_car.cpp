#include <iostream>
#include "add_car.h"

using namespace std;

add_car::add_car() : teamName("unknown"), engineType("unknown"), topSpeed(0), fuelLevel(0) {}

add_car::add_car(string init_teamName, string init_engineType, double init_topSpeed, double init_fuelLevel) 
    : teamName(init_teamName), engineType(init_engineType), topSpeed(init_topSpeed), fuelLevel(init_fuelLevel) {}

void add_car::set_teamName(string teamName_1) { teamName = teamName_1; }
void add_car::set_engineType(string engineType_1) { engineType = engineType_1; }
void add_car::set_topSpeed(double topSpeed_1) { topSpeed = topSpeed_1; }
void add_car::set_fuelLevel(double fuelLevel_1) { fuelLevel = fuelLevel_1; }

string add_car::get_teamName() const { return teamName; }
string add_car::get_engineType() const { return engineType; }
double add_car::get_topSpeed() const { return topSpeed; }
double add_car::get_fuelLevel() const { return fuelLevel; }

void add_car::display() const {
    cout << "Team: " << teamName << " | Engine: " << engineType 
        << " | Top Speed: " << topSpeed << " KM/H | Fuel: " << fuelLevel;
}