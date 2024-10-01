#include "PetClass.h"

// Default 
Pet::Pet()
{
    species = " ";
    sex = ' '; 
    age = 0; 
    price = 0.00; 
}

// Overloaded 
Pet::Pet(string s, char g, int a, double p)
{
    species = s;
    sex = g; 
    age = a; 
    price = p; 
}

// Accessors 
string Pet::getSpecies() const
{
    return species; 
}
char Pet::getSex() const
{
    return sex; 
}
int Pet::getAge() const
{
    return age; 
}
double Pet::getPrice() const
{
    return price; 
}

// Function
void Pet::printPet(){
    cout << setprecision(2);
    cout << "Species: " << species << endl;
    cout << "Sex: " << toupper(sex) << endl;
    cout << "Age: " << age << endl;
    cout << "Price: $" << price << endl;
}