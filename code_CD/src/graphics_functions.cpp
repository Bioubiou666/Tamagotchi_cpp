#include "../include/graphics_functions.hpp"


// Start language
int lang = 0;


string EggDef = "../data/graphics/AllEggs/Egg_Def.txt";
string Egg1 = "../data/graphics/AllEggs/Egg_1.txt";
string Egg2 = "../data/graphics/AllEggs/Egg_2.txt";
string Egg3 = "../data/graphics/AllEggs/Egg_3.txt";
string Egg4 = "../data/graphics/AllEggs/Egg_4.txt";
string Egg5 = "../data/graphics/AllEggs/Egg_5.txt";
string RandomImg = "../data/graphics/AllEggs/RandomImg.txt";
string ListImgEgg[7] = {EggDef, Egg1, Egg2, Egg3, Egg4, Egg5, RandomImg};

string DefImg = "../data/graphics/StateTAMA/default.txt";

// ADD HERE ALL DISPLAY TAMA
//
//
string allLang = "../data/lang/testttt.txt";

// Function to create list all language
int MakeLang() {
    ifstream monFlux(allLang);  //Ouverture d'un fichier en lecture


    if(monFlux) {
        /*
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
        */

        return 1;
    }
    else
    {
        return 0;
    }
}


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
    int addSizeX = 0;
    int addSizeY = 0;

    switch (type){
    case 1:
        text = ListText[lang + MenuQuit + 1];
        addSizeY = 2;
        break;
    case 2:
        text = ListText[lang + MenuPause + 3];
        addSizeX = -4;
        break;
    default:
        text = ListText[lang + MenuQuit + 2];
        break;
    }

    color(7);
    clearSpace(startX - addSizeX, startY, startX + addSizeX + 40, startY + addSizeY + 2);
    Ptext(startX - addSizeX, startY, startX + addSizeX + 40, startY + addSizeY + 2,  1, 0, 1,text);

    result = MenuSelect(startX + 11, startY + addSizeY + 2, 1, 2, 16, 1, 0, -1, 0, 12, NoYes, 2);
    
    clearSpace(startX - addSizeX - 2, startY - 1, startX + addSizeX + 43, startY + addSizeY + 3);
    return result;

}


// Function for language selection (program start)
int SelectLang() {
    int ColorSelect = 12;
    string ListLANG[COUNTLANG];
    for (int i = 0; i < COUNTLANG; i++) {
        ListLANG[i] = ListText[SizeLang * i + ListLang + 1];
    }

    int BorderX = 40;
    Ptext((sizeWinX)/2 - size(ListText[lang + SelectLanguage + 1])/2, (sizeWinY)/2 - 7,(sizeWinX)/2 + size(ListText[lang + SelectLanguage + 1])/2, (sizeWinY)/2, 0,0,0, ListText[lang + SelectLanguage + 1]);
    int selectLang = MenuSelect((sizeWinX)/2 - BorderX/2,sizeWinY/2 + 2, 1, COUNTLANG, (BorderX + 1)/(COUNTLANG - 1), 1, 0, -1, 3, ColorSelect, ListLANG, COUNTLANG);
    int select = chanLang(selectLang - 1);
    return select;
}