//  Pointer to an Array of pointers to the data
//  Data stored is the data class
//      ex. parking lot, toy box, etc
//      requirements: be able to read items from a file, be able to print the contents to the screen
#include "PetStoreClass.h"

// default constructor
PetStore::PetStore(){

}

// overloaded constructor
PetStore::PetStore(int p, int c){
        pet = new Pet[p];
        customer = new Customer[c];
}


// destructor
PetStore::~PetStore(){
        delete [] pet;
        delete [] customer;
}


void PetStore::printAll(int P_ArrSize, int C_ArrSize){
        cout << setprecision(2);
        cout << "CUSTOMER DATA" << endl;
        for(int i = 0; i < C_ArrSize; i++){
                cout << "Customer " << i+1 << endl;
                cout << "Name: " << customer[i].getName();
                cout << "Phone Number: ";
                for(int j = 0; j < 10; j++){
                        cout << customer[i].getPhoneNumber();
                }
                cout << "Age: " << customer[i].getAge();
                cout << "Max Budget: $" << customer[i].getMaxBudget();
        }
}

// void PetStore::addCustomer(){
        
// }

// void PetStore::addPet(){

// }

void PetStore::deleteCustomer(){

}

void PetStore::deletePet(){

}
