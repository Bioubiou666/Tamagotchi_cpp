#ifndef ALLDISPLAYS_HPP
#define ALLDISPLAYS_HPP

#include "graphics_functions.hpp"

// Default Page
void DefaultPage();

// Graveyard Page
void mainGraveyard();

// Settings Page
void mainSettings();

// Pause Window
int pauseWindow(Tamagotchi MainTAMA);


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


// Function for cracked egg display
void Crackled(int WRITE);

// Function for background display
void Background();

// Update of tama stat display
void AllStatDisplay(Tamagotchi MainTAMA);

// Function for image of Tamagotchi display
void ImgTamaDisplay(Tamagotchi MainTAMA);

// Udapte Display Game
void UdapteDisplayGame(Tamagotchi MainTAMA, int BorderY);

// Function for hatching egg
bool hatching(Tamagotchi MainTAMA);

// Main game function
void mainGame(int test, Tamagotchi MainTAMA);

#endif
