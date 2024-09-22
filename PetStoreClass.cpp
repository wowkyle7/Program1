//  Pointer to an Array of pointers to the data
//  Data stored is the data class
//      ex. parking lot, toy box, etc
//      requirements: be able to read items from a file, be able to print the contents to the screen
#include "PetStoreClass.h"

// default constructor


// overloaded constructor


// destructor
PetStore::~PetStore(){
        delete [] pet;
        delete [] customer;
}

void PetStore::readToFile(){

}

void PetStore::readFromFile(){

}

void PetStore::printCustomers(){
        for(int i = 0; i < ){
                cout << "CUSTOMER INFORMATION" << string('*' , 20) << endl;
                cout << "Name: " << customer->getName();
        }
}

void PetStore::printCustomers(){

}

void PetStore::printPets(){

}

void PetStore::addCustomer(){

}

void PetStore::addPet(int index, string species, int age, double price){
        pet[index].setSpecies(species);
        pet[index].setAge(age);
        pet[index].setPrice(price);
}

void PetStore::deleteCustomer(){

}

void PetStore::deletePet(){

}
