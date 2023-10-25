#include <string>
using namespace std;

#define CountLang 2

// To change language add + total number (SizeLang)


// English version

// Type
int ListLang = 0;
string ENGLISH = "ENGLISH";

// Select Language
int SelectLanguage = ListLang + 1;
string INTRO_SELECT_LANG = "Please choose your language to play this game:";

// Window info
int WindowInfo = SelectLanguage + 1;
string GAME_NAME = "Tamagotchi  Game";
string AT = "AT";

// Intro text
int IntroText = WindowInfo + 2;
string GAME_WELCOME = "Welcome to the Tamagotchi game!\n\nGame developed by Bioubiou";

// Menu Main
int MenuMain = IntroText + 1;
string NEW_GAME = "NEW GAME";
string CONTINUE = "CONTINUE";
string GRAVEYARD = "GRAVEYARD";
string SETTINGS = "SETTINGS";
string EXIT = "EXIT";

// Menu Yes/No
int Menu_YesNo = MenuMain + 5;
string YES = "YES";
string NO = "NO";

// Menu Quit
int MenuQuit = Menu_YesNo + 2;
string QUIT_1 = "Are you sure you want to return to the main menu?\nAny unsaved data will be lost.";
string QUIT_2 = "Are you sure you want to quit the game?";

// Not dev
int NotDev = MenuQuit + 2;
string NOT_DEV = "NOT DEVELOPED YET";
string PRESS_KEY = "Press any key to continue...";

// Name choice
int NameChoice = NotDev + 2;
string NAME_DESCRIPTION = "You are going to start a new game with your Tamagotchi! ^^\nPlease choose a name before starting. (max size: 10)";
string ASK_NAME_1= "Please enter the name of the Tamagotchi: ";
string ASK_NAME_2= "Please enter the new Tamagotchi name: ";
string TOO_LONG_1= "The name is too long, the maximum size is ";
string TOO_LONG_2 = " characters.";
// 5
string CONFIRM_NAME = "You chose: '";
string ASK_CONFIRM_NAME = "' Do you want to change his name? Y/n.   ";
string RETURN_CONFIRM_NAME1 = "You have chosen to change his name.";
string RETURN_CONFIRM_NAME2 = "You have chosen to keep his name.";

// Egg Choice
int EggChoice = NameChoice + 9;
string TYPE_DESCRIPTION = "Please now choose your Tamagotchi from these eggs!\nPlease note, this is final for this game so choose carefully. ^^"; //"Veuillez maintenant choisir votre Tamagotchi parmis ces oeufs !\nAttention cela est definitif pour cette partie alors choisissez bien. ^^""
string EGG1 = "STICKY EGG";
string EGG2 = "JUST AN EGG";
string EGG3 = "JELLY EGG";
string EGG4 = "SCARLET EGG";
// 5
string EGG5 = "GOLDEN EGG";
string EGG_RANDOM = "RANDOM";
string CONFIRM_EGG = "You chose:  ";
string ASK_CONFIRM_EGG = "Keep the egg?";

// Intro
int Intro = EggChoice + 9;
string INTRO_1 = "Welcome to the house that will welcome your Tamagotchi. It seems that you have not yet awakened your Tamagotchi, please touch it.";//"Bienvenue dans la maison qui va acceuillir votre Tamagotchi. Il semblerai que vous n'ayez pas encore eveille votre Tamagotchi, veuillez le toucher."
string INTRO_1_1 = "Touch the egg";
string INTRO_1_2 = "Run away";
string INTRO_1_A = "Are you really sure you want to give up your Tamagotchi egg? ;-;";
string INTRO_1_A_QUIT = "After thinking about it, you turned around and fled!!!";
// 5
string INTRO_2 = "You touched your egg. Wow, your Tamagotchi is hatching from its egg!";
string INTRO_3 = "Tadaa! Your Tamagotchi has been born, he looks happy to meet you.";

// State TAMAGOTCHI
int StateTAMA = Intro + 7;
string TAMA_HAPPY = "HAPPY";
string TAMA_SAD = "SAD";
string TAMA_SICK = "SICK";
string TAMA_TIRED = "TIRED";
string TAMA_AFFRAID = "AFFRAID";
// 5
string TAMA_AGGRESSIVE = "AGGRESSIVE";
string TAMA_CRAZY = "CRAZY";
string TAMA_DEFAULT = "DEFAULT";
string STATE = "STATE";

// State Education
int StateEducation = StateTAMA + 9;
string RUDE = "RUDE";
string NORMAL = "NORMAL";
string EXTRA_COOL = "EXTRA COOL";
string EDUCATION = "EDUCATION";

