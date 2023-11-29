#ifndef ALLLANG_HPP
#define ALLLANG_HPP

#include <string>
using namespace std;

#define COUNTLANG 2

// To change language add + total number (SizeLang)


// English version

// Type
extern int ListLang;
#define ENGLISH "ENGLISH"

// Select Language
extern int SelectLanguage;
#define INTRO_SELECT_LANG "Please choose your language to play this game:"

// Window info
extern int WindowInfo;
#define GAME_NAME "Tamagotchi  Game"
#define AT "AT"

// Intro text
extern int IntroText;
#define GAME_WELCOME "Welcome to the Tamagotchi game!\n\nGame developed by Bioubiou"

// Menu Main
extern int MenuMain;
#define NEW_GAME "NEW GAME"
#define CONTINUE "CONTINUE"
#define GRAVEYARD "GRAVEYARD"
#define SETTINGS "SETTINGS"
#define EXIT "EXIT"

// Menu Yes/No
extern int Menu_YesNo;
#define YES "YES"
#define NO "NO"

// Menu Quit
extern int MenuQuit;
#define QUIT_1 "Are you sure you want to return to the main menu?\nAny unsaved data will be lost."
#define QUIT_2 "Are you sure you want to quit the game?"

// Not dev
extern int NotDev;
#define NOT_DEV "NOT DEVELOPED YET"
#define PRESS_KEY "Press any key to continue..."

// Menu Pause
extern int MenuPause;
#define SAVE "SAVE"
#define MAIN_MENU "MAIN MENU"
#define CONFIRM_SAVE "Do you want to save?"

// Name choice
extern int NameChoice;
#define NAME_DESCRIPTION "You are going to start a new game with your Tamagotchi! ^^\nPlease choose a name before starting. (max size: 10)"
#define ASK_NAME_1 "Please enter the name of the Tamagotchi: "
#define ASK_NAME_2 "Please enter the new Tamagotchi name: "
#define TOO_LONG_1 "The name is too long, the maximum size is "
#define TOO_LONG_2 " characters."
// 5
#define CONFIRM_NAME "You chose: '"
#define ASK_CONFIRM_NAME "' Do you want to change his name? Y/n.   "
#define RETURN_CONFIRM_NAME1 "You have chosen to change his name."
#define RETURN_CONFIRM_NAME2 "You have chosen to keep his name."

// Egg Choice
extern int EggChoice;
#define TYPE_DESCRIPTION "Please now choose your Tamagotchi from these eggs!\nPlease note, this is final for this game so choose carefully. ^^"
#define EGG1 "STICKY EGG"
#define EGG2 "JUST AN EGG"
#define EGG3 "JELLY EGG"
#define EGG4 "SCARLET EGG"
// 5
#define EGG5 "GOLDEN EGG"
#define EGG_RANDOM "RANDOM"
#define CONFIRM_EGG "You chose:  "
#define ASK_CONFIRM_EGG "Keep the egg?"

// Intro Game
extern int Intro;
#define INTRO_1 "Welcome to the house that will welcome your Tamagotchi. It seems that you have not yet awakened your Tamagotchi, please touch it."
#define INTRO_1_1 "Touch the egg"
#define INTRO_1_2 "Run away"
#define INTRO_1_A "Are you really sure you want to give up your Tamagotchi egg? ;-;"
#define INTRO_1_A_QUIT "After thinking about it, you turned around and fled!!!"
// 5
#define INTRO_2 "You touched your egg. Wow, your Tamagotchi is hatching from its egg!"
#define INTRO_3 "Tadaa! Your Tamagotchi has been born, he looks happy to meet you."
#define INTRO_B "You've reached your Tamagotchi's house! Look out, here he comes!"

// End Game
extern int End;
#define END_1 "You feel your body become very light and then everything around you becomes blurred, as if in a dream..."

// State TAMAGOTCHI
extern int StateTAMA;
#define TAMA_HAPPY "HAPPY"
#define TAMA_SAD "SAD"
#define TAMA_SICK "SICK"
#define TAMA_TIRED "TIRED"
#define TAMA_AFFRAID "AFFRAID"
// 5
#define TAMA_AGGRESSIVE "AGGRESSIVE"
#define TAMA_CRAZY "CRAZY"
#define TAMA_DEFAULT "DEFAULT"
#define STATE "STATE"

// State Education
extern int StateEducation;
#define RUDE "RUDE"
#define NORMAL "NORMAL"
#define EXTRA_COOL "EXTRA COOL"
#define EDUCATION "EDUCATION"

