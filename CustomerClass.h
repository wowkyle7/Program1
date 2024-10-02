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
        
        // Constrcutors
        Customer();
        Customer(string, int*, int, double);

        // functions
        void printCustomer();
};

#endif