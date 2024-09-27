/*
Contains a full program flow.
All classes are used.
All functions can be tested.
User has some kind of input.
Has a natural way to end the program
*/

#include "PetClass.h"
#include "CustomerClass.h"
#include "PetStoreClass.h"

int main(){
    PetStore petStore;
    const int P_SIZE = 10;
    const int C_SIZE = 10;

    int menuChoice;

    petStore.PetStoreOC(P_SIZE, C_SIZE);

    do{
        



    }while(menuChoice != 4);



    return 0;
}