#include "AllDisplays.hpp"

// Default Page
void DefaultPage() {

    system("cls");
    Fenetre(sizeWinX,sizeWinY);
    gotoxy(sizeWinX/2 - size(ListText[lang + NotDev + 1])/2,sizeWinY/2 - 5);
    cout << ListText[lang + NotDev + 1];
    gotoxy(sizeWinX/2 - size(ListText[lang + NotDev + 2])/2,sizeWinY/2 - 2);
    continu();
}



// Save Page
void mainSave() {

    system("cls");
    Fenetre(sizeWinX,sizeWinY);
    while(1);

    system("cls");
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
int pauseWindow() {

    int Set[] = {12,7,7,7,7}; // DEFAULT COLORS
    int counter = 1;
    char key;
    int result = 0;

    while(key != 27) {
        color(7);
        Pborder(49,7,69,23,0,1);

        gotoxy(sizeWinX/2 - 5,sizeWinY/2 - 6);
        color(Set[0]);
        cout<<"CONTINUE";

        gotoxy(sizeWinX/2 - 3,sizeWinY/2 - 3);
        color(Set[1]);
        cout<<"SAVE";

        gotoxy(sizeWinX/2 - 5,sizeWinY/2);
        color(Set[2]);
        cout<<"GRAVEYARD";

        gotoxy(sizeWinX/2 - 5,sizeWinY/2 + 3);
        color(Set[3]);
        cout<<"SETTINGS";

        gotoxy(sizeWinX/2 - 5,sizeWinY/2 +6);
        color(Set[4]);
        cout<<"MAIN MENU";



        key = _getch();

        if(key == KEY_UP && (counter >=2 && counter <= 5)) {
            counter--;
        }
        if(key == KEY_DOWN && (counter >=1 && counter <= 4)) {
            counter++;
        }

        if(key == '\r') {   //carriage return
            if(counter == 1) {
                key = 27;
            }
            
            if(counter == 2) {
                mainSave();
            }

            if(counter == 3) {
                mainGraveyard();
            }

            if(counter == 4) {
                mainSettings();
            }

            if(counter == 5) {
                key = 27;
                result = 1;
            }
        }

        Set[0] = 7;
        Set[1] = 7;
        Set[2] = 7;
        Set[3] = 7;
        Set[4] = 7;

        if(counter == 1) {
            Set[0] = 12;
        }

        if(counter == 2) {
            Set[1] = 12;
        }

        if(counter == 3) {
            Set[2] = 12;
        }

        if(counter == 4) {
            Set[3] = 12;
        }

        if(counter == 5) {
            Set[4] = 12;
        }
    }
    system("cls");
    return result;
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
    string DefImg = "graphics/StateTAMA/default.txt";

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
    ( ?.?)      (?.? )
     /> ?        /><\

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
    ( ?_?)      ( ?.?)
     ? <\        /><\

    */
}



// Main game function
void mainGame(Tamagotchi MainTAMA) {
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

        int ColorSelect = 12;
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
        int key = 1;

        int countSleep = 0;

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


        while (key == 1) {
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
                // zzz = pauseWindow();
                // key = ;
            }
        }
        
    }
    else {
        //message quitter
        clearSpace(4, sizeWinY - BorderY + 1, sizeWinX - 5, sizeWinY - 5);
        Ptext(4, sizeWinY - BorderY + 1, sizeWinX - 5, sizeWinY - 5, 0,0,0, ListText[lang + Intro + 5]);
    }

    _getch();

    /*

    (\__/)      (\__/)
    ( ?.?)     (?.? )
     /><\       /> ?

    */
}