// Stat display
int StatDisplay = StateEducation + 4;
string AGE = "AGE";
string DAY = "DAY";
string DAYS = "DAYS";
string HAPPINESS = "HAPPINESS";
string ENERGY = "ENERGY";
// 5
string HUNGER = "HUNGER";
string HYGIENE = "HYGIENE";

// Menu Main Game
int MenuGameSelect = StatDisplay + 7;
string FEED = "FEED";
string GAME = "GAME";
string DICIPLINE = "DICIPLINE";
string CLEAN = "CLEAN";
string MEDECINE = "MEDECINE";
string SLEEP = "SLEEP";

// Menu Feed
int MenuFeed = MenuGameSelect + 6;
string FEED1 = "FEED1";
string FEED2 = "FEED2";
string FEED3 = "FEED3";
string BACK = "BACK";

// Menu Game
int MenuGame = MenuFeed + 4;
string GAME1 = "GAME1";
string GAME2 = "GAME2";
string GAME3 = "GAME3";

// Menu Dicipline
int MenuDicipline = MenuGame + 3;
string DICIPLINE1 = "DICIPLINE1";
string DICIPLINE2 = "DICIPLINE2";
string DICIPLINE3 = "DICIPLINE3";

// Menu Clean
int MenuClean = MenuDicipline + 3;
string CLEAN1 = "CLEAN1";
string CLEAN2 = "CLEAN2";

// Menu Medecine
int MenuMedecine = MenuClean + 2;
string MEDECINE1 = "MEDECINE1";
string MEDECINE2 = "MEDECINE2";
string MEDECINE3 = "MEDECINE3";

// Menu Sleep
int MenuSleep = MenuMedecine + 3;
string SLEEP1 = "SLEEP1";
string SLEEP2 = "SLEEP2";

// Error text
int ErrorText = MenuSleep + 2;
string ERR_BORDER = "ERR/BORD";
string ERR_IMAGE_TEXT = "ERR/IMG_TXT";
string ERR_BAR_SHORT = "ERR/BAR_SHORT";
string ERR_MENU_NEED_SPACE = "ERR/NEED_SPACE";


int SizeLang = ErrorText + 4;




// Version Francaise

// Type
string FRENCH = "FRANCAIS";

// Select Language
string INTRO_SELECT_LANG_FR = "Veuillez choisir votre langue pour jouer … ce jeu :";

// Info de fenetre
string GAME_NAME_FR = "Jeu du Tamagotchi";
string AT_FR = "LE";

// Texte intro
string GAME_WELCOME_FR = "Bienvenue dans le jeu du Tamagotchi !\n\nJeu developpe par Bioubiou";

// Menu Principal
string NEW_GAME_FR = "NOUVELLE PARTIE";
string CONTINUE_FR = "CONTINUER";
string GRAVEYARD_FR = "CIMETIERE";
string SETTINGS_FR = "PARAMETRE";
string EXIT_FR = "QUITTER";

// Menu Oui/Non
string YES_FR = "OUI";
string NO_FR = "NON";

// Menu Quitter
string QUIT_1_FR = "Etes-vous s–r de vouloir retourner dans le menu principal ?\nToutes donn‚es non sauvegard‚es seront perdus.";
string QUIT_2_FR = "Etes-vous s–r de vouloir quitter le jeu ?";

// Pas dev
string NOT_DEV_FR = "PAS ENCORE DEVELOPPE";
string PRESS_KEY_FR = "Appuyez sur n'importe quelle touche pour continuer...";

// Choix nom
string NAME_DESCRIPTION_FR = "Vous allez commencer une nouvelle partie avec votre Tamagotchi ! ^^\nVeuillez choisir un nom avant de commencer. (taille max : 10)";
string ASK_NAME_1_FR = "Veuillez saisir le nom du Tamagotchi : ";
string ASK_NAME_2_FR = "Veuillez entrer le nouveau nom Tamagotchi : ";
string TOO_LONG_1_FR = "Le nom est trop long, la taille maximale est de ";
string TOO_LONG_2_FR = " caractŠres.";
// 5
string CONFIRM_NAME_FR = "Vous avez choisis : '";
string ASK_CONFIRM_NAME_FR = "' Voulez-vous changer son nom ? Y/n.   ";
string RETURN_CONFIRM_NAME1_FR = "Vous avez choisi de changer son nom.";
string RETURN_CONFIRM_NAME2_FR = "Vous avez choisi de garder son nom.";

