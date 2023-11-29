#include "../include/AllLang.hpp"


// To change language add + total number (SizeLang)


// English version

// Type
int ListLang = 0;

// Select Language
int SelectLanguage = ListLang + 1;

// Window info
int WindowInfo = SelectLanguage + 1;

// Intro text
int IntroText = WindowInfo + 2;

// Menu Main
int MenuMain = IntroText + 1;

// Menu Yes/No
int Menu_YesNo = MenuMain + 5;

// Menu Quit
int MenuQuit = Menu_YesNo + 2;

// Not dev
int NotDev = MenuQuit + 2;

// Menu Pause
int MenuPause = NotDev + 2;

// Name choice
int NameChoice = MenuPause + 3;

// Egg Choice
int EggChoice = NameChoice + 9;

// Intro Game
int Intro = EggChoice + 9;

// End Game
int End = Intro + 8;

// State TAMAGOTCHI
int StateTAMA = End + 1;

// State Education
int StateEducation = StateTAMA + 9;

// Stat display
int StatDisplay = StateEducation + 4;

// Menu Main Game
int MenuGameSelect = StatDisplay + 7;

// Menu Feed
int MenuFeed = MenuGameSelect + 6;

// Menu Game
int MenuGame = MenuFeed + 4;

// Menu Dicipline
int MenuDicipline = MenuGame + 3;

// Menu Clean
int MenuClean = MenuDicipline + 3;

// Menu Medecine
int MenuMedecine = MenuClean + 2;

// Menu Sleep
int MenuSleep = MenuMedecine + 3;

// Error text
int ErrorText = MenuSleep + 2;



int SizeLang = ErrorText + 4;




string ListText[] = {" ", ENGLISH,
                        INTRO_SELECT_LANG,
                        GAME_NAME, AT,
                        GAME_WELCOME,
                        NEW_GAME, CONTINUE, GRAVEYARD, SETTINGS, EXIT,
                        YES, NO,
                        QUIT_1, QUIT_2,
                        NOT_DEV, PRESS_KEY,
                        SAVE, MAIN_MENU, CONFIRM_SAVE,
                        NAME_DESCRIPTION, ASK_NAME_1, ASK_NAME_2, TOO_LONG_1, TOO_LONG_2, CONFIRM_NAME, ASK_CONFIRM_NAME, RETURN_CONFIRM_NAME1, RETURN_CONFIRM_NAME2,
                        TYPE_DESCRIPTION, EGG1, EGG2, EGG3, EGG4, EGG5, EGG_RANDOM, CONFIRM_EGG, ASK_CONFIRM_EGG,
                        INTRO_1, INTRO_1_1, INTRO_1_2, INTRO_1_A, INTRO_1_A_QUIT, INTRO_2, INTRO_3, INTRO_B,
                        END_1,
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
                        SAVE_FR, MAIN_MENU_FR, CONFIRM_SAVE_FR,
                        NAME_DESCRIPTION_FR, ASK_NAME_1_FR, ASK_NAME_2_FR, TOO_LONG_1_FR, TOO_LONG_2_FR, CONFIRM_NAME_FR, ASK_CONFIRM_NAME_FR, RETURN_CONFIRM_NAME1_FR, RETURN_CONFIRM_NAME2_FR,
                        TYPE_DESCRIPTION_FR, EGG1_FR, EGG2_FR, EGG3_FR, EGG4_FR, EGG5_FR, EGG_RANDOM_FR, CONFIRM_EGG_FR, ASK_CONFIRM_EGG_FR,
                        INTRO_1_FR, INTRO_1_1_FR, INTRO_1_2_FR, INTRO_1_A_FR, INTRO_1_A_QUIT_FR, INTRO_2_FR, INTRO_3_FR, INTRO_B_FR,
                        END_1_FR,
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