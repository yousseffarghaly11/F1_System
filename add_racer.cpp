#include<iostream>
#include "add_racer.h"

using namespace std;

//setters
void add_racer::set_racerName(string racerName_1)
{
    racerName = racerName_1;
}
void add_racer::set_team(string team_1)
{
    team = team_1;
}
void add_racer::set_racerNumber(int racerNumber_1)
{
    racerNumber = racerNumber_1;
}
void add_racer::set_points(int points_1)
{
    points = points_1;
}
void add_racer::set_age(int age_1)
{
    age = age_1;
}
void add_racer::set_high(float high_1)
{
    high = high_1;
}
void add_racer::set_weight(float weight_1)
{
    weight = weight_1;
}
void add_racer::set_carModel(string carModel_1)
{
    carModel=carModel_1;
}

//getters
string add_racer::get_racerName() const
{
    return racerName;
}
string add_racer::get_team() const
{
    return team;
}
int add_racer::get_racerNumber() const
{
    return racerNumber;
}
int add_racer::get_points() const
{
    return points;
}
int add_racer::get_age() const
{
    return age;
}
float add_racer::get_high() const
{
    return high;
}
float add_racer::get_weight() const
{
    return weight;
}
string add_racer::get_carModel() const
{
    return carModel;
}

//display
void add_racer::display()const
{
    cout<<"racer Name: "<<racerName<<" || "<<
    "team Name: "<<team<<" || "<<
    "racer Number: "<<racerNumber<<" || "<<
    "racer's point: "<<points<<" || "<<
    "racer's age: "<<age<<" || "<<
    "racer's high: "<<high<<" || "<<
    "racer's weight: "<<weight<<" || "<<
    "car Model: "<<carModel;

}