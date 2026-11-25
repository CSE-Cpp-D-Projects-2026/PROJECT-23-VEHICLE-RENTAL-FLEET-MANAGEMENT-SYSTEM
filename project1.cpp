
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Vehicle
{
private:
    int vehicleID;
    int registrationNumber;
    string category;
    int seatCapacity;
    double rentalRate;
    double odometer;
    string status;

public:
    void addVehicle()
    {
        cout << "\nEnter Vehicle ID: ";
        cin >> vehicleID;
        cout << "Enter Registration Number: ";
        cin >> registrationNumber;
        cout << "Enter Category: ";
        cin >> category;
        cout << "Enter Seating Capacity: ";
        cin >> seatCapacity;
        cout << "Enter Rental Rate per Day: ";
        cin >> rentalRate;
        cout << "Enter Odometer Reading: ";
        cin >> odometer;
        status = "Available";
        cout << "Vehicle Added Successfully!\n";
    }
    void displayVehicle()
    {
        cout << "Vehicle ID: " << vehicleID<<endl;
        cout << "Registration Number: " << registrationNumber<<endl;
        cout << "Category: " << category<<endl;
        cout << "Seating Capacity: " << seatingCapacity<<endl;
        cout << "Rental Rate: " << rentalRate<<endl;
        cout << "Odometer: " << odometer<<endl;
        cout << "Status: " << status << endl;
    }
// MAIN FUNCTION
int main()
{
    int choice;

    do
    {
        cout << "\n===== VEHICLE RENTAL SYSTEM =====\n";
        cout << "1. Add Vehicle\n";
        cout << "2. Display All Vehicles\n";
        cout << "3. Search Vehicle\n";
        cout << "4. Update Vehicle\n";
        cout << "5. Remove Vehicle\n";
        cout << "6. Exit\n";

        cout << "\nEnter Your Choice: ";
        cin >> choice;

}