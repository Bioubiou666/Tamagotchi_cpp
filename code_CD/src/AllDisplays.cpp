#include "../include/AllDisplays.hpp"

// Default Page
void DefaultPage() {

    system("cls");
    Fenetre(sizeWinX,sizeWinY);
    gotoxy(sizeWinX/2 - size(ListText[lang + NotDev + 1])/2,sizeWinY/2 - 5);
    cout << ListText[lang + NotDev + 1];
    gotoxy(sizeWinX/2 - size(ListText[lang + NotDev + 2])/2,sizeWinY/2 - 2);
    continu();
}



// Graveyard Page
void mainGraveyard() {

    system("cls");
    Fenetre(sizeWinX,sizeWinY);
    while(1);

    system("cls");
}



// Settings Page
void mainSettings() {

    system("cls");
    Fenetre(sizeWinX,sizeWinY);
    while(1);

    system("cls");
}



// Pause Window
// A FAIRE
// return 1 = quit current game / 0 continue current game
int pauseWindow(Tamagotchi MainTAMA) {
    string ListMenuPause[5] = {ListText[lang + MenuMain + 2], ListText[lang + MenuPause + 1], ListText[lang + MenuMain + 3], ListText[lang + MenuMain + 4], ListText[lang + MenuPause + 2]};

    int ColorSelect = 12;
    int MainMENU = 0;

    clearSpace((sizeWinX)/2 - 13,sizeWinY/2 - 8, (sizeWinX)/2 + 14,sizeWinY/2 + 8);
    int select = MenuSelect((sizeWinX)/2 - 10,sizeWinY/2 - 9, 5, 1, 20, 3, 1, 0, 2, ColorSelect, ListMenuPause, 5);


    if(select == 2) {
        MainMENU = 1;

        int confirm1 = confirm((sizeWinX - 1)/2 - 20, 22, 2);
        for(int i = 0; i < 45 ; i++) {
            gotoxy( sizeWinX/2 - 22 + i, sizeWinY - 3);
            cout << static_cast<char>(196);
        }
        if(confirm1 == 2) {
            MainTAMA.Save();
        }

    }

    if(select == 3) {
        MainMENU = 2;
        DefaultPage();
        //mainGraveyard();
    }

    if(select == 4) {
        MainMENU = 2;
        DefaultPage();
        //mainSettings();
    }

    if(select == 5) {
        int confirm1 = confirm((sizeWinX - 1)/2 - 20, 22, 1);
        for(int i = 0; i < 45 ; i++) {
            gotoxy( sizeWinX/2 - 22 + i, sizeWinY - 3);
            cout << static_cast<char>(196);
        }
        if(confirm1 == 2) {
            MainMENU = -1;
        }
        else {
            MainMENU = 1;
        }
    }
    return MainMENU;
}



//
//
//  Fonctions for Main Game
//
//


// Function for displaying name selection tama
void mainNewGameDisplay(char &test, string &NAME, int choice) {
    int length = 10;
    int Xmid = sizeWinX * 5 / 6 - 3;
    int Y = 18;
    string EMPTY;

    for(int i = 0; i < length; i++)//
        EMPTY += " ";


    string msg = ListText[lang + NameChoice + 2];

    if(choice == 1) {
    msg = ListText[lang + NameChoice + 3];
    }

    do {
        system("cls");
        Fenetre(sizeWinX,sizeWinY);
        Ptext(sizeWinX/2 - 22, 3,(sizeWinX + 1)/2 + 21, 6, 1, 0, 0,ListText[lang + NameChoice + 1]);

        if(sizeWinX >= 85) {
            Pimg(Xmid - 6,10,DefImg);//90,10
            if(size(NAME) <= length) {
                Ptext(Xmid - (length + 1)/2 + 2,Y,Xmid + length/2 + 2,Y, 0,0,0,EMPTY);
                Ptext(Xmid - (size(NAME) + 1)/2 + 2,Y,Xmid + size(NAME)/2 + 2,Y, 0,0,0,NAME);
            }
        }

        // Initialisation du Tamagotchi
        gotoxy(2,10);
        cout << msg , cin >> NAME;
        if(size(NAME) <= length) {
            if(sizeWinX >= 85) {
                Ptext(Xmid - (length + 1)/2 + 2,Y,Xmid + length/2 + 2,Y, 0,0,0,EMPTY);
                Ptext(Xmid - (size(NAME) + 1)/2 + 2,Y,Xmid + size(NAME)/2 + 2,Y, 0,0,0,NAME);
            }
        }
        //Message erreur pour la taille du nom
        else {
            gotoxy(2,15);
            cout << ListText[lang + NameChoice + 4] << length << ListText[lang + NameChoice + 5];
            _getch();
        }

    }
    while(size(NAME) > length);

    // Validation du choix nom
    gotoxy(2,15);
    cout << ListText[lang + NameChoice + 6] << NAME << ListText[lang + NameChoice + 7] , test = _getch();
    if(test == 'Y' || test == 'y') {
        gotoxy(2,19);
        cout << ListText[lang + NameChoice + 8];
        _getch();
    }
    else {
        gotoxy(2,19);
        cout << ListText[lang + NameChoice + 9];
        _getch();

    }
}


