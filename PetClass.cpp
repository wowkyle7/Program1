#include "PetClass.h"

// Default 
Pet::Pet()
{
    *species = ' ';
    sex = ' '; 
    age = 0; 
    price = 0.00; 
}

// Overloaded 
Pet::Pet(string s, char g, int a, double p)
{
    for(int i = 0; i < s.size(); i++){
        species[i] = s.at(i);
    } 
    sex = g; 
    age = a; 
    price = p; 
}

// Accessors 
char* Pet::getSpecies() const
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

