#include <iostream>
using namespace std;

class StreetVendor {
    private:
        string Name;
        string Goods;
        string Location;
        int DailyGoal;

    public:
    StreetVendor(string name, string goods, string location, int goal) {
        Name = name;
        Goods = goods;
        Location = location;
        DailyGoal = goal;
    }

    void DisplayInfo() {
        cout << Name <<  " sells " << Goods << " and is lcated at: "<< Location << endl;
        cout << "Currently daily goal is: $" << DailyGoal << endl;
    }

    void Relocate(string new_location) {
        if(new_location.find("Manhattan") != string::npos) {
            Location = new_location;
            cout << Name << " has successfully moved to: " << Location << endl;
        } else {
            cout << "Vendor relocations denied: must stay in Manhattan!" << endl;
        }
    }

};