// Main function name selection tama
string mainNewGameNAME() {
    char test;
    string NAME;
    mainNewGameDisplay(test, NAME, 0);

    while(test == 'Y' || test == 'y') {
        mainNewGameDisplay(test, NAME, 1);
    }

    return NAME;

    /*

    (\__/)      (\__/)
    ( ø.ø)      (*.* )
     /> õ        /><\

    */
}



// Function to confirm egg selection
int confirmEgg(string selectName, string selectImg) {
    int posX = 0;
    int posY = 2;
    int BorderX = 30;
    int BorderY = 14;
    int select1;
    string text1 = ListText[lang + EggChoice + 8] + selectName;
    string text2 = ListText[lang + EggChoice + 9];
    string YesNo[2] = {ListText[lang + Menu_YesNo + 1], ListText[lang + Menu_YesNo + 2]};

    Pborder(posX + sizeWinX/2 - BorderX/2, posY + sizeWinY/2 - BorderY/2, posX + sizeWinX/2 + BorderX/2 - 1, posY + sizeWinY/2 + BorderY/2, 1, 1);
    clearSpace(posX + sizeWinX/2 - BorderX/2 - 1, posY + sizeWinY/2 - BorderY/2, posX + sizeWinX/2 + BorderX/2 + 1, posY + sizeWinY/2 + BorderY/2);
    Ptext(posX + sizeWinX/2 - BorderX/2 + 1, posY + sizeWinY/2 - BorderY/2 + 1, posX + sizeWinX/2 + BorderX/2 - 1, posY + sizeWinY/2 - BorderY/2 + 3, 0,0,0, text1);
    Pimg(posX + sizeWinX/2 - 5, posY + sizeWinY/2 - 3, selectImg);
    Ptext(posX + sizeWinX/2 - size(text2)/2, posY + sizeWinY/2 + BorderY/2 - 3, posX + sizeWinX/2 + size(text2)/2, posY + sizeWinY/2 + BorderY/2 - 3, 0,0,0, text2);
    select1 = MenuSelect(posX + sizeWinX/2 - BorderX/2, posY + sizeWinY/2 + BorderY/2 - 1, 1, 2, BorderX/2, 1, 0,-1, 1, 12, YesNo, 2);
    return select1;
}


// Function for egg selection
int mainNewGameTYPE() {
    int key = 2;
    int select;
    int ColorSelect = 12;
    string ListEggs[6] = {ListText[lang + EggChoice + 2], ListText[lang + EggChoice + 3], ListText[lang + EggChoice + 4], ListText[lang + EggChoice + 5], ListText[lang + EggChoice + 6], ListText[lang + EggChoice + 7]};
    int X;
    int Y;


    while(key == 2) {
        system("cls");
        Fenetre(sizeWinX,sizeWinY);
        Ptext(sizeWinX/2 - 22, 3,(sizeWinX + 1)/2 + 21, 6, 1, 0, 0, ListText[lang + EggChoice + 1]);

        //afficher 5 oeufs + img rdm
        for(int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                int index = i * 3 + j;
                X = (sizeWinX)/4 - 5 + j * (sizeWinX + 1)/4;
                Y = sizeWinY/2 - 5 + i * 8;
                Pimg(X,Y,ListImgEgg[index + 1]);
            }
        }


        select = MenuSelect(sizeWinX/4,sizeWinY/2 + 1, 2, 3, (sizeWinX + 1)/4, 8, 0, -1, 3, ColorSelect, ListEggs, 6);

        if(select == 6) {
            select = randomCustom(1,5,0);
        }
        key = confirmEgg(ListEggs[select - 1] ,ListImgEgg[select]);
    }

    return select;

    /*

    (\__/)      (\__/)
    ( ø_ø)      ( *.*)
     õ <\        /><\

    */
}



