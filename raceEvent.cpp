#include <iostream>
#include <fstream>
#include <sstream>
#include "raceEvent.h"

using namespace std;

raceEvent::raceEvent() : eventName("unknown"), lapsCount(0) {}
raceEvent::raceEvent(string init_eventName, int init_lapsCount) : eventName(init_eventName), lapsCount(init_lapsCount) {}

void raceEvent::set_eventName(string name) { eventName = name; }
void raceEvent::set_lapsCount(int laps) { lapsCount = laps; }

string raceEvent::get_eventName() const { return eventName; }
int raceEvent::get_lapscounts() const { return lapsCount; }
vector<add_racer> raceEvent::get_racers() const { return registeredRacers; }

void raceEvent::addRacer(const add_racer& newRacer) {
    registeredRacers.push_back(newRacer);
}

void raceEvent::saveEventToFile() const {
    ofstream outFile("f1_archive.txt", ios::app);
    if (!outFile) {
        cout << "Error opening file for saving!\n";
        return;
    }
    outFile << "EVENT:" << eventName << " | Laps:" << lapsCount << "\n";
    for (const auto& racer : registeredRacers) {
        outFile << "  -> RACER:" << racer.get_racerName() 
                << " | Team:" << racer.get_team() 
                << " | No:" << racer.get_racerNumber() 
                << " | Points:" << racer.get_points() 
                << " | CAR TEAM:" << racer.get_racerCar().get_teamName() 
                << " | Engine:" << racer.get_racerCar().get_engineType() 
                << " | TopSpeed:" << racer.get_racerCar().get_topSpeed() << "\n";
    }
    outFile.close();
    cout << "\n[Success] Race Event and Archive saved successfully to file!\n";
}

void raceEvent::display() const {
    cout << "\n=== Race Event: " << eventName << " ===\n";
    cout << "Total Laps: " << lapsCount << "\n";
    cout << "Registered Racers Count: " << registeredRacers.size() << "\n";
    for (const auto& r : registeredRacers) {
        r.display();
        cout << "------------------------\n";
    }
}

void raceEvent::searchInArchive() {
    cin.ignore();
    bool search_loop = true;
    while (search_loop) {
        cout << "\n========================================\n";
        cout << "         F1 ARCHIVE SEARCH SYSTEM       \n";
        cout << "========================================\n";
        cout << "Type 'quit' or 'q' to return to main menu.\n";
        cout << "Enter search keyword (Event Name, Racer Name, or Car Team): ";
        
        string keyword;
        getline(cin, keyword);

        if (keyword == "q" || keyword == "quit") {
            search_loop = false;
            break;
        }

        ifstream inFile("f1_archive.txt");
        if (!inFile) {
            cout << "No archive records found yet! (File doesn't exist)\n";
            continue;
        }

        string line;
        bool found = false;
        cout << "\n--- Search Results ---\n";
        while (getline(inFile, line)) {
            if (line.find(keyword) != string::npos) {
                found = true;
                cout << "Match Found: " << line << "\n";
            }
        }
        inFile.close();

        if (!found) {
            cout << "No results found matching '" << keyword << "'.\n";
        }
    }
}