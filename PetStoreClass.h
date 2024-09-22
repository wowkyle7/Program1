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
        int numOfPets;
        int numOfCustomers;

    public:
        // default constructor
        PetStore();

        // overloaded constructor
        PetStore(Customer*, Pet*, int, int);

        // deconstructor
        ~PetStore();
        
        // functions
        void readToFile();
        void readFromFile();
        void printCustomers();
        void printPets();
        void addCustomer();
        void addPet(int, string, int, double);
        void deleteCustomer();
        void deletePet();

};

#endif