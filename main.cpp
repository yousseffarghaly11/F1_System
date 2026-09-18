#include <iostream>
#include <string>
#include "add_car.h"
#include "add_racer.h"
#include "raceEvent.h"

using namespace std;

add_car inputCarData() {
    string teamname, enginetype;
    double topspeed, fuellevel;

    cout << "  -> Enter car team name: ";
    getline(cin, teamname);
    cout << "  -> Enter engine type: ";
    getline(cin, enginetype);
    cout << "  -> Enter top speed: ";
    cin >> topspeed;
    cout << "  -> Enter fuel level: ";
    cin >> fuellevel;
    cin.ignore();

    return add_car(teamname, enginetype, topspeed, fuellevel);
}

void new_race() {
    cin.ignore();
    string eventName;
    cout << "\nEnter Race Event Name (or type 'quit' to exit): ";
    getline(cin, eventName);
    
    if (eventName == "q" || eventName == "quit") return;

    cout << "Enter Total Laps Count: ";
    int laps;
    cin >> laps;
    cin.ignore();
    
    raceEvent currentEvent(eventName, laps);
    bool new_race_loop = true;

    while (new_race_loop) {
        cout << "\n----------------------------------------\n";
        cout << "Race Event '" << eventName << "' is active.\n";
        cout << "Type 'add' (or 'a') to add a racer, or 'quit' (or 'q') to save & return.\n";
        cout << "Your input: ";
        
        string userinput;
        getline(cin, userinput);
        
        if (userinput == "q" || userinput == "quit") {
            currentEvent.saveEventToFile(); // حفظ تلقائي في الملف
            new_race_loop = false;
        }
        else if (userinput == "a" || userinput == "add") {
            string rName, rTeam;
            int rNum, rPts, rAge;
            float rHigh, rWeight;

            cout << "Enter Racer Name: ";
            getline(cin, rName);
            cout << "Enter Racer Team: ";
            getline(cin, rTeam);
            cout << "Enter Racer Number: ";
            cin >> rNum;
            cout << "Enter Points: ";
            cin >> rPts;
            cout << "Enter Age: ";
            cin >> rAge;
            cout << "Enter Height (m): ";
            cin >> rHigh;
            cout << "Enter Weight (kg): ";
            cin >> rWeight;
            cin.ignore();

            cout << "Now, enter Car details for this racer:\n";
            add_car racerCar = inputCarData();

            add_racer newRacer(rName, rTeam, rNum, rPts, rAge, rHigh, rWeight, racerCar);
            currentEvent.addRacer(newRacer);
            cout << "[Success] Racer added to the event!\n";
        }
        else {
            cout << "Invalid input! Please type 'add' or 'quit'.\n";
        }
    }
}

void interface() {
    bool interface_loop = true;
    while(interface_loop) {
        cout << "\n========================================\n";
        cout << "   F1 REGISTRY & RACE ARCHIVE SYSTEM    \n";
        cout << "========================================\n";
        cout << "1. Create a new race event\n";
        cout << "2. Search in previous races archive\n";
        cout << "3. Quit\n";
        cout << "Enter your choice: ";
        
        int userinput;
        if (!(cin >> userinput)) {
            cout << "Invalid input! Please enter a number.\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        if (userinput == 1) {
            new_race();
        }
        else if (userinput == 2) {
            raceEvent::searchInArchive();
        }
        else if (userinput == 3) {
            cout << "Exiting system. Goodbye!\n";
            interface_loop = false;
        }
        else {
            cout << "Invalid choice!! Please select 1, 2, or 3.\n";
        }
    }
}

int main() {
    interface();
    return 0;
}