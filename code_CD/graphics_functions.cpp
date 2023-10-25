#include "graphics_functions.hpp"


// Function to change language
int chanLang(int choice) {
    int lang;
    switch (choice){
    case 1:
        lang = 1 * SizeLang;
        break;
    default:
        lang = 0 * SizeLang;
        break;
    }
    return lang;
}


// Function for random generation
int randomCustom(int MIN, int MAX, int type) {
    int result;

    switch (type){
    case 1:
        srand((unsigned int)time(0));

        result = rand()%MAX + MIN;
        break;
    default:
        std::random_device rd;
        std::default_random_engine eng(rd());
        std::uniform_int_distribution<int> distr(MIN, MAX);


        result = distr(eng);
        break;
    }
    return result;
}


// Function that allows you to move the cursor in the Windows console
void gotoxy(int x, int y) {
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}


// Function for managing writing color
void color(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}


// Function that allows you to stop the game (mainly debug)
void continu() {
    cout << ListText[lang + NotDev + 2] , getch() , system("cls");
}


// Function for game window size
void Fenetre(int sizeX, int sizeY) {
    int AAA = 0;
    gotoxy(0,0);

    if(sizeX % 2 == 1) {
        AAA = 1;
    }
    for(int i = 0; i < sizeX/2 - size(ListText[lang + WindowInfo + 1])/2 - 1; i++) {
        cout << "=";
    }
    cout << " " << ListText[lang + WindowInfo + 1] << " ";
    for(int i = 0; i < sizeX/2 - (size(ListText[lang + WindowInfo + 1]) + 1)/2 - 1 + AAA; i++) {
        cout << "=";
    }


    gotoxy(0,sizeY -2);
    int scaleV = 4;
    for(int i = 0; i < sizeX - size(gameVersion) - size(ListText[lang + WindowInfo + 2]) - size(gameVersionDate) - scaleV - 2; i++) {
        cout << "=";
    }
    cout << " " << gameVersion << " " << ListText[lang + WindowInfo + 2] << " " << gameVersionDate << " ";
    for(int i = 0; i < scaleV; i++) {
        cout << "=";
    }
}


// Function to create a border
void Pborder(int startX, int startY, int endX, int endY, int space, int type) {
    char horizontal;
    char vertical;
    char upL;
    char upR;
    char downL;
    char downR;
    switch (type){
    case 1:
        horizontal = static_cast<char>(196);
        vertical = static_cast<char>(179);
        upL = static_cast<char>(218);
        upR = static_cast<char>(191);
        downL = static_cast<char>(192);
        downR = static_cast<char>(217);
        break;
    default:
        horizontal = static_cast<char>(205);
        vertical = static_cast<char>(186);
        upL = static_cast<char>(201);
        upR = static_cast<char>(187);
        downL = static_cast<char>(200);
        downR = static_cast<char>(188);
        break;
    }

    gotoxy(startX - 2*space,startY - space);

    if (startX < endX && ((startY < endY) || (startY <= endY && space > 0))) {

        cout << upL;
        for(int i = 0; i < endX - startX - 1 + 4 * space; i++) {
            cout << horizontal;
        }
        cout << upR;

        for(int i = 1; i < endY - startY + 2 * space; i++) {
            gotoxy(startX - 2*space, startY - space + i);
            cout << vertical;
            gotoxy(endX + 2*space, startY - space + i);
            cout << vertical;
        }

        gotoxy(startX - 2*space,endY + space);
        cout << downL;
        for(int i = 0; i < endX - startX - 1 + 4 * space; i++) {
            cout << horizontal;
        }
        cout << downR;
    }
    else {
        cout << ListText[lang + ErrorText + 1];
    }


}


