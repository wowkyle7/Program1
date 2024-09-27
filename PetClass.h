#ifndef PETCLASS_H
#define PETCLASS_H

#include <iostream>
#include <iomanip>

using namespace std;

class Pet 
{
    private: 
        char* species; 
        char sex; 
        int age;
        double price;

    public: 
        // Constructors
        Pet();
        Pet(string, char, int, double); 

        // Accessors 
        char* getSpecies() const;
        char getSex() const; 
        int getAge() const; 
        double getPrice() const; 

        // Mutators (Setters)
        void setSpecies(char* s); 
        void getSex(char g); 
        void setAge(int a); 
        void setPrice(double p); 

};

#endif

