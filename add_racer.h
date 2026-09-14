#ifndef ADD_RACER_H
#define ADD_RACER_H
#include <string>

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
    string carModel;

public:
    // Default constructor
    add_racer() : racerName("unknown"), team("unknown"), racerNumber(0), points(0), age(0), high(0), weight(0), carModel("unknown")
    {
    }

    // Initial value constructor
    add_racer(string init_racerName, string init_team, int init_racerNumber, int init_points, int init_age, float init_high, float init_weight, string init_carModel) :
        racerName(init_racerName), team(init_team), racerNumber(init_racerNumber), points(init_points), age(init_age), high(init_high), weight(init_weight), carModel(init_carModel)
    {
    }

    // Setters
    void set_racerName(string racerName_1);
    void set_team(string team_1);
    void set_racerNumber(int racerNumber_1);
    void set_points(int points_1);
    void set_age(int age_1);
    void set_high(float high_1);
    void set_weight(float weight_1);
    void set_carModel(string carModel_1);

    // Getters
    string get_racerName() const;
    string get_team() const;
    int get_racerNumber() const;
    int get_points() const;
    int get_age() const;
    float get_high() const;
    float get_weight() const;
    string get_carModel() const;
};

#endif