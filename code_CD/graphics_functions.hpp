#ifndef GRAPHICS_FUNCTIONS_HPP
#define GRAPHICS_FUNCTIONS_HPP


#include <iostream>     //
#include <windows.h>    // For windows functions
#include <conio.h>      // For the getch() function
#include <cstdlib>      // Pour clear system
#include <string>       // Pour utiliser les string
#include <fstream>      // Pour lire/ecrire un fichier
#include <random>       // Pour fonction al‚atoire
#include <ctime>        //

#include "mainInfo.cpp" // Pour les infos du jeu
#include "tamagotchi.hpp"
#include "AllLang.cpp"


using namespace std;    //

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

// Start language
int lang = 0;


string EggDef = "graphics/AllEggs/Egg_Def.txt";
string Egg1 = "graphics/AllEggs/Egg_1.txt";
string Egg2 = "graphics/AllEggs/Egg_2.txt";
string Egg3 = "graphics/AllEggs/Egg_3.txt";
string Egg4 = "graphics/AllEggs/Egg_4.txt";
string Egg5 = "graphics/AllEggs/Egg_5.txt";
string RandomImg = "graphics/AllEggs/RandomImg.txt";
string ListImgEgg[7] = {EggDef, Egg1, Egg2, Egg3, Egg4, Egg5, RandomImg};

// ADD HERE ALL DISPLY TAMA
//
//



// Function to change language
int chanLang(int choice);

// Function for random generation
int randomCustom(int MIN, int MAX, int type);

// Function that allows you to move the cursor in the Windows console
void gotoxy(int x, int y);

// Function for managing writing color
void color(int color);

// Function that allows you to stop the game (mainly debug)
void continu();

// Function for game window size
void Fenetre(int sizeX, int sizeY);

// Function to create a border
void Pborder(int startX, int startY, int endX, int endY, int space, int type);

// Function to create a text zone
void Ptext(int startX, int startY, int endX, int endY, int border, int spaceBorder, int typeBorder, string TEXT);

// Function to clean a part of the display || WARNING : the function may be slow !!!
void clearSpace(int startX, int startY, int endX, int endY);

// Function to display an image from a text file
void Pimg(int startX, int startY, string img);

// Function to display a progress bar
void progressBar(int startX, int startY, int size, int space, int type, int state);

// Function to display a two-dimensional menu || Set -1 to typeBorder for no border
int MenuSelect(int startX, int startY, int row, int column, int scaleTitleX, int scaleTitleY, int scaleBorder, int typeBorder, int typeMenu, int ColorSelect, string ListMenu[], int sizeList);

// Function for confirm exit
int confirm(int startX, int startY, int type);

// Function for language selection (program start)
int SelectLang();

// Function for cracked egg display
void Crackled(int WRITE);

// Function for background display
void Background();

// Update of tama stat display
void AllStatDisplay(Tamagotchi MainTAMA);


//voir si faire une fonction au dessus pour affichage tama


// Udapte Display Game
void UdapteDisplayGame(Tamagotchi MainTAMA, int BorderY);


#endif