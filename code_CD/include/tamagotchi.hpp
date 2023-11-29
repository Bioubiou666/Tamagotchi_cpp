#ifndef TAMAGOTCHI_HPP
#define TAMAGOTCHI_HPP

#include <string>
using namespace std;
#include <iostream>
#include <fstream>

class Tamagotchi {
private:
    string Name;        // Private attribute representing the name (maximum number of changes defined by MAX_CHANGE)
    int MAX_CHANGE;     // Private attribute representing the maximum allowed number of changes (min 0)
    int Type;           // Private attribute representing the type (0 = no type; max 5)

    int Age;            // Private attribute representing the age in days
    int Evolved;        // Private attribute representing the state of evolution (0 = egg, 1 = no evolved, 2 = evolved)
    int State;          // Private attribute representing the state (0 = default, 1 = happy, 2 = sad, 3 = sick, 4 = tired, 5 = affraid, 6 = aggressive, 7 = crazy)

    int Energy;         // Private attribute representing energy (min 0; maxE)
    int maxE;           // Private attribute representing the maximum energy (min 10)

    int Hunger;         // Private attribute representing hunger (min 0; maxH)
    int maxH;           // Private attribute representing the maximum hunger (min 10)

    int Happiness;      // Private attribute representing happiness (min 0; maxHp)
    int maxHp;          // Private attribute representing the maximum happiness (min 10)

    int Hygiene;        // Private attribute representing hygiene (min 0; maxC)
    int maxC;           // Private attribute representing the maximum hygiene (min 10)

    int Education;      // Private attribute representing education (min 0; maxEd)
    int maxEd;          // Private attribute representing the maximum education (min 10)

    // Private setter for energy
    void setEnergy(int ENERGY);

    // Private setter for hunger
    void setHunger(int HUNGER);

    // Private setter for Happiness
    void setHappiness(int HAPPINESS);

    // Private setter for Hygiene
    void setHygiene(int HYGIENE);

    // Private setter for Education
    void setEducation(int EDUCATION);


public:
    // Default constructor
    Tamagotchi();

    // Semi Overloaded constructor ONLY NAME
    Tamagotchi(string NAME);

    // Full Overloaded constructor
    Tamagotchi(string NAME, int TYPE);

    // Destructor
    ~Tamagotchi();

    // Getter for the name
    string getName();

    // Getter for type
    int getType();

    // Getter for age
    int getAge();

    // Getter fo Evolved
    int getEvolved();

    // Getter for state
    int getState();

    // Getter for energy
    int getEnergy();

    // Getter for hunger
    int getHunger();

    // Getter for happiness
    int getHappiness();

    // Getter for Hygiene
    int getHygiene();

    // Getter for education
    int getEducation();

    // Getter for maxE
    int getMaxE();

    // Getter for maxH
    int getMaxH();

    // Getter for maxHp
    int getMaxHp();

    // Getter for maxC
    int getMaxC();

    // Getter for maxEd
    int getMaxEd();


    // Method to change the name
    int changeName(string NAME);

    // Method to up age
    void AgeUp();

    // Method to update evolve
    void Evolve();

    // Method to update state
    void UpdateState();

    // Method to save game
    bool Save();

    // Method to load game
    bool Load();
    

    // Method to feed
    void Feed1();

    void Feed2();

    void Feed3();

    // Method to game
    void Game1();

    void Game2();

    void Game3();

    // Method to clean
    void Clean1();

    void Clean2();

    // Method to medecine
    void Medecine1();

    void Medecine2();

    void Medecine3();

    // Method to put to sleep 1
    void Sleep1();

    void Sleep2();
};

#endif