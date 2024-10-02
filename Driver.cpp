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
#include <cctype>

int main(){
    PetStore petStore;

    int menuChoice;
    int C_SIZE, P_SIZE;
    int current_c_index = 0, current_p_index = 0;

    // temp variables for customer
    string temp_customer_name;
    string temp_customer_num;
    int* customer_num_as_int;
    int temp_customer_age;
    double temp_customer_budget;
    customer_num_as_int = new int[10];
    for(int i = 0; i < 10; i++)
        customer_num_as_int[i] = -1;

    // temp variables for pet
    string temp_pet_species;
    char temp_pet_sex;
    int temp_pet_age;
    double temp_pet_price;

    cout << "\nEnter max number of customers:\t";
    cin >> C_SIZE;
    cout << "\nEnter max number of pets:\t";
    cin >> P_SIZE;

    petStore.setArrSize(C_SIZE, P_SIZE);

    cout << endl;
    do{
        // print menu
        cout << endl << endl << string(20, '*') << " MENU " << string(20, '*') << endl;
        cout << "1. Add Custumer" << endl;
        cout << "2. Add Pet" << endl;
        cout << "3. Delete Customer" << endl;
        cout << "4. Delete Pet" << endl;
        cout << "5. Print All" << endl;
        cout << "6. Save to File" << endl;
        cout << "7. Load from File" << endl;
        cout << "8. Exit Program" << endl;

        cout << "\nEnter Choice: ";
        cin >> menuChoice;

        switch(menuChoice){
            default: 
                cout << "Invalid input!";
                break;

            case 1:
                cout << "\nADD CUSTOMER" << endl;
                cout << "Please Enter Name:\t\t\t";
                cin.ignore();
                getline(cin, temp_customer_name);
                cout << "Please enter a TEN digit phone number:\t";
                getline(cin, temp_customer_num);
                cout << "Please enter age:\t\t\t";
                cin >> temp_customer_age;
                cout << "Please enter in your max budget:\t$";
                cin >> temp_customer_budget;

                // convert string of phone number to int* of phone number
                for(int i = 0; i < temp_customer_num.length(); i++)
                    customer_num_as_int[i] = int(temp_customer_num.at(i) - '0');
                current_c_index = petStore.addCustomer(temp_customer_name, customer_num_as_int, temp_customer_age, temp_customer_budget, current_c_index);
                cout << current_c_index;
                break;

            case 2:
                cout << "\nADD PET" << endl;
                cout << "Please enter species:\t\t";
                cin.ignore();
                getline(cin, temp_pet_species);
                cout << "Please enter sex (M or F):\t";
                cin >> temp_pet_sex;
                cout << "Please enter age:\t\t";
                cin >> temp_pet_age;
                cout << "Please enter price:\t\t$";
                cin >> temp_pet_price;

                current_p_index = petStore.addPet(temp_pet_species, toupper(temp_pet_sex), temp_pet_age, temp_pet_price, current_p_index);
               
                break;

            case 3:
                if(current_c_index != 0){
                    current_c_index = petStore.deleteCustomer(current_c_index);
                    cout << "\nMost Recent Customer Entry Deleted" << endl;
                }
                else
                    cout << "\nNo Customer Data to Delete!" << endl;
                break;

            case 4:
                if(current_p_index != 0){
                    current_p_index = petStore.deletePet(current_p_index);
                    cout << "\nMost Recent Pet Entry Deleted" << endl;
                }
                else
                    cout << "\nNo Pet Data to Delete!" << endl;
                break;

            case 5:
                petStore.printAll(current_c_index, current_p_index);
                break;
                
            case 6:
                break; 
            
            case 7:
                break; 
            case 8:
                cout << "\nHave a good day!" << endl;
                break;
        }
    }while(menuChoice != 8);
    

    return 0;
}