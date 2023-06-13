#include "Main_menu.h"
Main_menu::Main_menu(float width,float height)
{
    if(!font.loadFromFile(""))
    {
        cout<<"No font found"<<endl;
    }

    mainMenu[0].setFont(font);
    mainMenu[0].setFillColor(Color::White);
    mainMenu[0].setString("play");
    mainMenu[0].setCharacterSize(70);
    mainMenu[0].setPosition(400,200);

    mainMenu[1].setFont(font);
    mainMenu[1].setFillColor(Color::White);
    mainMenu[1].setString("play");
    mainMenu[1].setCharacterSize(70);
    mainMenu[1].setPosition(400,200);

    mainMenu[2].setFont(font);
    mainMenu[2].setFillColor(Color::White);
    mainMenu[2].setString("play");
    mainMenu[2].setCharacterSize(70);
    mainMenu[2].setPosition(400,200);

    mainMenu[3].setFont(font);
    mainMenu[3].setFillColor(Color::White);
    mainMenu[3].setString("play");
    mainMenu[3].setCharacterSize(70);
    mainMenu[3].setPosition(400,200);
    MainMenuSelcted=-1;
}

Main_menu::~Main_menu()
{

}

void Main_menu::draw(RenderWindow& window)
{
    for(int i=0;i<Max_main_menu;++i)
    {
        window.draw(mainMenu[i]);
    }
}

void Main_menu::MoveUp()
{
//    if(MainMenuSelected-1>=0)
//    {
//        mainMenu[MainMenuSelected].setFillColor(Color::White);
//        MainMenuSelected--;
//        if(MainMenuSelected==-1)
//        {
//            MainMenuSelected=2;
//        }
//        mainMenu[MainMenuSelected].setFillColor(Color::Blue);
//    }
}

void Main_menu::MoveDown()
{
//    if(MainMenuSelected+1<=Max_main_menu)
//    {
//        mainMenu[MainMenuSelected].setFillColor(Color::White);
//        MainMenuSelected++;
//        if(MainMenuSelected==4)
//        {
//            MainMenuSelected=0;
//        }
//        mainMenu[MainMenuSelected].setFillColor(Color::Blue);
//    }
}
