//  Pointer to an Array of pointers to the data
//  Data stored is the data class
//      ex. parking lot, toy box, etc
//      requirements: be able to read items from a file, be able to print the contents to the screen
#include "PetStoreClass.h"

// destructor
PetStore::~PetStore(){
        delete [] pet;
        delete [] customer;
}

void PetStore::printAll(int c_index, int p_index){
        cout << endl;
        cout << string(20, '*') << " PET INFORMATION " << string(20, '*') << endl;
        for(int i = 0; i < p_index; i++){
                cout << "PET " << i+1 << endl;
                pet[i].printPet();
                cout << endl;
        }
        cout << string(20, '*') << " CUSTOMER INFORMATION " << string(20, '*') << endl;
        for(int i = 0; i < c_index; i++){
                cout << "CUSTOMER " << i+1 << endl;
                customer[i].printCustomer();
                cout << endl;
        }
}

int PetStore::addCustomer(string n, int* p, int a, double b, int index){
        customer[index].name = n;
        customer[index].phoneNumber = p;
        customer[index].age = a;
        customer[index].maxBudget = b;

        return index+1;
}

int PetStore::addPet(string s, char g, int a, double p, int index){
        pet[index].setSpecies(s);
        pet[index].setSex(g);
        pet[index].setAge(a);
        pet[index].setPrice(p);

        return index+1;
}

int PetStore::deleteCustomer(int index){
        return index-1;
}

int PetStore::deletePet(int index){
        return index-1;
}

void PetStore::setArrSize(int c_index, int p_index){
        customer = new Customer[c_index];
        pet = new Pet[p_index];
}