// Stat display
extern int StatDisplay;
#define AGE "AGE"
#define DAY "DAY"
#define DAYS "DAYS"
#define HAPPINESS "HAPPINESS"
#define ENERGY "ENERGY"
// 5
#define HUNGER "HUNGER"
#define HYGIENE "HYGIENE"

// Menu Main Game
extern int MenuGameSelect;
#define FEED "FEED"
#define GAME "GAME"
#define DICIPLINE "DICIPLINE"
#define CLEAN "CLEAN"
#define MEDECINE "MEDECINE"
#define SLEEP "SLEEP"

// Menu Feed
extern int MenuFeed;
#define FEED1 "FEED1"
#define FEED2 "FEED2"
#define FEED3 "FEED3"
#define BACK "BACK"

// Menu Game
extern int MenuGame;
#define GAME1 "GAME1"
#define GAME2 "GAME2"
#define GAME3 "GAME3"

// Menu Dicipline
extern int MenuDicipline;
#define DICIPLINE1 "DICIPLINE1"
#define DICIPLINE2 "DICIPLINE2"
#define DICIPLINE3 "DICIPLINE3"

// Menu Clean
extern int MenuClean;
#define CLEAN1 "CLEAN1"
#define CLEAN2 "CLEAN2"

// Menu Medecine
extern int MenuMedecine;
#define MEDECINE1 "MEDECINE1"
#define MEDECINE2 "MEDECINE2"
#define MEDECINE3 "MEDECINE3"

// Menu Sleep
extern int MenuSleep;
#define SLEEP1 "SLEEP1"
#define SLEEP2 "SLEEP2"

// Error text
extern int ErrorText;
#define ERR_BORDER "ERR/BORD"
#define ERR_IMAGE_TEXT "ERR/IMG_TXT"
#define ERR_BAR_SHORT "ERR/BAR_SHORT"
#define ERR_MENU_NEED_SPACE "ERR/NEED_SPACE"


extern int SizeLang;




// Version Francaise

// Type
#define FRENCH "FRANCAIS"

// Select Language
#define INTRO_SELECT_LANG_FR "Veuillez choisir votre langue pour jouer … ce jeu :"

// Info de fenetre
#define GAME_NAME_FR "Jeu du Tamagotchi"
#define AT_FR "LE"

// Texte intro
#define GAME_WELCOME_FR "Bienvenue dans le jeu du Tamagotchi !\n\nJeu developpe par Bioubiou"

// Menu Principal
#define NEW_GAME_FR "NOUVELLE PARTIE"
#define CONTINUE_FR "CONTINUER"
#define GRAVEYARD_FR "CIMETIERE"
#define SETTINGS_FR "PARAMETRE"
#define EXIT_FR "QUITTER"

// Menu Oui/Non
#define YES_FR "OUI"
#define NO_FR "NON"

// Menu Quitter
#define QUIT_1_FR "Etes-vous s–r de vouloir retourner dans le menu principal ?\nToutes donn‚es non sauvegard‚es seront perdus."
#define QUIT_2_FR "Etes-vous s–r de vouloir quitter le jeu ?"

// Pas dev
#define NOT_DEV_FR "PAS ENCORE DEVELOPPE"
#define PRESS_KEY_FR "Appuyez sur n'importe quelle touche pour continuer..."

// Menu Pause
#define SAVE_FR "SAUVEGARDER"
#define MAIN_MENU_FR "MENU PRINCIPAL"
#define CONFIRM_SAVE_FR "Voulez vous sauvegarder ?"

// Choix nom
#define NAME_DESCRIPTION_FR "Vous allez commencer une nouvelle partie avec votre Tamagotchi ! ^^\nVeuillez choisir un nom avant de commencer. (taille max : 10)"
#define ASK_NAME_1_FR "Veuillez saisir le nom du Tamagotchi : "
#define ASK_NAME_2_FR "Veuillez entrer le nouveau nom Tamagotchi : "
#define TOO_LONG_1_FR "Le nom est trop long, la taille maximale est de "
#define TOO_LONG_2_FR " caractŠres."
// 5
#define CONFIRM_NAME_FR "Vous avez choisis : '"
#define ASK_CONFIRM_NAME_FR "' Voulez-vous changer son nom ? Y/n.   "
#define RETURN_CONFIRM_NAME1_FR "Vous avez choisi de changer son nom."
#define RETURN_CONFIRM_NAME2_FR "Vous avez choisi de garder son nom."

