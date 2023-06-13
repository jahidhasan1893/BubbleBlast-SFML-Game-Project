//#include "Main_menu.h"
#include<SFML/Graphics.hpp>
#include<bits/stdc++.h>
#define Max_main_menu 4
using namespace std;
using namespace sf;

class Main_menu
{
    public:Main_menu(float width,float height);
    void draw(RenderWindow& window);
    void MoveUp();
    void MoveDown();
//    int MainMenuPressed()
//    {
//        return MainMenuSelected;
//    }
    ~Main_menu();
    private:
        int MainMenuSelcted;
        Font font;
        Text mainMenu[Max_main_menu];
};