// Function to create a text zone
void Ptext(int startX, int startY, int endX, int endY, int border, int spaceBorder, int typeBorder, string TEXT) {
    int x = 0;
    int y = 0;
    int count = 0;

    if (border == 1) {
        Pborder(startX, startY, endX, endY, spaceBorder + 1, typeBorder);
    }

    gotoxy(startX, startY);

    while (y <= endY - startY) {
        if (TEXT[count] == '\0') {
            break;  // Fin du texte
        } else if (TEXT[count] == '\n') {
            x = 0;
            y++;
            gotoxy(startX, startY + y);
            count++;
        } else if (TEXT[count] == ' ') {
            if (x < endX - startX) {
                cout << " ";
                x++;
            } else {
                x = 0;
                y++;
                gotoxy(startX, startY + y);
            }
            count++;
        } else {
            int wordStart = count;
            while (TEXT[count] != ' ' && TEXT[count] != '\0' && TEXT[count] != '\n') {
                count++;
            }
            int wordLength = count - wordStart;

            if (x + wordLength <= endX - startX + 1) {
                for (int i = 0; i < wordLength; i++) {
                    cout << TEXT[wordStart + i];
                }
                x += wordLength;
            } else {
                x = 0;
                y++;
                gotoxy(startX, startY + y);
                for (int i = 0; i < wordLength; i++) {
                    cout << TEXT[wordStart + i];
                }
                x += wordLength;
            }
        }
    }
}


// Function to clean a part of the display || WARNING : the function may be slow !!!
void clearSpace(int startX, int startY, int endX, int endY){
    string emptyText;

    for(int i = 0; i < (endX - startX + 1) * (endY - startY + 1); i++) {
        emptyText += " ";
    }
    Ptext(startX, startY, endX, endY, 0,0,0, emptyText);
}


// Function to display an image from a text file
void Pimg(int startX, int startY, string img) {
    ifstream monFlux(img);  //Ouverture d'un fichier en lecture

    gotoxy(startX,startY);

    if(monFlux) {
        int x;
        monFlux >> x;
        int y;
        monFlux >> y;

        monFlux.ignore();        //On change de mode

        char a;
        for(int i = 1; i <= y; i++) {
            for(int j = 0; j <= x; j++) {
                monFlux.get(a);
                if(a != '\n') {
                    cout << static_cast<char>(a);
                }
            }
            gotoxy(startX,startY+i);
        }

        monFlux.close();
    }
    else
    {
        cout << ListText[lang + ErrorText + 2];
    }

    //      ,___,
    //      (O,O)
    //      /)_)
    //  =====""==-'
}


// Function to display a progress bar
void progressBar(int startX, int startY, int size, int space, int type, int state) {
    char full;
    char empty;

    switch (type){
    case 1:
        full = static_cast<char>(207);
        empty = static_cast<char>(15);
        break;
    case 2:
        full = static_cast<char>(127);
        empty = static_cast<char>(15);
        break;
    case 3:
        full = static_cast<char>(2);
        empty = static_cast<char>(1);
        break;
    default:
        full = static_cast<char>(3);
        empty = static_cast<char>(15);
        break;
    }

    gotoxy(startX,startY);

    if (size > 0) {
        for(int i = 0; i < size; i++){
            if(i < state) {
                cout << full;
            }
            else {
                cout << empty;
            }
            if(space > 0) {
                for(int i = 0; i < space; i++) {
                    cout << " ";
                }
            }
        }
    }
    else {
        cout << ListText[lang + ErrorText + 3];
    }
}