// Choix Oeuf
#define TYPE_DESCRIPTION_FR "Veuillez maintenant choisir votre Tamagotchi parmis ces oeufs !\nAttention cela est definitif pour cette partie alors choisissez bien. ^^"
#define EGG1_FR "OEUF COLLANT"
#define EGG2_FR "JUSTE UN OEUF"
#define EGG3_FR "OEUF EN GELEE"
#define EGG4_FR "OEUF ECARLATE"
// 5
#define EGG5_FR "OEUF DORE"
#define EGG_RANDOM_FR "ALEATOIRE"
#define CONFIRM_EGG_FR "Votre choix :  "
#define ASK_CONFIRM_EGG_FR "Gardez l'oeuf ?"

// Intro du jeu
#define INTRO_1_FR "Bienvenue dans la maison qui va acceuillir votre Tamagotchi. Il semblerai que vous n'ayez pas encore eveille votre Tamagotchi, veuillez le toucher."
#define INTRO_1_1_FR "Toucher l'oeuf"
#define INTRO_1_2_FR "S'enfuir en courrant"
#define INTRO_1_A_FR "Etes-vous vraiment s–r de vouloir abandonner votre oeuf de Tamagotchi ? ;-;"
#define INTRO_1_A_QUIT_FR "AprŠs y avoir longuement r‚fl‚chi, vous vous ˆtes retourn‚ et vous vous ˆtes enfui !!!"
// 5
#define INTRO_2_FR "Vous avez touch‚ votre oeuf. Wow, votre Tamagotchi sort de son oeuf !"
#define INTRO_3_FR "Tadaa ! Votre Tamagochi est n‚, il a l'air heureux de vous rencontrer."
#define INTRO_B_FR "Vous arrivez dans la maison de votre Tamagotchi ! Attention le voil… !"

// Fin du jeu
#define END_1_FR "Vous sentez votre corps devenir trŠs l‚ger puis tout deviens flou autour de vous comme dans un rˆve..."

// Etat TAMAGOTCHI
#define TAMA_HAPPY_FR "HEUREUX"
#define TAMA_SAD_FR "TRISTE"
#define TAMA_SICK_FR "MALADE"
#define TAMA_TIRED_FR "FATIGUE"
#define TAMA_AFFRAID_FR "EFFRAYE"
// 5
#define TAMA_AGGRESSIVE_FR "AGGRESSIF"
#define TAMA_CRAZY_FR "FOU"
#define TAMA_DEFAULT_FR "PAR_DEFAUT"
#define STATE_FR "ETAT "

// Etat Education
#define RUDE_FR "MALPOLI"
#define NORMAL_FR "NORMAL"
#define EXTRA_COOL_FR "EXTRA COOL"
#define EDUCATION_FR "EDUCATION "


// Stat display
#define AGE_FR "AGE "
#define DAY_FR "JOUR"
#define DAYS_FR "JOURS"
#define HAPPINESS_FR "JOIE"
#define ENERGY_FR "ENERGIE"
#define HUNGER_FR "FAIM"
#define HYGIENE_FR "HYGIENE"

// Menu Jeu Principal
#define FEED_FR "NOURRIR"
#define GAME_FR "JEUX"
#define DICIPLINE_FR "EDUQUER"
#define CLEAN_FR "NETTOYER"
#define MEDECINE_FR "MEDICAMENT"
#define SLEEP_FR "DORMIR"


// Menu Nourrir
#define FEED1_FR "NOURRIR1"
#define FEED2_FR "NOURRIR2"
#define FEED3_FR "NOURRIR3"
#define BACK_FR "RETOUR"

// Menu Jeu
#define GAME1_FR "JEU1"
#define GAME2_FR "JEU2"
#define GAME3_FR "JEU3"

// Menu Eduquer
#define DICIPLINE1_FR "EDUQUER1"
#define DICIPLINE2_FR "EDUQUER2"
#define DICIPLINE3_FR "EDUQUER3"


// Menu Nettoyer
#define CLEAN1_FR "NETTOYER1"
#define CLEAN2_FR "NETTOYER2"

// Menu Medicament
#define MEDECINE1_FR "MEDICAMENT1"
#define MEDECINE2_FR "MEDICAMENT2"
#define MEDECINE3_FR "MEDICAMENT3"

// Menu Dormir
#define SLEEP1_FR "DORMIR1"
#define SLEEP2_FR "DORMIR2"

// Message Erreur
#define ERR_BORDER_FR "ERR/BORD"
#define ERR_IMAGE_TEXT_FR "ERR/IMG_TXT"
#define ERR_BAR_SHORT_FR "ERR/BAR_COURTE"
#define ERR_MENU_NEED_SPACE_FR "ERR/BESOIN_ESPACE"



extern string ListText[];

#endif