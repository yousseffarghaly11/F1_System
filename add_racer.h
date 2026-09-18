#ifndef ADD_RACER_H
#define ADD_RACER_H
#include <string>
#include "add_car.h"

using namespace std;

class add_racer
{
private:
    string racerName;
    string team;
    int racerNumber;
    int points;
    int age;
    float high;
    float weight;
    add_car racerCar;

public:
    add_racer();
    add_racer(string init_racerName, string init_team, int init_racerNumber, int init_points, int init_age, float init_high, float init_weight, add_car init_car);

    void set_racerName(string name);
    void set_team(string t);
    void set_racerNumber(int num);
    void set_points(int pts);
    void set_age(int a);
    void set_high(float h);
    void set_weight(float w);
    void set_racerCar(add_car car);

    string get_racerName() const;
    string get_team() const;
    int get_racerNumber() const;
    int get_points() const;
    int get_age() const;
    float get_high() const;
    float get_weight() const;
    add_car get_racerCar() const;

    void display() const;
};
#endif