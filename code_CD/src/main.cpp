#include "../include/main.hpp"

int confirm1;
string A;
int B;

int main() {
    if(MakeLang()) {

        system("cls");
        lang = SelectLang();

        int ColorSelect = 12;
        string ListMenu[5] = {ListText[lang + MenuMain + 1], ListText[lang + MenuMain + 2], ListText[lang + MenuMain + 3], ListText[lang + MenuMain + 4], ListText[lang + MenuMain + 5]};
        int sizeList = sizeof ListMenu/sizeof ListMenu[0];
        int select;
        int key = 1;


        while(key == 1) {
            system("cls");


            color(7);
            Fenetre(sizeWinX,sizeWinY);
            Ptext((sizeWinX)/2 - 20,3,(sizeWinX - 1)/2 + 20,5, 1, 0, 0,ListText[lang + IntroText + 1]);//Ptext(39,3,79,5, 1, 1, 0,gameWelcome);
            
            select = MenuSelect((sizeWinX)/2 - 10,sizeWinY/2 - 7, 5, 1, 20, 3, 0, 0, 2, ColorSelect, ListMenu, sizeList);



            if(select == 1) {
                A = mainNewGameNAME();
                B = mainNewGameTYPE();
                Tamagotchi MainTAMA(A,B);
                bool test = hatching(MainTAMA);
                if (test) {
                    mainGame(0, MainTAMA);
                }
            }
            if(select == 2) {
                Tamagotchi MainTAMA;
                MainTAMA.Load();
                mainGame(1, MainTAMA);
            }
            if(select == 3) {
                DefaultPage();
                //mainGraveyard();
            }
            if(select == 4) {
                DefaultPage();
                //mainSettings();
            }
            if(select == 5) {
                confirm1 = confirm((sizeWinX - 1)/2 - 20, 24, 0);
                if(confirm1 == 2) {
                    key = 0;
                }
            }
        }
    }
    else {
        cout << "WARNING : It seems that there is a problem with the language system";
        _getch();
    }
}