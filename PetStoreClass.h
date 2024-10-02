#ifndef PETSTORE_H
#define PETSTORE_H

#include <iostream>
#include "CustomerClass.h"
#include "PetClass.h"

using namespace std;

class PetStore{
    private:
        // variables
        Customer* customer;
        Pet* pet; 

    public:
        // default constructor
        // PetStore();

        // deconstructor
        ~PetStore();
        
        // functions
        void printAll(int, int);
        int addCustomer(string, int*, int, double, int);
        int addPet(string, char, int, double, int);
        int deleteCustomer(int);
        int deletePet(int);
        void setArrSize(int, int);

};

#endif