#include <iostream>
#include <string>

using namespace std;
class Robot {
private:
    string name;
    int batteryLevel;
public:
    Robot() {
        name = "Alpha";
        batteryLevel = 100;
    }
    void performTask() {
        if (batteryLevel >= 10) {
            batteryLevel -= 10;
            cout << name << " is performing a task. Battery level: " << batteryLevel << "%" << endl;
        } else {
            cout << name << " does not have enough battery to perform the task!" << endl;
        }
    }
    void displayStatus() {
        cout << "Robot Name: " << name << ", Battery Level: " << batteryLevel << "%" << endl;
    }
    ~Robot() {
        cout << name << " is shutting down. Goodbye!" << endl;
    }
};

int main() {
    Robot robot1;
    robot1.displayStatus();
    robot1.performTask();
    robot1.displayStatus();
    return 0;
}
