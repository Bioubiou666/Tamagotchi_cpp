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

#include "tamagotchi.hpp"
#include "AllLang.hpp"


using namespace std;    //

// Main game information

#define gameName "Tamagotchi"
#define gameVersion "V0.1"
#define gameVersionDate "09/13/23"
#define sizeWinX 119
#define sizeWinY 30

// define key press
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

// Start language
extern int lang;


extern string EggDef;
extern string Egg1;
extern string Egg2;
extern string Egg3;
extern string Egg4;
extern string Egg5;
extern string RandomImg;
extern string ListImgEgg[7];

extern string DefImg;

// ADD HERE ALL DISPLAY TAMA
//
//

extern string allLang;


// Function to create list all language
int MakeLang();

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

#endif