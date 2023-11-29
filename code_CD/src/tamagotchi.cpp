#include "../include/tamagotchi.hpp"

// Default constructor
Tamagotchi::Tamagotchi() {
    Name = "NO_NAME";
    Type = 0;
    Age = 0;
    Evolved = 0;
    State = 0;
    Energy = 10;
    Hunger = 10;
    Happiness = 10;
    Hygiene = 10;
    Education = 5;
    MAX_CHANGE = 1;
    maxE = 10;
    maxH = 10;
    maxHp = 10;
    maxC = 10;
    maxEd = 10;
}

// Semi overloaded constructor ONLY NAME
Tamagotchi::Tamagotchi(string NAME) {
    Name = NAME;
    Type = 1;
    Age = 0;
    Evolved = 0;
    State = 1;
    Energy = 10;
    Hunger = 10;
    Happiness = 10;
    Hygiene = 10;
    Education = 5;
    MAX_CHANGE = 1;
    maxE = 10;
    maxH = 10;
    maxHp = 10;
    maxC = 10;
    maxEd = 10;
}

// Full overloaded constructor
Tamagotchi::Tamagotchi(string NAME, int TYPE) {
    Name = NAME;
    Type = TYPE;
    Age = 0;
    Evolved = 0;
    State = 1;
    Energy = 10;
    Hunger = 10;
    Happiness = 10;
    Hygiene = 10;
    Education = 5;
    MAX_CHANGE = 1;
    maxE = 10;
    maxH = 10;
    maxHp = 10;
    maxC = 10;
    maxEd = 10;
}

// Destructor
Tamagotchi::~Tamagotchi() {}

// Getter for the name
string Tamagotchi::getName() {
    return Name;
}

// Getter for type
int Tamagotchi::getType() {
    return Type;
}

// Getter for age
int Tamagotchi::getAge() {
    return Age;
}

// Getter fo Evolved
int Tamagotchi::getEvolved() {
    return Evolved;
}

// Getter for state
int Tamagotchi::getState() {
    return State;
}

// Getter for energy
int Tamagotchi::getEnergy() {
    return Energy;
}

// Getter for hunger
int Tamagotchi::getHunger() {
    return Hunger;
}

// Getter for happiness
int Tamagotchi::getHappiness() {
    return Happiness;
}

// Getter for Hygiene
int Tamagotchi::getHygiene() {
    return Hygiene;
}

int Tamagotchi::getEducation() {
    return Education;
}

// Getter for maxE
int Tamagotchi::getMaxE() {
    return maxE;
}

// Getter for maxH
int Tamagotchi::getMaxH() {
    return maxH;
}

// Getter for maxHp
int Tamagotchi::getMaxHp() {
    return maxHp;
}

// Getter for maxC
int Tamagotchi::getMaxC() {
    return maxC;
}

// Getter for maxEd
int Tamagotchi::getMaxEd() {
    return maxEd;
}


// Private setter for energy
void Tamagotchi::setEnergy(int ENERGY) {
    if (ENERGY >= maxE) {
        Energy = maxE;
    }
    else if (ENERGY <= 0) {
        Energy = 0;
    }
    else {
        Energy = ENERGY;
    }
}

// Private setter for hunger
void Tamagotchi::setHunger(int HUNGER) {
    if (HUNGER >= maxH) {
        Hunger = maxH;
    }
    else if (HUNGER <= 0) {
        Hunger = 0;
    }
    else {
        Hunger = HUNGER;
    }
}

// Private setter for Happiness
void Tamagotchi::setHappiness(int HAPPINESS) {
    if (HAPPINESS >= maxHp) {
        Happiness = maxHp;
    }
    else if (HAPPINESS <= 0) {
        Happiness = 0;
    }
    else {
        Happiness = HAPPINESS;
    }
}

// Private setter for Hygiene
void Tamagotchi::setHygiene(int HYGIENE) {
    if (HYGIENE >= maxC) {
        Hygiene = maxC;
    }
    else if (HYGIENE <= 0) {
        Hygiene = 0;
    }
    else {
        Hygiene = HYGIENE;
    }
}

// Private setter for Education
void Tamagotchi::setEducation(int EDUCATION) {
    if (EDUCATION >= maxEd) {
        Education = maxEd;
    }
    else if (EDUCATION <= 0) {
        Education = 0;
    }
    else {
        Education = EDUCATION;
    }
}


