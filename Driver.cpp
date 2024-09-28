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

    int menuChoice;
    int C_SIZE, P_SIZE;

    cout << "\nEnter max number of pets: ";
    cin >> P_SIZE;
    cout << "\nEnter max number of customers: ";
    cin >> C_SIZE;

    do{
        // print menu
        cout << string('*', 20) << endl;
        cout << "1. Add Custumer" << endl;
        cout << "2. Add Pet" << endl;
        cout << "3. Delete Customer" << endl;
        cout << "4. Delete Pet" << endl;
        cout << "5. Print All" << endl;
        cout << "6. Save to File" << endl;
        cout << "7. Load from File" << endl;
        cout << "8. Exit Program" << endl;

        switch(menuChoice){
            default: 
                cout << "Invalid input!";
                break;

            case 1: 
                // prompt user for customer data and call petStore.addCustomer(var, var, var)
                break;

            case 2:
                // Get all data on animal 
                break;

            case 3:
                // Remove customer data from array created
                break;

            case 4:
                // Remove pet data from array created 
                break;

            case 5:
                petStore.printAll(5, 5);
                break;
                
            case 6:
                break; 
            
            case 7:
                break; 
        
        }

    }while(menuChoice != 8);
    

    return 0;
}