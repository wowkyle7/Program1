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
        PetStore();

        // overloaded constructor
        PetStore(int, int);

        // deconstructor
        ~PetStore();
        
        // functions
        void printAll(int, int);
        void addCustomer(int, string, char*, int, double);
        void addPet(string, int*, int, double);
        void deleteCustomer();
        void deletePet();

};

#endif