// Choix Oeuf
string TYPE_DESCRIPTION_FR = "Veuillez maintenant choisir votre Tamagotchi parmis ces oeufs !\nAttention cela est definitif pour cette partie alors choisissez bien. ^^";
string EGG1_FR = "OEUF COLLANT";
string EGG2_FR = "JUSTE UN OEUF";
string EGG3_FR = "OEUF EN GELEE";
string EGG4_FR = "OEUF ECARLATE";
// 5
string EGG5_FR = "OEUF DORE";
string EGG_RANDOM_FR = "ALEATOIRE";
string CONFIRM_EGG_FR = "Vous avez choisis :  ";
string ASK_CONFIRM_EGG_FR = "Gardez l'oeuf ?";

// Intro
string INTRO_1_FR = "Bienvenue dans la maison qui va acceuillir votre Tamagotchi. Il semblerai que vous n'ayez pas encore eveille votre Tamagotchi, veuillez le toucher.";
string INTRO_1_1_FR = "Toucher l'oeuf";
string INTRO_1_2_FR = "S'enfuir en courrant";
string INTRO_1_A_FR = "Etes-vous vraiment s–r de vouloir abandonner votre oeuf de Tamagotchi ? ;-;";
string INTRO_1_A_QUIT_FR = "AprŠs y avoir longuement r‚fl‚chi, vous vous ˆtes retourn‚ et vous vous ˆtes enfui !!!";
// 5
string INTRO_2_FR = "Vous avez touch‚ votre oeuf. Wow, votre Tamagotchi sort de son oeuf !";
string INTRO_3_FR = "Tadaa ! Votre Tamagochi est n‚, il a l'air heureux de vous rencontrer.";

// Etat TAMAGOTCHI
string TAMA_HAPPY_FR = "HEUREUX";
string TAMA_SAD_FR = "TRISTE";
string TAMA_SICK_FR = "MALADE";
string TAMA_TIRED_FR = "FATIGUE";
string TAMA_AFFRAID_FR = "EFFRAYE";
// 5
string TAMA_AGGRESSIVE_FR = "AGGRESSIF";
string TAMA_CRAZY_FR = "FOU";
string TAMA_DEFAULT_FR = "PAR_DEFAUT";
string STATE_FR = "ETAT ";

// Etat Education
string RUDE_FR = "MALPOLI";
string NORMAL_FR = "NORMAL";
string EXTRA_COOL_FR = "EXTRA COOL";
string EDUCATION_FR = "EDUCATION ";


// Stat display
string AGE_FR = "AGE ";
string DAY_FR = "JOUR";
string DAYS_FR = "JOURS";
string HAPPINESS_FR = "JOIE";
string ENERGY_FR = "ENERGIE";
string HUNGER_FR = "FAIM";
string HYGIENE_FR = "HYGIENE";

// Menu Jeu Principal
string FEED_FR = "NOURRIR";
string GAME_FR = "JEUX";
string DICIPLINE_FR = "EDUQUER";
string CLEAN_FR = "NETTOYER";
string MEDECINE_FR = "MEDICAMENT";
string SLEEP_FR = "DORMIR";


// Menu Nourrir
string FEED1_FR = "NOURRIR1";
string FEED2_FR = "NOURRIR2";
string FEED3_FR = "NOURRIR3";
string BACK_FR = "RETOUR";

// Menu Jeu
string GAME1_FR = "JEU1";
string GAME2_FR = "JEU2";
string GAME3_FR = "JEU3";

// Menu Eduquer
string DICIPLINE1_FR = "EDUQUER1";
string DICIPLINE2_FR = "EDUQUER2";
string DICIPLINE3_FR = "EDUQUER3";


// Menu Nettoyer
string CLEAN1_FR = "NETTOYER1";
string CLEAN2_FR = "NETTOYER2";

// Menu Medicament
string MEDECINE1_FR = "MEDICAMENT1";
string MEDECINE2_FR = "MEDICAMENT2";
string MEDECINE3_FR = "MEDICAMENT3";

// Menu Dormir
string SLEEP1_FR = "DORMIR1";
string SLEEP2_FR = "DORMIR2";

// Message Erreur
string ERR_BORDER_FR = "ERR/BORD";
string ERR_IMAGE_TEXT_FR = "ERR/IMG_TXT";
string ERR_BAR_SHORT_FR = "ERR/BAR_COURTE";
string ERR_MENU_NEED_SPACE_FR = "ERR/BESOIN_ESPACE";



