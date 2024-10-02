#include "CustomerClass.h"

Customer::Customer(){
    phoneNumber = new int[10];
    name = "null";
    for(int i = 0; i < 10; i++)
        phoneNumber[i] = 0;
    age = -1;
    maxBudget = -1.0;
}

Customer::Customer(string n, int* p, int a, double b){
    phoneNumber = new int[10];
    name = n;
    for(int i = 0; i < 10; i++)
        phoneNumber[i] = p[i];
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