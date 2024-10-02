#ifndef CUSTOMORCLASS_H
#define CUSTOMORCLASS_H

#include <iostream>
#include <iomanip>

using namespace std;

class Customer{

    public:
        string name;
        int* phoneNumber;
        int age;
        double maxBudget;
        
        // Default constructors
        Customer();

        // Overloaded constructor
        Customer(string, int*, int, double);

        // Deconstructor
        ~Customer();

        // Functions
        void printCustomer();
};

#endif