#ifndef ADD_CAR_H
#define ADD_CAR_H
#include <string>

using namespace std;

class add_car
{
private:
    string teamName;
    string engineType;
    double topSpeed;
    double fuelLevel;

public:
    add_car();
    add_car(string init_teamName, string init_engineType, double init_topSpeed, double init_fuelLevel);
    
    void set_teamName(string teamName_1);
    void set_engineType(string engineType_1);
    void set_topSpeed(double topSpeed_1);
    void set_fuelLevel(double fuelLevel_1);
    
    string get_teamName() const;
    string get_engineType() const;
    double get_topSpeed() const;
    double get_fuelLevel() const;

    void display() const;
};
#endif