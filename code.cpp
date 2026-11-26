#include <iostream>
#include <string>

using namespace std;
int main()
{
    int choice;
    do
    {
        cout<<"===== VEHICLE RENTAL SYSTEM ====="<<endl;
        cout<<"1. Vehicle Management"<<endl;
        cout<<"2. Customer Management"<<endl;
        cout<<"3. Reservations"<<endl;
        cout<<"4. Rental , Return, and Billing"<<endl;
        cout<<"5. Maintenance"<<endl;
        cout<<"6. Reports"<<endl;
        cout<<"7. Save and Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Vehicle Management"<<endl;
                break;
            case 2:
                cout<<"Customer Management"<<endl;
                break;
            case 3:
                cout<<"Reservations"<<endl;
                break;
            case 4:
                cout<<"Rental , Return, and Billing"<<endl;
                break;
            case 5:
                cout<<"Maintenance"<<endl;
                break;
            case 6:
                cout<<"Reports"<<endl;
                break;
            case 7:
                cout<<"Save and Exit Successfully"<<endl;
                break;
            default:
                cout<<"Invalid choice. Please try again."<<endl;
        }
    } while (choice !=0);
    return 0;
}
