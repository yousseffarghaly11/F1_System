#ifndef ADD_CAR_H
#define ADD_CAR_H
#include<string>

using namespace std;

class add_car
{
    private:
    string teamName;
    string engineType;
    double topSpeed;
    double fuelLevel;

    public:
    //default constructor
    add_car() : teamName("unknown") , engineType("unknown") , topSpeed(0) ,fuelLevel(0)
    {
    }
    //initial value constructor
    add_car(string init_teamName , string init_engineType ,double init_topSpeed,double init_fuelLevel) :teamName(init_teamName),engineType(init_engineType),topSpeed(init_topSpeed),fuelLevel(init_fuelLevel)  
    {
    }
    
    //setters
    void set_teamName(string teamName_1);
    void set_engineType(string engineType_1);
    void set_topSpeed(double topSpeed_1);
    void set_fuelLevel(double fuelLevel_1);
    
    //getters
    string get_teamName() const;
    string get_engineType() const;
    double get_topSpeed() const;
    double get_fuelLevel() const;

    //display
    virtual void display() const = 0;

};


#endif