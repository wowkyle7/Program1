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

// Getters
void Pet::setSpecies(string s){
    species = s;
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
    cout << "Sex:\t\t" << toupper(sex) << endl;
    cout << "Age:\t\t" << age << endl;
    cout << "Price:\t\t$" << price << endl;
}