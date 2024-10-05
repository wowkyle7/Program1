#include "PetStoreClass.h"
// #include <cctype>

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

    // temp variables for pet
    string temp_pet_species;
    char temp_pet_sex;
    int temp_pet_age;
    double temp_pet_price;

    // prompt user for max array size
    do{
        cout << "\nEnter max number of customers:\t";
        cin >> C_SIZE;
    }while(C_SIZE < 1);
    do{
        cout << "\nEnter max number of pets:\t";
        cin >> P_SIZE;
    }while(P_SIZE < 1);

    // dynamically allocate pointers to max sizes
    petStore.setArrSize(C_SIZE, P_SIZE);

    cout << endl;
    do{
        // print menu
        cout << endl << endl << string(20, '*') << " MENU " << string(20, '*') << endl;
        cout << "1. Add Customer" << endl;
        cout << "2. Add Pet" << endl;
        cout << "3. Delete Customer" << endl;
        cout << "4. Delete Pet" << endl;
        cout << "5. Print All" << endl;
        cout << "6. Exit Program" << endl;

        cout << "\nEnter Choice: ";
        cin >> menuChoice;

        switch(menuChoice){
            default: 
                cout << "Invalid input!";
                break;

            case 1: // ADD CUSTOMER TO PETSTORE
                if(current_c_index >= C_SIZE){
                    cout << "\nCannot enter more than " << C_SIZE << " customers!" << endl;
                    break;
                }
                for(int i = 0; i < 10; i++)
                    customer_num_as_int[i] = 0;
                cout << endl << string(20, '*') << " ADD CUSTOMER " << string(20, '*') << endl;
                cout << "\nPlease Enter Name:\t\t\t";
                cin.ignore();
                getline(cin, temp_customer_name);
                do{
                    cout << "\nPlease enter a TEN digit phone number:\t";
                    getline(cin, temp_customer_num);
                }while(static_cast<int>(temp_customer_num.length()) > 10);
                cout << "\nPlease enter age:\t\t\t";
                cin >> temp_customer_age;
                cout << "\nPlease enter in your max budget:\t$";
                cin >> temp_customer_budget;

                // convert string of phone number to int* of phone number
                for(int i = 0; i < static_cast<int>(temp_customer_num.length()); i++)
                    customer_num_as_int[i] = int(temp_customer_num.at(i) - '0');

                current_c_index = petStore.addCustomer(temp_customer_name, customer_num_as_int, temp_customer_age, temp_customer_budget, current_c_index);
                break;

            case 2: // ADD PET TO PETSTORE
                if(current_p_index >= P_SIZE){
                    cout << "\nCannot enter more than " << P_SIZE << " pets!" << endl;
                    break;
                }
                cout << endl << string(20, '*') << " ADD PET " << string(20, '*') << endl;
                do{
                    cout << "\nPlease enter species (max " << STR_SIZE << " characters):\t";
                    cin.ignore();
                    getline(cin, temp_pet_species);
                }while(static_cast<int>(temp_pet_species.length()) > STR_SIZE);
                cout << "\nPlease enter sex (M or F):\t\t\t";
                cin >> temp_pet_sex;
                temp_pet_sex = toupper(temp_pet_sex);
                cout << "\nPlease enter age:\t\t\t\t";
                cin >> temp_pet_age;
                cout << "\nPlease enter price:\t\t\t\t$";
                cin >> temp_pet_price;

                current_p_index = petStore.addPet(temp_pet_species, temp_pet_sex, temp_pet_age, temp_pet_price, current_p_index);
               
                break;

            case 3: // DELETE CUSTOMER FROM PETSTORE
                if(current_c_index != 0){
                    current_c_index = petStore.deleteCustomer(current_c_index);
                    cout << "\nMost Recent Customer Entry Deleted" << endl;
                }
                else
                    cout << "\nNo Customer Data to Delete!" << endl;
                break;

            case 4: // DELETE PET FROM PETSTORE
                if(current_p_index != 0){
                    current_p_index = petStore.deletePet(current_p_index);
                    cout << "\nMost Recent Pet Entry Deleted" << endl;
                }
                else
                    cout << "\nNo Pet Data to Delete!" << endl;
                break;

            case 5: // PRINT ALL PETS & CUSTOMERS
                petStore.printAll(current_c_index, current_p_index);
                break;
            case 6: // EXIT PROGRAM
                delete [] customer_num_as_int;
                cout << "\nHave a good day!" << endl;
                break;
        }
    }while(menuChoice != 6);
    
    cin.clear();
    return 0;
}