string ListText[] = {" ", ENGLISH,
                        INTRO_SELECT_LANG,
                        GAME_NAME, AT,
                        GAME_WELCOME,
                        NEW_GAME, CONTINUE, GRAVEYARD, SETTINGS, EXIT,
                        YES, NO,
                        QUIT_1, QUIT_2,
                        NOT_DEV, PRESS_KEY,
                        NAME_DESCRIPTION, ASK_NAME_1, ASK_NAME_2, TOO_LONG_1, TOO_LONG_2, CONFIRM_NAME, ASK_CONFIRM_NAME, RETURN_CONFIRM_NAME1, RETURN_CONFIRM_NAME2,
                        TYPE_DESCRIPTION, EGG1, EGG2, EGG3, EGG4, EGG5, EGG_RANDOM, CONFIRM_EGG, ASK_CONFIRM_EGG,
                        INTRO_1, INTRO_1_1, INTRO_1_2, INTRO_1_A, INTRO_1_A_QUIT, INTRO_2, INTRO_3,
                        TAMA_HAPPY, TAMA_SAD, TAMA_SICK, TAMA_TIRED, TAMA_AFFRAID, TAMA_AGGRESSIVE, TAMA_CRAZY, TAMA_DEFAULT, STATE,
                        RUDE, NORMAL, EXTRA_COOL, EDUCATION,
                        AGE, DAY, DAYS, HAPPINESS, ENERGY, HUNGER, HYGIENE,
                        FEED, GAME, DICIPLINE, CLEAN, MEDECINE, SLEEP,
                        FEED1, FEED2, FEED3, BACK,
                        GAME1, GAME2, GAME3,
                        DICIPLINE1, DICIPLINE2, DICIPLINE3,
                        CLEAN1, CLEAN2,
                        MEDECINE1, MEDECINE2, MEDECINE3,
                        SLEEP1, SLEEP2,
                        ERR_BORDER, ERR_IMAGE_TEXT, ERR_BAR_SHORT, ERR_MENU_NEED_SPACE,
                        
                        FRENCH,
                        INTRO_SELECT_LANG_FR,
                        GAME_NAME_FR, AT_FR,
                        GAME_WELCOME_FR,
                        NEW_GAME_FR, CONTINUE_FR, GRAVEYARD_FR, SETTINGS_FR, EXIT_FR,
                        YES_FR, NO_FR,
                        QUIT_1_FR, QUIT_2_FR,
                        NOT_DEV_FR, PRESS_KEY_FR,
                        NAME_DESCRIPTION_FR, ASK_NAME_1_FR, ASK_NAME_2_FR, TOO_LONG_1_FR, TOO_LONG_2_FR, CONFIRM_NAME_FR, ASK_CONFIRM_NAME_FR, RETURN_CONFIRM_NAME1_FR, RETURN_CONFIRM_NAME2_FR,
                        TYPE_DESCRIPTION_FR, EGG1_FR, EGG2_FR, EGG3_FR, EGG4_FR, EGG5_FR, EGG_RANDOM_FR, CONFIRM_EGG_FR, ASK_CONFIRM_EGG_FR,
                        INTRO_1_FR, INTRO_1_1_FR, INTRO_1_2_FR, INTRO_1_A_FR, INTRO_1_A_QUIT_FR, INTRO_2_FR, INTRO_3_FR,
                        TAMA_HAPPY_FR, TAMA_SAD_FR, TAMA_SICK_FR, TAMA_TIRED_FR, TAMA_AFFRAID_FR, TAMA_AGGRESSIVE_FR, TAMA_CRAZY_FR, TAMA_DEFAULT_FR, STATE_FR,
                        RUDE_FR, NORMAL_FR, EXTRA_COOL_FR, EDUCATION_FR,
                        AGE_FR, DAY_FR, DAYS_FR, HAPPINESS_FR, ENERGY_FR, HUNGER_FR, HYGIENE_FR,
                        FEED_FR, GAME_FR, DICIPLINE_FR, CLEAN_FR, MEDECINE_FR, SLEEP_FR,
                        FEED1_FR, FEED2_FR, FEED3_FR, BACK_FR,
                        GAME1_FR, GAME2_FR, GAME3_FR,
                        DICIPLINE1_FR, DICIPLINE2_FR, DICIPLINE3_FR,
                        CLEAN1_FR, CLEAN2_FR,
                        MEDECINE1_FR, MEDECINE2_FR, MEDECINE3_FR,
                        SLEEP1_FR, SLEEP2_FR,
                        ERR_BORDER_FR, ERR_IMAGE_TEXT_FR, ERR_BAR_SHORT_FR, ERR_MENU_NEED_SPACE_FR
                        };