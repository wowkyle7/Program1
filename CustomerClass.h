#ifndef CUSTOMOR_H
#define CUSTOMOR_H

#include <iostream>
#include <iomanip>

using namespace std;

class Customer{

    private:
        string name;
        string* otherPets;
        int age;
        double maxBudget;



    public:
        //Constrcutors
        Info();
        Info(string, string*, int, double);

        string name() const;
        string* otherPets() const;
        int age() const;
        double maxBudget() const;

        void custName(string);
        void getOtherPets(string*);
        void custAge(int);
        void getMaxBudget(double);



};

#endif