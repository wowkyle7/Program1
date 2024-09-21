#ifndef PET_H
#define PET_H

#include <iostream>
#include <iomanip>

using namespace std;

class Pet 
{
    private: 
        string species; 
        string name;
        char sex; 
        int age;
        double price; 

    public: 
    // Constructors
    Pet();
    Pet(string, string, char, int, double); 

    // Accessors 
    string getSpecies() const;
    string getName() const; 
    char getSex() const; 
    int getAge() const; 
    double getPrice() const; 

    // Mutators (Setters)
    void setSpecies(string s); 
    void setName(string n);
    void getSex(char g); 
    void setAge(int a); 
    void setPrice(double p); 

};

#endif

