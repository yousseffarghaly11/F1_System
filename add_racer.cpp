#include <iostream>
#include "add_racer.h"

using namespace std;

add_racer::add_racer() : racerName("unknown"), team("unknown"), racerNumber(0), points(0), age(0), high(0), weight(0) {}

add_racer::add_racer(string init_racerName, string init_team, int init_racerNumber, int init_points, int init_age, float init_high, float init_weight, add_car init_car)
    : racerName(init_racerName), team(init_team), racerNumber(init_racerNumber), points(init_points), age(init_age), high(init_high), weight(init_weight), racerCar(init_car) {}

void add_racer::set_racerName(string name) { racerName = name; }
void add_racer::set_team(string t) { team = t; }
void add_racer::set_racerNumber(int num) { racerNumber = num; }
void add_racer::set_points(int pts) { points = pts; }
void add_racer::set_age(int a) { age = a; }
void add_racer::set_high(float h) { high = h; }
void add_racer::set_weight(float w) { weight = w; }
void add_racer::set_racerCar(add_car car) { racerCar = car; }

string add_racer::get_racerName() const { return racerName; }
string add_racer::get_team() const { return team; }
int add_racer::get_racerNumber() const { return racerNumber; }
int add_racer::get_points() const { return points; }
int add_racer::get_age() const { return age; }
float add_racer::get_high() const { return high; }
float add_racer::get_weight() const { return weight; }
add_car add_racer::get_racerCar() const { return racerCar; }

void add_racer::display() const {
    cout << "Racer: " << racerName << " | Team: " << team << " | Number: " << racerNumber 
        << " | Points: " << points << " | Age: " << age << " | Height: " << high << "m | Weight: " << weight << "kg\n";
    cout << "  -> Car Details: ";
    racerCar.display();
    cout << "\n";
}