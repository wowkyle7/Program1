#include "PetClass.h"

// Default 
Pet::Pet()
{
    species = new char[STR_SIZE];
    for(int i = 0; i < STR_SIZE; i++)
        species[i] = '\0';
    sex = ' '; 
    age = -1; 
    price = -1.0; 
}

// Overloaded 
Pet::Pet(string s, char g, int a, double p)
{
    species = new char[STR_SIZE];
    for(int i = 0; i < STR_SIZE; i++)
        species[i] = '\0';
    for(int i = 0; i < static_cast<int>(s.length()); i++)
        species[i] = s.at(i);
    sex = g; 
    age = a; 
    price = p; 
}

Pet::~Pet(){
    delete [] species;
}

// Accessors 
string Pet::getSpecies() const
{
    string s;
    for(int i = 0; i < static_cast<int>(s.length()); i++)
        s.at(i) = species[i];
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

// Getters
void Pet::setSpecies(string s){
    species = new char[STR_SIZE];
    for(int i = 0; i < STR_SIZE; i++)
        species[i] = '\0';
    for(int i = 0; i < static_cast<int>(s.length()); i++)
        species[i] = s.at(i);
} 
void Pet::setSex(char g){
    sex = g;
} 
void Pet::setAge(int a){
    age = a;
}
void Pet::setPrice(double p){
    price = p;
}

// Function
void Pet::printPet(){
    cout << fixed << setprecision(2);
    cout << "Species:\t" << species << endl;
    cout << "Sex:\t\t" << sex << endl;
    cout << "Age:\t\t" << age << endl;
    cout << "Price:\t\t$" << price << endl;
}