// Function for cracked egg display
void Crackled(int WRITE) {
    if(WRITE = 1) {
    gotoxy(sizeWinX/2 - 6,sizeWinY/2 - 4);
    cout << "\\";
    gotoxy(sizeWinX/2 - 8,sizeWinY/2 - 2);
    cout << "\\";

    gotoxy(sizeWinX/2 + 5,sizeWinY/2 - 4);
    cout << "/";
    gotoxy(sizeWinX/2 + 7,sizeWinY/2 - 2);
    cout << "/";

    gotoxy(sizeWinX/2,sizeWinY/2);
    cout << "@@";
    gotoxy(sizeWinX/2,sizeWinY/2 - 1);
    cout << "@";
    gotoxy(sizeWinX/2 - 3,sizeWinY/2);
    cout << "@";
    gotoxy(sizeWinX/2 - 2,sizeWinY/2 - 1);
    cout << "@";
    }
    else {
        // erase
    gotoxy(sizeWinX/2 - 6,sizeWinY/2 - 4);
    cout << " ";
    gotoxy(sizeWinX/2 - 8,sizeWinY/2 - 2);
    cout << " ";

    gotoxy(sizeWinX/2 + 5,sizeWinY/2 - 4);
    cout << " ";
    gotoxy(sizeWinX/2 + 7,sizeWinY/2 - 2);
    cout << " ";
    }

}


// Function for background display
void Background() {
    int hMax = sizeWinY - 11;
    int hWall = hMax * 3/4;
    int lBack = (sizeWinX + 1)/2;
    for(int i = 1; i < hWall ; i++) {
        gotoxy(sizeWinX/2 - lBack/2, i);
        cout << "|";
        gotoxy(sizeWinX/2 + lBack/2, + i);
        cout << "|";
    }

    gotoxy(sizeWinX/2 - lBack/2, hWall);
    cout << "|";
    for(int i = 1; i < lBack; i++) {
        gotoxy(sizeWinX/2 - lBack/2 + i, hWall);
        cout << "_";
    }
    gotoxy(sizeWinX/2 + lBack/2, hWall);
    cout << "|";

    for(int i = 1; i < hMax - hWall ; i++) {
        gotoxy(sizeWinX/2 - lBack/2 - i, hWall + i);
        cout << "//";
        gotoxy(sizeWinX/2 + lBack/2 + i - 1, hWall + i);
        cout << "\\\\";
    }

}


// Update of tama stat display
void AllStatDisplay(Tamagotchi MainTAMA) {
    string Day;
    string State;
    string Education;

    // AGE
    if(MainTAMA.getAge() > 1) {
        Day = ListText[lang + StatDisplay + 3];
    }
    else {
        Day = ListText[lang + StatDisplay + 2];
    }
    string Age = ListText[lang + StatDisplay + 1] + ": " + to_string(MainTAMA.getAge()) + " " + Day;
    Ptext(1, 2, sizeWinX, 2, 0,0,0, Age);
    // STATE
    switch (MainTAMA.getState()){
    case 1:
        State = ListText[lang + StateTAMA + 1];
        break;
    case 2:
        State = ListText[lang + StateTAMA + 2];
        break;
    case 3:
        State = ListText[lang + StateTAMA + 3];
        break;
    case 4:
        State = ListText[lang + StateTAMA + 4];
        break;
    case 5:
        State = ListText[lang + StateTAMA + 5];
        break;
    case 6:
        State = ListText[lang + StateTAMA + 6];
        break;
    case 7:
        State = ListText[lang + StateTAMA + 7];
        break;
    default:
        State = ListText[lang + StateTAMA + 8];
        break;
    }
    State = ListText[lang + StateTAMA + 9] + ": " + State;
    Ptext(1, 4, 1 + sizeof(State), 4, 0,0,0, State);
    // EDUCATION
    if(MainTAMA.getEducation() <= MainTAMA.getMaxEd()/3) {
        Education = ListText[lang + StateEducation + 1];
    }
    else if(MainTAMA.getEducation() >= MainTAMA.getMaxEd() - MainTAMA.getMaxEd()/3) {
        Education = ListText[lang + StateEducation + 3];
    }
    else {
        Education = ListText[lang + StateEducation + 2];
    }
    Education = ListText[lang + StateEducation + 4] + ": " + Education;
    Ptext(1, 6, 1 + sizeof(Education), 6, 0,0,0, Education);
    // HAPPINESS
    Ptext(1, 8, 1 + sizeof(ListText[lang + StatDisplay + 4]), 8, 0,0,0, ListText[lang + StatDisplay + 4]);
    progressBar(1, 9, MainTAMA.getMaxHp(), 1, 3, MainTAMA.getHappiness());

    Ptext(sizeWinX - 20, 2, sizeWinX, 2, 0,0,0, ListText[lang + StatDisplay + 5]);
    progressBar(sizeWinX - 20, 3, MainTAMA.getMaxE(), 1, 0, MainTAMA.getEnergy());
    Ptext(sizeWinX - 20, 5, sizeWinX, 5, 0,0,0, ListText[lang + StatDisplay + 6]);
    progressBar(sizeWinX - 20, 6, MainTAMA.getMaxH(), 1, 1, MainTAMA.getHunger());
    Ptext(sizeWinX - 20, 8, sizeWinX, 8, 0,0,0, ListText[lang + StatDisplay + 7]);
    progressBar(sizeWinX - 20, 9, MainTAMA.getMaxC(), 1, 2, MainTAMA.getHygiene());

}


