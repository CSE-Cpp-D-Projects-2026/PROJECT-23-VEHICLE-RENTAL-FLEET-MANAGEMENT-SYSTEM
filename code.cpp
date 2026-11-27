#include <iostream>
#include <string>

using namespace std;


// =========================SECTION-2 : UTILITIES=================================

class AppException
{
  private:
  string message;

  public:
  AppException(string msg)
  {
    message=msg;
  }

  string getMessage()
{
    return message;
}

inline void printline()
{
    cout<<"-----------------------------------------------------"<<endl;
}

int readInt(string prompt , int low=0 , int high=999999)
{
    int value;

    while(true)
    {
        cout<<prompt;
        cin>>value;

        if(cin.fail())
        {
            cin.clear();
            cin.ignore();
            cout<<"Please enter a number "<<endl;

        }
        else if(value<low || value>high)
        {
            cin.ignore();
            cout<<"Please enter a number between "<<low<<" and "<<high<<endl;
        }
        else
        {
            cin.ignore();
            return value;
        }
    }
}
double realDouble(string prompt, int low=0 ,int high=999999)
{
    double value;

    while(true)
    {
        cout<<prompt;
        cin>>value;

        if(cin.fail())
        {
            cin.clear();
            cin.ignore();
            cout<<"Please enter a number "<<endl;

        }
        else if(value<low || value>high)
        {
            cin.ignore();
            cout<<"Please enter a value between "<<low<<" and "<<high<<endl;
        }
        else
        {
            cin.ignore();
            return value;
        }
    }
}
void checkNotEmpty(string prompt, string fieldName)
{
    string text;

    while(true)
    {
        cout<<prompt;
        getline(cin,text);

        try
        {
            checkNotEmpty(text,fieldName);
            return text;
        }
        catch(AppException error)
        {
            cout<<"Error : "<<error.getMessage()<<endl;
        }
    }
}
};

int main()
{
    int choice;

    do{
        cout<<"=========VEHICLE RENTAL SYSTEM==========="<<endl;
        cout<<"1. Vehicle Management"<<endl;
        cout<<"2. Customer Management"<<endl;
        cout<<"3. Reservations"<<endl;
        cout<<"4. Rental , Return , Billing"<<endl;
        cout<<"5. Maintenance"<<endl;
        cout<<"6. Reports"<<endl;
        cout<<"7. Save and Exit"<<endl;

        cout<<"Enter your Choice"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:
            cout<<"Vehicle Management "<<endl;
            break;
            case 2:
            cout<<"Customer Management "<<endl;
            break;
            case 3:
            cout<<"Reservations "<<endl;
            break;
            case 4:
            cout<<"Rental ,Return and Billing "<<endl;
            break;
            case 5:
            cout<<"Maintenance"<<endl;
            break;
            case 6:
            cout<<"Reports "<<endl;
            break;
            case 7:
            cout<<"Goodbye!!!"<<endl;
            break;
            default:
            cout<<"Invalid Choice.Please try again "<<endl;

        }
    }while(choice!=0);

    return 0;

}