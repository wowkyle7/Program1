//  Is either top-level or bottom-level
//      can be used as a median between the driver and storage
//      can be used as a sub data in the class
//  contains at least one pointer
#include "CustomerClass.h"

Customer::Customer()
{
    name = "";
    phoneNumber = 0;
    age = 0;
    maxBudget = 0;
}

Customer::Customer(string n, int* p, int a, double b)
{
    name = n;
    
    

}

void Customer::printCustomer(){
    cout << setprecision(2);
    cout << "Name: " << name << endl;
    cout << "Phone Number: ";
    for(int i = 0; i < 2; i++)
        cout << "(" << phoneNumber[i] << ")";
    for(int i = 3; i < 6; i++)
        cout << phoneNumber[i] << "-";
    for(int i = 7; i < 10; i++)
        cout << phoneNumber[i];
    cout << "Age: " << age << endl;
    cout << "Max Budget: $" << maxBudget << endl;
}