// Function for image of Tamagotchi display
void ImgTamaDisplay(Tamagotchi MainTAMA) {

// Temporaire en attente affichage final
    Pimg(sizeWinX/2 - 6, sizeWinY/2 - 3, DefImg);
/*
    if(MainTAMA.getType() == 0) {
        // Pimg();
    }
    if(MainTAMA.getType() == 1) {
        // Pimg(list[evolved + state]);
    }
    //
    //
*/

}


// Udapte Display Game
void UdapteDisplayGame(Tamagotchi MainTAMA, int BorderY) {
    int sizeImgY = 5;
    system("cls");
    Fenetre(sizeWinX,sizeWinY);
    Background();
    Pborder(3,sizeWinY - BorderY,sizeWinX - 4,sizeWinY - 4,1,1);
    ImgTamaDisplay(MainTAMA);
    if(MainTAMA.getState() == 1) {
        sizeImgY = 6;
    }
    Ptext(sizeWinX/2 - size(MainTAMA.getName())/2, sizeWinY - sizeImgY - BorderY - 5, sizeWinX/2 + size(MainTAMA.getName())/2,  sizeWinY - sizeImgY - BorderY - 5, 0,0,0, MainTAMA.getName());
    AllStatDisplay(MainTAMA);
}

// Function for hatching egg
bool hatching(Tamagotchi MainTAMA) {
    int colorSelect = 12;
    int BorderY = 10;
    string selectList1[2] = {ListText[lang + Intro + 2], ListText[lang + Intro + 3]};
    string NoYes[2] = {ListText[lang + Menu_YesNo + 2], ListText[lang + Menu_YesNo + 1]};
    int select;

    system("cls");
    Fenetre(sizeWinX,sizeWinY);
    Pborder(3,sizeWinY - BorderY,sizeWinX - 4,sizeWinY - 4,1,1);


    Background();
    if(MainTAMA.getType() > 0) {
        Pimg(sizeWinX/2 - 5,sizeWinY/2 -3,ListImgEgg[MainTAMA.getType()]);
    }
    else {
        Pimg(sizeWinX/2 - 5,sizeWinY/2 -3, ListImgEgg[0]);
    }

    Ptext(4, sizeWinY - BorderY + 1, sizeWinX - 5, sizeWinY - 5, 0,0,0, ListText[lang + Intro + 1]);
    select = MenuSelect( sizeWinX - 63, sizeWinY - 5, 1, 2, 30, 1, 0, -1, 1,colorSelect , selectList1, 2);
    if(select == 2) {
        //mettre confirrm quitter
        clearSpace(4, sizeWinY - BorderY + 1, sizeWinX - 4, sizeWinY - 5);
        Ptext(4, sizeWinY - BorderY + 1, sizeWinX - 5, sizeWinY - 5, 0,0,0, ListText[lang + Intro + 4]);
        select = MenuSelect( sizeWinX - 63, sizeWinY - 5, 1, 2, 30, 1, 0, -1, 1,colorSelect , NoYes, 2);
    }


    if(select == 1) {       //jeu principal

        // Faire fonction   oeuf craquele (ajouter craquelage commun)
        Crackled(1);
        clearSpace(4, sizeWinY - BorderY + 1, sizeWinX - 4, sizeWinY - 5);
        Ptext(4, sizeWinY - BorderY + 1, sizeWinX - 5, sizeWinY - 5, 0,0,0, ListText[lang + Intro + 6]);
        _getch();

        // image tama heureux jeune (type selection‚)
        Crackled(0);

        clearSpace(4, sizeWinY - BorderY + 1, sizeWinX - 4, sizeWinY - 5);
        Ptext(4, sizeWinY - BorderY + 1, sizeWinX - 5, sizeWinY - 5, 0,0,0, ListText[lang + Intro + 7]);

        _getch();
        clearSpace(4, sizeWinY - BorderY + 1, sizeWinX - 4, sizeWinY - 5);

        return 1;

    }
    else {
        //message quitter
        clearSpace(4, sizeWinY - BorderY + 1, sizeWinX - 5, sizeWinY - 5);
        Ptext(4, sizeWinY - BorderY + 1, sizeWinX - 5, sizeWinY - 5, 0,0,0, ListText[lang + Intro + 5]);
        _getch();

        return 0;
    }
}

