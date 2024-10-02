#include "CustomerClass.h"

Customer::Customer(){
    name = " ";
    phoneNumber = 0;
    age = 0;
    maxBudget = 0.0;
}

Customer::Customer(string n, int* p, int a, double b){
    name = n;
    phoneNumber = p;
    age = a;
    maxBudget = b;
}

Customer::~Customer(){
    delete [] phoneNumber;
}

void Customer::printCustomer(){
    cout<< fixed << setprecision(2);
    cout << "Name:\t\t" << name << endl;
    cout << "Phone Number:\t";
    cout << "(";
    for(int i = 0; i < 3; i++)
        cout << phoneNumber[i];
    cout << ")";
    for(int i = 3; i < 6; i++)
        cout << phoneNumber[i];
    cout << "-";
    for(int i = 6; i < 10; i++)
        cout << phoneNumber[i];
    cout << endl;
    cout << "Age:\t\t" << age << endl;
    cout << "Max Budget: \t$" << maxBudget << endl;
}