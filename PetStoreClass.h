#ifndef PETSTORE_H
#define PETSTORE_H

#include "Customor.h"
#include "Pet.h"

class PetStore{
    private:
        Customor** loyalCustomors;
        Pet** petsInStore; 
    
    public:
        void addCustumor(Custumor*);
        void deleteCustumor(Custumor*);
        void addPet(Pet*);
        void deletePet(Pet*);
        void printCustumors(Custumor*);
        void printPets(Pet*);

};

#endif