#ifndef CUSTOMORCLASS_H
#define CUSTOMORCLASS_H

#include <iostream>
#include <iomanip>

using namespace std;

class Customer{

    private:
        string name;
        int* phoneNumber;
        int age;
        double maxBudget;
        
    public:
        // Constrcutors
        Customer();
        Customer(string, int*, int, double);

        // Accessors
        string getName() const;
        int* getPhoneNumber() const;
        int getAge() const;
        double getMaxBudget() const;

        // Mutators (Setters)
        void setName(string);   
        void setPhoneNumber(int*);
        void setAge(int);
        void setMaxBudget(double);
};

#endif