// Main game function
void mainGame(int test, Tamagotchi MainTAMA) {
    int ColorSelect = 12;
    int BorderY = 10;
    string ListMenu[6] = {ListText[lang + MenuGameSelect + 1], ListText[lang + MenuGameSelect + 2], ListText[lang + MenuGameSelect + 3], ListText[lang + MenuGameSelect + 4], ListText[lang + MenuGameSelect + 5], ListText[lang + MenuGameSelect + 6]};
    int sizeList1;
    int spaceX;
    string selectFeed[4] = {ListText[lang + MenuFeed + 1], ListText[lang + MenuFeed + 2], ListText[lang + MenuFeed + 3], ListText[lang + MenuFeed + 4]};
    string selectGame[4] = {ListText[lang + MenuGame + 1], ListText[lang + MenuGame + 2], ListText[lang + MenuGame + 3], ListText[lang + MenuFeed + 4]};
    string selectDicipline[4] = {ListText[lang + MenuDicipline + 1], ListText[lang + MenuDicipline + 2], ListText[lang + MenuDicipline + 3], ListText[lang + MenuFeed + 4]};
    string selectClean[3] = {ListText[lang + MenuClean + 1], ListText[lang + MenuClean + 2], ListText[lang + MenuFeed + 4]};
    string selectMedecine[4] = {ListText[lang + MenuMedecine + 1], ListText[lang + MenuMedecine + 2], ListText[lang + MenuMedecine + 3], ListText[lang + MenuFeed + 4]};
    string selectSleep[3] = {ListText[lang + MenuSleep + 1], ListText[lang + MenuSleep + 2], ListText[lang + MenuFeed + 4]};

    int sizeList = sizeof ListMenu/sizeof ListMenu[0];
    int select;
    int key = 0;

    int countSleep = 0;

    if (test) {
        system("cls");
        Fenetre(sizeWinX,sizeWinY);
        Pborder(3,sizeWinY - BorderY,sizeWinX - 4,sizeWinY - 4,1,1);
        Ptext(4, sizeWinY - BorderY + 1, sizeWinX - 5, sizeWinY - 5, 0,0,0, ListText[lang + Intro + 8]);
        _getch();
    }

    while (key == 0) {
        MainTAMA.Evolve();
        MainTAMA.UpdateState();

        UdapteDisplayGame(MainTAMA, BorderY);


        select = MenuSelect((sizeWinX + 1)/4,sizeWinY - BorderY + 2, 2, 3, (sizeWinX + 1)/4, 2, 0, -1, 3, ColorSelect, ListMenu, sizeList);


        if(select == 1) {
            //FEED
            sizeList1 = 4;
            spaceX = sizeWinX/8;
            int select1 = MenuSelect(sizeWinX/2 - sizeList1 * spaceX/2,sizeWinY - BorderY - 2,1,sizeList1,spaceX,1, 0,0, 1,12,selectFeed,sizeList1);

            if(select1 == 1) {
                MainTAMA.Feed1();
                UdapteDisplayGame(MainTAMA, BorderY);
                getch();
            }
            if(select1 == 2) {
                MainTAMA.Feed2();
                UdapteDisplayGame(MainTAMA, BorderY);
                getch();
            }
            if(select1 == 3) {
                MainTAMA.Feed3();
                UdapteDisplayGame(MainTAMA, BorderY);
                getch();
            }
        }
        if(select == 2) {
            //GAME
            sizeList1 = 4;
            spaceX = sizeWinX/8;
            int select1 = MenuSelect(sizeWinX/2 - sizeList1 * spaceX/2,sizeWinY - BorderY - 2,1,sizeList1,spaceX,1, 0,0, 1,12,selectGame,sizeList1);

            if(select1 == 1) {
                MainTAMA.Game1();
                UdapteDisplayGame(MainTAMA, BorderY);
                getch();
            }
            if(select1 == 2) {
                MainTAMA.Game2();
                UdapteDisplayGame(MainTAMA, BorderY);
                getch();
            }
            if(select1 == 3) {
                MainTAMA.Game3();
                UdapteDisplayGame(MainTAMA, BorderY);
                getch();
            }
        }
        if(select == 3) {
            //DICIPLINE
            sizeList1 = 4;
            spaceX = sizeWinX/8;
            int select1 = MenuSelect(sizeWinX/2 - sizeList1 * spaceX/2,sizeWinY - BorderY - 2,1,sizeList1,spaceX,1, 0,0, 1,12,selectDicipline,sizeList1);

            if(select1 == 1) {
                //zzz
                UdapteDisplayGame(MainTAMA, BorderY);
                getch();
            }
            if(select1 == 2) {
                //zzz
                UdapteDisplayGame(MainTAMA, BorderY);
                getch();
            }
            if(select1 == 3) {
                //zzz
                UdapteDisplayGame(MainTAMA, BorderY);
                getch();
            }
        }
        if(select == 4) {
            //CLEAN
            sizeList1 = 3;
            spaceX = sizeWinX/8;
            int select1 = MenuSelect(sizeWinX/2 - sizeList1 * spaceX/2,sizeWinY - BorderY - 2,1,sizeList1,spaceX,1, 0,0, 1,12,selectClean,sizeList1);

            if(select1 == 1) {
                MainTAMA.Clean1();
                UdapteDisplayGame(MainTAMA, BorderY);
                getch();
            }
            if(select1 == 2) {
                MainTAMA.Clean2();
                UdapteDisplayGame(MainTAMA, BorderY);
                getch();
            }
        }
        if(select == 5) {
            //MEDECINE
            sizeList1 = 4;
            spaceX = sizeWinX/8;
            int select1 = MenuSelect(sizeWinX/2 - sizeList1 * spaceX/2,sizeWinY - BorderY - 2,1,sizeList1,spaceX,1, 0,0, 1,12,selectMedecine,sizeList1);

            if(select1 == 1) {
                MainTAMA.Medecine1();
                UdapteDisplayGame(MainTAMA, BorderY);
                getch();
            }
            if(select1 == 2) {
                MainTAMA.Medecine2();
                UdapteDisplayGame(MainTAMA, BorderY);
                getch();
            }
            if(select1 == 3) {
                MainTAMA.Medecine3();
                UdapteDisplayGame(MainTAMA, BorderY);
                getch();
            }
        }
        if(select == 6) {
            //SLEEP
            sizeList1 = 3;
            spaceX = sizeWinX/8;
            int select1 = MenuSelect(sizeWinX/2 - sizeList1 * spaceX/2,sizeWinY - BorderY - 2,1,sizeList1,spaceX,1, 0,0, 1,12,selectSleep,sizeList1);

            if(select1 == 1) {
                MainTAMA.Sleep1();

                if(countSleep < 2) {
                    countSleep ++;                    }
                else {
                    // txt endormi jusqu'au matin
                    countSleep = 0;
                    MainTAMA.AgeUp();
                }
                UdapteDisplayGame(MainTAMA, BorderY);
                getch();

            }
            if(select1 == 2) {
                countSleep = 0;
                MainTAMA.Sleep2();
                MainTAMA.AgeUp();
                UdapteDisplayGame(MainTAMA, BorderY);
                getch();
            }
        }
        if(select == 0) {
            int Quit;
            do {
                Quit = pauseWindow(MainTAMA);
                if (Quit == 2) {
                    UdapteDisplayGame(MainTAMA, BorderY);

                }
            } while(Quit > 0);
            if(Quit == -1) {
                key = 1;
            }
        }
    }
    UdapteDisplayGame(MainTAMA, BorderY);

    Ptext(4, sizeWinY - BorderY + 1, sizeWinX - 5, sizeWinY - 5, 0,0,0, ListText[lang + End + 1]);

    _getch();

    /*

    (\__/)      (\__/)
    ( ø.ø)     (*.* )
     /><\       /> õ

    */
}