#ifndef CUSTOMORCLASS_H
#define CUSTOMORCLASS_H

#include <iostream>
#include <iomanip>

using namespace std;

class Customer{

    private:
        string name;
        // string* otherPets; 
        int age;
        double maxBudget;

    public:
        //Constrcutors
        // Info();
        // Info(string, string*, int, double);

        string getName() const;
        // string* otherPets() const;
        int getAge() const;
        double getMaxBudget() const;

        void custName(string);
        void getOtherPets(string*);
        void custAge(int);
        void getMaxBudget(double);



};

#endif