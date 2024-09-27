//  Pointer to an Array of pointers to the data
//  Data stored is the data class
//      ex. parking lot, toy box, etc
//      requirements: be able to read items from a file, be able to print the contents to the screen
#include "PetStoreClass.h"

// default constructor
PetStore::PetStore(){

}

// overloaded constructor
PetStore::PetStoreOC(int p, int c){
        pet = new Pet[p];
        customer = new Customer[c];
}


// destructor
PetStore::~PetStore(){
        delete [] pet;
        delete [] customer;
}

void PetStore::readToFile(){

}

void PetStore::readFromFile(){

}

void PetStore::printCustomers(int index){
        cout << setprecision(2);
        cout << "Name: " << customer[index].getName();
        cout << "Age: " << customer[index].getAge();
        cout << "Phone number: " << customer[index].getPhoneNumber();
        cout << "Budget: $" << customer[index].getMaxBudget();
}

void PetStore::printPets(int index){
        cout << setprecision(2);
        cout << "Species: " << pet[index].getSpecies();
        cout << "Sex: " << pet[index].getSex();
        cout << "Age: " << pet[index].getAge();
        cout << "Price: $" << pet[index].getPrice();
}

void PetStore::addCustomer(){
        customer[index].setSpecies(species);
        customer[index].setAge(age);
        customer[index].setPrice(price);
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