// Method to change the name
int Tamagotchi::changeName(string NAME) {
    if (MAX_CHANGE > 0) {
        Name = NAME;
        MAX_CHANGE --;
        return 0;
    }
    else {
        return 1;
    }
}

// Method to age
void Tamagotchi::AgeUp() {
    Age ++;
}

// Method to update evolve
void Tamagotchi::Evolve() {
    if (Evolved < 0) {
        Evolved = 0;
    }
    else if (Evolved < 2) {
        Evolved++;
    }
    else {
        Evolved = 2;
    }
}

// Method to update state
void Tamagotchi::UpdateState() {
    //zzz
}

// Method to save game
bool Tamagotchi::Save() {
    string fileName = "../data/save/save_game.txt";
    ofstream file(fileName);

    if (file.is_open()) {
        file << Name << endl;
        file << Type << endl;
        file << Age << endl;
        file << Evolved << endl;
        file << State << endl;
        file << Energy << endl;
        file << Hunger << endl;
        file << Happiness << endl;
        file << Hygiene << endl;
        file << Education << endl;
        file << MAX_CHANGE << endl;
        file << maxE << endl;
        file << maxH << endl;
        file << maxHp << endl;
        file << maxC << endl;
        file << maxEd << endl;

        file.close();
        return 1;
    } else {
        cerr << "Unable to open file " << fileName << endl;
        return 0;
    }
}

// Method to load game
bool Tamagotchi::Load() {
    string fileName = "../data/save/save_game.txt";
    ifstream file(fileName);

    if (file.is_open()) {
        file >> Name;
        file >> Type;
        file >> Age;
        file >> Evolved;
        file >> State;
        file >> Energy;
        file >> Hunger;
        file >> Happiness;
        file >> Hygiene;
        file >> Education;
        file >> MAX_CHANGE;
        file >> maxE;
        file >> maxH;
        file >> maxHp;
        file >> maxC;
        file >> maxEd;

        file.close();
        return 1;
    } else {
        cerr << "Unable to open file " << fileName << endl;
        return 0;
    }
}


// Method to feed 1
void Tamagotchi::Feed1() {
    setHunger(Hunger + maxH/3);
    setHappiness(Happiness + maxHp/10);
    setEnergy(Energy - maxE/10);
}

// Method to feed 2
void Tamagotchi::Feed2() {
    setHunger(Hunger + maxH/2);
    setHappiness(Happiness + maxHp/10);
    setEnergy(Energy - maxE/5);
}

// Method to feed 3
void Tamagotchi::Feed3() {
    setHunger(maxH);
    setHappiness(Happiness + maxHp/10);
    setEnergy(Energy - maxE/3);
}

// Method to game 1
void Tamagotchi::Game1() {
    setHappiness(Happiness + maxHp/5);
    setEnergy(Energy - maxE/5);
    setHunger(Hunger - maxH/5);
}

// Method to game 2
void Tamagotchi::Game2() {
    setHappiness(Happiness + maxHp/5);
    setEnergy(Energy - maxE/5);
    setHunger(Hunger - maxH/5);
}

// Method to game 3
void Tamagotchi::Game3() {
    setHappiness(Happiness + maxHp/5);
    setEnergy(Energy - maxE/5);
    setHunger(Hunger - maxH/5);
}

// Method to clean 1
void Tamagotchi::Clean1() {
    setHappiness(Happiness + maxHp/10);
    setHygiene(Hygiene + maxC/2);
    setEnergy(Energy - maxE/10);

}

// Method to clean 2
void Tamagotchi::Clean2() {
    setHappiness(Happiness + maxHp/10);
    setHygiene(maxC);
    setEnergy(Energy - maxE/5);
}

// Method to medecine 1
void Tamagotchi::Medecine1() {
}

// Method to medecine 2
void Tamagotchi::Medecine2() {
}

// Method to medecine 3
void Tamagotchi::Medecine3() {
}

// Method to put to sleep 1
void Tamagotchi::Sleep1() {
    setEnergy(Energy + maxE/2);
    setHappiness(Happiness + maxHp/10);
    setHunger(Hunger - maxH/10);
}

// Method to put to sleep 2
void Tamagotchi::Sleep2() {
    setEnergy(maxE);
    setHappiness(Happiness + maxHp/10);
    setHunger(Hunger - maxH/5);
}