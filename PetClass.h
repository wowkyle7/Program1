#ifndef PETCLASS_H
#define PETCLASS_H

#include <iostream>
#include <iomanip>

using namespace std;

const int STR_SIZE = 30;
class Pet 
{
    private:
        // Variables 
        char* species; 
        char sex; 
        int age;
        double price;

    public: 
        // Default Constructor
        Pet();

        // Overloaded Constructor
        Pet(string, char, int, double); 
        
        // Deconstructor
        ~Pet();

        // Accessors 
        string getSpecies() const;
        char getSex() const; 
        int getAge() const; 
        double getPrice() const; 

        // Mutators (Setters)
        void setSpecies(string s); 
        void setSex(char g); 
        void setAge(int a); 
        void setPrice(double p); 

        // Function(s)
        void printPet();
};

#endif