// Function to display a two-dimensional menu || Set -1 to typeBorder for no border
int MenuSelect(int startX, int startY, int row, int column, int scaleTitleX, int scaleTitleY, int scaleBorder, int typeBorder, int typeMenu, int ColorSelect, string ListMenu[], int sizeList) {
    int k;
    int DefColor = 7;
    int counterX = 1;
    int counterY = 1;
    int counterALL = 1;
    char key;
    int Set[sizeList];

    for(int i = 0; i <sizeList; i++)
        if(i == 0) {
            Set[i] = ColorSelect;
        }
        else {
            Set[i] = DefColor;    // DEFAULT COLORS
        }

    color(7);
    if (typeBorder != -1) {
        Pborder(startX,startY,startX + scaleTitleX * column,startY + scaleTitleY * row - 1,scaleBorder + 1,typeBorder);
    }


    if(row * column >= sizeList) {
        do {



            for (int i = 0; i < row; i++) {
                for (int j = 0; j < column; j++) {
                    int index = i * column + j;
                    if (index < sizeList) { // V‚rifiez que l'indice est dans la plage des ‚l‚ments de ListMenu
                        if (typeMenu == 1) { // center
                            gotoxy(startX + (2 * j + 1) * scaleTitleX/2 - ListMenu[index].length()/2, startY + i * scaleTitleY);
                        }
                        else if (typeMenu == 2) {
                            gotoxy(startX + (2 * j + 1) * scaleTitleX/2 - ListMenu[index].length()/2, startY + (2 * i + 1) * scaleTitleY/2);
                        }
                        else if (typeMenu == 3) {
                            gotoxy(startX + j * scaleTitleX - ListMenu[index].length()/2, startY + i * scaleTitleY);
                        }
                        else { // on left
                            gotoxy(startX + j * scaleTitleX, startY + i * scaleTitleY);
                        }
                        color(Set[index]);
                        cout << ListMenu[index];
                    }
                }
            }
            color(7);


            gotoxy(0,sizeWinY - 1);
            key = getch();



            if (key == KEY_UP && counterY >= 2) {
                counterY--;
            }
            if (key == KEY_DOWN && (counterY < sizeList / column + 1) && counterALL <= sizeList - column) {        //probleme a regler
                counterY++;
            }
            if (key == KEY_LEFT && counterX >= 2) {
                counterX--;
            }
            if (key == KEY_RIGHT && counterALL < sizeList) {
                if (sizeList % column == 0) {
                    if (counterX < column) {
                        counterX++;
                    }
                }
                else {
                    if (counterX < sizeList % column + 1) {
                        counterX++;
                    }
                }
            }


            counterALL = (counterY - 1) * column + counterX;


            for(int i = 0; i < sizeList; i++) {
                if(counterALL == i + 1) {
                    Set[i] = ColorSelect;
                }
                else {
                Set[i] = DefColor;
                }
            }


        } while(key != 27 && key != 13);


        if(key == 13)//carriage return
        {
            return counterALL;
        }
        if(key == 27)//carriage echap
        {
            return 0;
        }
        else
        {
            return -2;
        }



    }
    else {
        gotoxy(startX,startY);
        cout << ListText[lang + ErrorText + 4];
        return -1;
    }
    system("cls");

    //      ,___,
    //      [O.o]
    //      /)  )
    //      -"--"-
}


// Function for confirm exit
int confirm(int startX, int startY, int type) {
    int Set[] = {12,7};
    int counter = 1;
    int key;
    int result = 0;
    string text;

    string NoYes[2] = {ListText[lang + Menu_YesNo + 2], ListText[lang + Menu_YesNo + 1]};


    switch (type){
    case 1:
        text = ListText[lang + MenuQuit + 1];
        break;
    default:
        text = ListText[lang + MenuQuit + 2];
        break;
    }

    color(7);
    Ptext(startX, startY, startX + 40, startY + 2,  1, 0, 1,text);

    result = MenuSelect(startX + 13, startY + 2, 1, 2, 10, 1, 0, -1, 0, 12, NoYes, 2);
    
    system("cls");
    return result;

}


// Function for language selection (program start)
int SelectLang() {
    int ColorSelect = 12;
    string ListLANG[CountLang];
    for (int i = 0; i < CountLang; i++) {
        ListLANG[i] = ListText[SizeLang * i + ListLang + 1];
    }

    int BorderX = 40;
    Ptext((sizeWinX)/2 - size(ListText[lang + SelectLanguage + 1])/2, (sizeWinY)/2 - 7,(sizeWinX)/2 + size(ListText[lang + SelectLanguage + 1])/2, (sizeWinY)/2, 0,0,0, ListText[lang + SelectLanguage + 1]);
    int selectLang = MenuSelect((sizeWinX)/2 - BorderX/2,sizeWinY/2 + 2, 1, CountLang, (BorderX + 1)/(CountLang - 1), 1, 0, -1, 3, ColorSelect, ListLANG, CountLang);
    int select = chanLang(selectLang - 1);
    return select;
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


//voir si faire une fonction au dessus pour affichage tama



// Udapte Display Game
void UdapteDisplayGame(Tamagotchi MainTAMA, int BorderY) {
    int sizeImgY = 5;
    system("cls");
    Fenetre(sizeWinX,sizeWinY);
    Background();
    Pborder(3,sizeWinY - BorderY,sizeWinX - 4,sizeWinY - 4,1,1);
    // function img tama
    if(MainTAMA.getState() == 1) {
        sizeImgY = 6;
    }
    Ptext(sizeWinX/2 - size(MainTAMA.getName())/2, sizeWinY - sizeImgY - BorderY - 5, sizeWinX/2 + size(MainTAMA.getName())/2,  sizeWinY - sizeImgY - BorderY - 5, 0,0,0, MainTAMA.getName());
    AllStatDisplay(MainTAMA);
}