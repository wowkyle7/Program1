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
        cout << "--PET INFORMATION--" << endl;
        for(int i = 0; i < P_ArrSize; i++){
                cout << "Pet " << i+1 << endl;
                pet[i].printPet();
        }
        cout << "--CUSTOMER INFORMATION--" << endl;
        for(int i = 0; i < C_ArrSize; i++){
                cout << "Customer " << i+1 << endl;
                customer[i].printCustomer();
        }
}

void PetStore::addCustomer(){
        
}

void PetStore::addPet(){

}

void PetStore::deleteCustomer(){

}

void PetStore::deletePet(){

}
