#ifndef ALLDISPLAYS_HPP
#define ALLDISPLAYS_HPP

#include "graphics_functions.hpp"

// Default Page
void DefaultPage();

// Save Page
void mainSave();

// Graveyard Page
void mainGraveyard();

// Settings Page
void mainSettings();

// Pause Window
int pauseWindow();


//
//
//  Fonctions for Main Game
//
//

// Function for displaying name selection tama
void mainNewGameDisplay(char &test, string &NAME, int choice);

// Main function name selection tama
string mainNewGameNAME();

// Function to confirm egg selection
int confirmEgg(string selectName, string selectImg);

// Function for egg selection
int mainNewGameTYPE();

// Main game function
void mainGame(Tamagotchi MainTAMA);

#endif
