#ifndef PETSTORE_H
#define PETSTORE_H

#include <iostream>
#include "CustomerClass.h"
#include "PetClass.h"

using namespace std;

class PetStore{
    private:
        Customer* customer;
        Pet* pet; 

    public:
        // default constructor
        PetStore();

        // deconstructor
        ~PetStore();
        
        void readToFile();
        void readFromFile();
        void printAll();

};

#endif