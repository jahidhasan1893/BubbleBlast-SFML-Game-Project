#include "game.h"

//Constructor
game::game(float width,float height)
{
    pos.x=673;
    pos.y=491.9;
    w_width=width;
    w_height=height;
    a=0.f,b=70.f;
    a1=60.f,b1=600.f;
    a2=1100.f,b2=20.f;
    a3=970.f,b3=13.88f;
    a4=220.f,b4=100.f;
    a5=600.f,b5=710.3f;
    chk1=0;
    chk=0;
    chk2=0;
    chk3=0;
    chk4=0;
    chk5=0;
    aclr=0;
    is_running=0;
    is_left=0;
    is_right=0;
    is_up=0;
    is_down=0;
    is_game_over=0;
    is_pause=1;
    is_resume=0;
}

//Destructor
game::~game()
{
    //dtor
}

void game::draw(RenderWindow& window)
{
    if(is_resume==1) run();

    if (!BgTexture.loadFromFile("images/background.jpg"))
    {
        printf("file not found\n");
    }
    BgTexture.setSmooth(true);
    BgSprite.setTexture(BgTexture);
    window.draw(BgSprite);


    if (!arrowTexture.loadFromFile("images/arrow.png"))
    {
       printf("file not found\n");
    }
    arrowTexture.setSmooth(true);
    arrowSprite.setTexture(arrowTexture);
    arrowSprite.setScale(0.12,0.12);
    arrowSprite.setPosition(1085,705);
    window.draw(arrowSprite);


    if (!PlTexture.loadFromFile("images/hero.png"))
    {
        printf("file not found\n");
    }
    PlTexture.setSmooth(true);
    PlSprite.setTexture(PlTexture);
    PlSprite.setScale(0.15,0.15);
    PlSprite.setPosition(pos);
    window.draw(PlSprite);


    if (!obsTexture.loadFromFile("images/star.png"))
    {
        printf("file not found\n");
    }
    obsTexture.setSmooth(true);
    obsSprite.setTexture(obsTexture);
    obsSprite.setScale(0.04,0.04);
    obsSprite.setPosition(a,b);
    window.draw(obsSprite);


    if (!obs1Texture.loadFromFile("images/star.png"))
    {
        printf("file not found\n");
    }
    obs1Texture.setSmooth(true);
    obs1Sprite.setTexture(obs1Texture);
    obs1Sprite.setScale(0.04,0.04);
    obs1Sprite.setPosition(a1,b1);
    window.draw(obs1Sprite);


    if (!obs2Texture.loadFromFile("images/star.png"))
    {
        printf("file not found\n");
    }
    obs2Texture.setSmooth(true);
    obs2Sprite.setTexture(obs2Texture);
    obs2Sprite.setScale(0.04,0.04);
    obs2Sprite.setPosition(a2,b2);
    window.draw(obs2Sprite);


    if (!wallTexture.loadFromFile("images/wall2.png"))
    {
        printf("file not found\n");
    }
    wallTexture.setSmooth(true);
    wallSprite.setTexture(wallTexture);
    wallSprite.setScale(0.4,0.35);
    wallSprite.setPosition(400,150);
    window.draw(wallSprite);


    if (!wall4Texture.loadFromFile("images/wall2.png"))
    {
        printf("file not found\n");
    }
    wall4Texture.setSmooth(true);
    wall4Sprite.setTexture(wall4Texture);
    wall4Sprite.setScale(0.4,0.35);
    wall4Sprite.setPosition(400+wallSprite.getGlobalBounds().width,150);
    window.draw(wall4Sprite);


    if (!wall2Texture.loadFromFile("images/wall1.png"))
    {
        printf("file not found\n");
    }
    wall2Texture.setSmooth(true);
    wall2Sprite.setTexture(wall2Texture);
    wall2Sprite.setScale(0.35,0.6);
    wall2Sprite.setPosition(400,150+wallSprite.getGlobalBounds().height);
    window.draw(wall2Sprite);


    if (!wall3Texture.loadFromFile("images/wall2.png"))
    {
        printf("file not found\n");
    }
    wall3Texture.setSmooth(true);
    wall3Sprite.setTexture(wall3Texture);
    wall3Sprite.setScale(0.4,0.35);
    wall3Sprite.setPosition(400,150+wallSprite.getGlobalBounds().height+wall2Sprite.getGlobalBounds().height);
    window.draw(wall3Sprite);


    if (!wall5Texture.loadFromFile("images/wall2.png"))
    {
        printf("file not found\n");
    }
    wall5Texture.setSmooth(true);
    wall5Sprite.setTexture(wall5Texture);
    wall5Sprite.setScale(0.35,0.35);
    wall5Sprite.setPosition(400+wall3Sprite.getGlobalBounds().width,150+wallSprite.getGlobalBounds().height+wall2Sprite.getGlobalBounds().height);
    window.draw(wall5Sprite);


    if (!wall6Texture.loadFromFile("images/wall1.png"))
    {
        printf("file not found\n");
    }
    wall6Texture.setSmooth(true);
    wall6Sprite.setTexture(wall6Texture);
    wall6Sprite.setScale(0.35,0.35);
    wall6Sprite.setPosition(400+wall3Sprite.getGlobalBounds().width+wall5Sprite.getGlobalBounds().width,60+wallSprite.getGlobalBounds().height+wall2Sprite.getGlobalBounds().height);
    window.draw(wall6Sprite);


    if (!wall7Texture.loadFromFile("images/wall2.png"))
    {
        printf("file not found\n");
    }
    wall7Texture.setSmooth(true);
    wall7Sprite.setTexture(wall7Texture);
    wall7Sprite.setScale(0.3,0.35);
    wall7Sprite.setPosition(-50,300);
    window.draw(wall7Sprite);


    if (!wall8Texture.loadFromFile("images/wall1.png"))
    {
        printf("file not found\n");
    }
    wall8Texture.setSmooth(true);
    wall8Sprite.setTexture(wall8Texture);
    wall8Sprite.setScale(0.3,0.35);
    wall8Sprite.setPosition(470,w_height+100-wall8Sprite.getGlobalBounds().height);
    window.draw(wall8Sprite);


    if (!wall9Texture.loadFromFile("images/wall2.png"))
    {
        printf("file not found\n");
    }
    wall9Texture.setSmooth(true);
    wall9Sprite.setTexture(wall9Texture);
    wall9Sprite.setScale(0.3,0.35);
    wall9Sprite.setPosition(-100,0);
    window.draw(wall9Sprite);


    if (!wall10Texture.loadFromFile("images/wall2.png"))
    {
        printf("file not found\n");
    }
    wall10Texture.setSmooth(true);
    wall10Sprite.setTexture(wall10Texture);
    wall10Sprite.setScale(0.3,0.35);
    wall10Sprite.setPosition(w_width-100,150+wallSprite.getGlobalBounds().height+wall2Sprite.getGlobalBounds().height);
    window.draw(wall10Sprite);


    if (!kataTexture.loadFromFile("images/kata2.png"))
    {
        printf("file not found\n");
    }
    kataTexture.setSmooth(true);
    kataSprite.setTexture(kataTexture);
    kataSprite.setScale(0.5,0.3);
    kataSprite.setPosition(0,w_height-kataSprite.getGlobalBounds().height);
    window.draw(kataSprite);


    if (!kata2Texture.loadFromFile("images/kata2.png"))
    {
        printf("file not found\n");
    }
    kata2Texture.setSmooth(true);
    kata2Sprite.setTexture(kata2Texture);
    kata2Sprite.setScale(0.5,0.5);
    kata2Sprite.setPosition(0,300-kata2Sprite.getGlobalBounds().height);
    window.draw(kata2Sprite);


    if (!kata3Texture.loadFromFile("images/kata1.png"))
    {
        printf("file not found\n");
    }
    kata3Texture.setSmooth(true);
    kata3Sprite.setTexture(kata3Texture);
    kata3Sprite.setScale(0.5,0.3);
    kata3Sprite.setPosition(400+wall3Sprite.getGlobalBounds().width+wall5Sprite.getGlobalBounds().width-kata3Sprite.getGlobalBounds().width,150+wallSprite.getGlobalBounds().height+wall2Sprite.getGlobalBounds().height-kata3Sprite.getGlobalBounds().height);
    window.draw(kata3Sprite);


    if (!kboxTexture.loadFromFile("images/kbox1.png"))
    {
        printf("file not found\n");
    }
    kboxTexture.setSmooth(true);
    kboxSprite.setTexture(kboxTexture);
    kboxSprite.setScale(0.3,0.27);
    kboxSprite.setPosition(wall3Sprite.getGlobalBounds().width+wall5Sprite.getGlobalBounds().width+wall6Sprite.getGlobalBounds().width+400,wallSprite.getGlobalBounds().height+wall2Sprite.getGlobalBounds().height+150);
    window.draw(kboxSprite);


    if (!kbox2Texture.loadFromFile("images/kbox1.png"))
    {
        printf("file not found\n");
    }
    kbox2Texture.setSmooth(true);
    kbox2Sprite.setTexture(kbox2Texture);
    kbox2Sprite.setScale(0.3,0.3);
    kbox2Sprite.setPosition(w_width-kbox2Sprite.getGlobalBounds().width,600);
    window.draw(kbox2Sprite);


    if (!kbox3Texture.loadFromFile("images/kbox1.png"))
    {
        printf("file not found\n");
    }
    kbox3Texture.setSmooth(true);
    kbox3Sprite.setTexture(kbox3Texture);
    kbox3Sprite.setScale(0.3,0.3);
    kbox3Sprite.setPosition(a3,b3);
    window.draw(kbox3Sprite);


    if (!kbox4Texture.loadFromFile("images/kbox1.png"))
    {
        printf("file not found\n");
    }
    kbox4Texture.setSmooth(true);
    kbox4Sprite.setTexture(kbox4Texture);
    kbox4Sprite.setScale(0.3,0.3);
    kbox4Sprite.setPosition(a4,b4);
    window.draw(kbox4Sprite);


    if (!kbox5Texture.loadFromFile("images/kbox2.png"))
    {
        printf("file not found\n");
    }
    kbox5Texture.setSmooth(true);
    kbox5Sprite.setTexture(kbox5Texture);
    kbox5Sprite.setScale(0.3,0.3);
    kbox5Sprite.setPosition(a5,b5);
    window.draw(kbox5Sprite);


    if(is_home==1)
    {
        if (!menuBgTexture.loadFromFile("images/menubg.png"))
        {
            printf("file not found\n");
        }
        menuBgTexture.setSmooth(true);
        menuBgSprite.setScale(0.65,0.75);
        menuBgSprite.setTexture(menuBgTexture);
        window.draw(menuBgSprite);
    }
}



bool game::in_bound(float x,float y,Sprite sprite)
{
    if(y>=750 && y<=800)
    {
        if(x>=1150)
        {
            is_running=0;
            you_win=1;
            is_pause=1;
            is_resume=0;
            return true;
        }
    }
    if(x+sprite.getGlobalBounds().width>=w_width || x<0) return false;
    if(y+sprite.getGlobalBounds().height>=w_height || y<0) return false;
    return true;
}



void game::updatePlayer(char c)
{
    if(c=='r' && in_bound(pos.x+10,pos.y,PlSprite) && is_running==0)
    {
        is_right=1;
        is_left=0;
        is_up=0;
        is_down=0;
        is_running=1;
    }
    else if(c=='l' && in_bound(pos.x-10,pos.y,PlSprite) && is_running==0)
    {
        is_right=0;
        is_left=1;
        is_up=0;
        is_down=0;
        is_running=1;
    }
    else if(c=='u' && in_bound(pos.x,pos.y-10,PlSprite) && is_running==0)
    {
        is_right=0;
        is_left=0;
        is_up=1;
        is_down=0;
        is_running=1;
    }
    else if(c=='d' && in_bound(pos.x,pos.y+10,PlSprite) && is_running==0)
    {
        is_right=0;
        is_left=0;
        is_up=0;
        is_down=1;
        is_running=1;
    }
}



void game::run_star1()
{
    if(in_bound(a+35,b1,obsSprite)==0 || in_bound(a-35,b1,obsSprite)==0)
    {
        float w=obsSprite.getGlobalBounds().width;
        if(a+35>w_width-w)
        {
            a=w_width-w;
            chk=1;
        }
        else if(a-35<0)
        {
            a=0;
            chk=0;
        }
    }
    if(!chk) a+=35;
    else a-=35;
}



void game::run_star2()
{
    if(in_bound(a1,b1+35,obs1Sprite)==0 || obs1Sprite.getGlobalBounds().intersects(wall7Sprite.getGlobalBounds()))
    {
        float h=obs1Sprite.getGlobalBounds().height;
        if(b1+35>w_height-h)
        {
            b1=w_height-h;
            chk1=1;
        }
        else if((b1-35)<(300+wall7Sprite.getGlobalBounds().height))
        {
            b1=300+wall7Sprite.getGlobalBounds().height;
            chk1=0;
        }
    }
    if(!chk1) b1+=35;
    else b1-=35;
}



void game::run_star3()
{
    float h=obs2Sprite.getGlobalBounds().height;
    if(in_bound(a2,b2-35,obs2Sprite)==0 || (b2+35)>(wall10Sprite.getPosition().y-h))
    {
        if((b2+35)>(wall10Sprite.getPosition().y-h))
        {
            b2=wall10Sprite.getPosition().y-h;
            chk2=1;
        }
        else if(b2-35<0)
        {
            b2=0;
            chk2=0;
        }
    }
    if(!chk2) b2+=35;
    else b2-=35;
}



void game::run_kata1()
{
    if(in_bound(a3,b3+35,kbox3Sprite)==0 || in_bound(a3,b3-35,kbox3Sprite)==0)
    {
        float w=kbox3Sprite.getGlobalBounds().width;
        if(b3+35>w_height-w)
        {
            b3=w_height-w;
            chk3=1;
        }
        else if(b3-35<0)
        {
            b3=0;
            chk3=0;
        }
    }
    if(!chk3) b3+=35;
    else b3-=35;
}



void game::run_kata2()
{
    if(in_bound(a4,b4+35,kbox4Sprite)==0 || in_bound(a4,b4-35,kbox4Sprite)==0)
    {
        float w=kbox4Sprite.getGlobalBounds().width;
        if(b4+35>w_height-w)
        {
            b4=w_height-w;
            chk4=1;
        }
        else if(b4-35<0)
        {
            b4=0;
            chk4=0;
        }
    }
    if(!chk4) b4+=35;
    else b4-=35;
}



void game::run_kata3()
{
    if(in_bound(a5+35,b5,kbox5Sprite)==0 || wall8Sprite.getGlobalBounds().intersects(kbox5Sprite.getGlobalBounds()))
    {
        float w=kbox5Sprite.getGlobalBounds().width;
        if(a5+35>w_width-w)
        {
            a5=w_width-w;
            chk5=1;
        }
        else if(a5-35<(wall8Sprite.getPosition().x+wall8Sprite.getGlobalBounds().width))
        {
            a5=(wall8Sprite.getPosition().x+wall8Sprite.getGlobalBounds().width);
            chk5=0;
        }
    }
    if(!chk5) a5+=35;
    else a5-=35;
}



void game::run()
{
    run_kata1();
    run_kata2();
    run_kata3();
    run_star1();
    run_star2();
    run_star3();

    if((PlSprite.getGlobalBounds().intersects(wallSprite.getGlobalBounds()) || PlSprite.getGlobalBounds().intersects(wall4Sprite.getGlobalBounds())) && is_running)
    {
        pos.y=195;
        is_running=0;
    }
    else if((PlSprite.getGlobalBounds().intersects(wall2Sprite.getGlobalBounds())) && is_running)
    {
        if(pos.x<400)
        {
            pos.x=400-44;
        }
        else
        {
            pos.x=445;
        }
        is_running=0;
    }
    else if((PlSprite.getGlobalBounds().intersects(wall3Sprite.getGlobalBounds()) || PlSprite.getGlobalBounds().intersects(wall5Sprite.getGlobalBounds())) && is_running)
    {
        if(pos.y<550)
        {
            pos.y=490;
        }
        else
        {
            pos.y=150+wallSprite.getGlobalBounds().height+wall2Sprite.getGlobalBounds().height+wall3Sprite.getGlobalBounds().height;
        }
        is_running=0;
    }
    else if((PlSprite.getGlobalBounds().intersects(wall10Sprite.getGlobalBounds())) && is_running)
    {
        pos.y=491;
        is_running=0;
    }
    else if((PlSprite.getGlobalBounds().intersects(wall6Sprite.getGlobalBounds())) && is_running)
    {
        if(pos.y<492)
        {
            if(pos.x+44>870)
            {
                pos.x=873;
                is_running=0;
            }
            else
            {
                is_game_over=1;
                is_resume=0;
                is_pause=1;
            }
        }
        else if(pos.x>740)
        {
            pos.x=784;
            is_running=0;
        }
    }
    else if((PlSprite.getGlobalBounds().intersects(wall9Sprite.getGlobalBounds())) && is_running)
    {
        pos.x=72;
        is_running=0;
    }
    else if((PlSprite.getGlobalBounds().intersects(wall7Sprite.getGlobalBounds())) && is_running)
    {
        pos.y=300-44;
        is_running=0;
    }
    else if((PlSprite.getGlobalBounds().intersects(wall8Sprite.getGlobalBounds())) && is_running)
    {
        if(pos.x<470)
        {
            pos.x=470-44;
        }
        else
        {
            pos.x=472+wall8Sprite.getGlobalBounds().width;
        }
        is_running=0;
    }
    else if((PlSprite.getGlobalBounds().intersects(obsSprite.getGlobalBounds()) || PlSprite.getGlobalBounds().intersects(obs1Sprite.getGlobalBounds()) || PlSprite.getGlobalBounds().intersects(obs2Sprite.getGlobalBounds()) || PlSprite.getGlobalBounds().intersects(kboxSprite.getGlobalBounds()) || PlSprite.getGlobalBounds().intersects(kbox2Sprite.getGlobalBounds()) || PlSprite.getGlobalBounds().intersects(kbox3Sprite.getGlobalBounds()) || PlSprite.getGlobalBounds().intersects(kbox4Sprite.getGlobalBounds()) || PlSprite.getGlobalBounds().intersects(kbox5Sprite.getGlobalBounds()) || kbox5Sprite.getGlobalBounds().intersects(PlSprite.getGlobalBounds()) || PlSprite.getGlobalBounds().intersects(kataSprite.getGlobalBounds()) || PlSprite.getGlobalBounds().intersects(kata2Sprite.getGlobalBounds()) || PlSprite.getGlobalBounds().intersects(kata3Sprite.getGlobalBounds())) && is_running)
    {
        is_game_over=1;
        is_resume=0;
        is_pause=1;
    }


    Clock clock;
    float t=clock.getElapsedTime().asSeconds();


    if(in_bound(pos.x,pos.y,PlSprite) && is_right && is_running)
    {
        pos.x+=(51+aclr*t);
        aclr+=10;
        if(in_bound(pos.x,pos.y,PlSprite)==0)
        {
            pos.x=1200-44;
            is_running=0;
        }
    }
    else if(in_bound(pos.x,pos.y,PlSprite) && is_left && is_running)
    {
        pos.x-=(51+aclr*t);
        aclr+=10;
        if(in_bound(pos.x,pos.y,PlSprite)==0)
        {
            pos.x=0;
            is_running=0;
        }
    }
    else if(in_bound(pos.x,pos.y,PlSprite) && is_down && is_running)
    {
        pos.y+=(51+aclr*t);
        aclr+=10;
        if(in_bound(pos.x,pos.y,PlSprite)==0)
        {
            pos.y=800-44;
            is_running=0;
        }
    }
    else if(in_bound(pos.x,pos.y,PlSprite) && is_up && is_running)
    {
        pos.y-=(51+aclr*t);
        aclr+=10;
        if(in_bound(pos.x,pos.y,PlSprite)==0)
        {
            pos.y=0;
            is_running=0;
        }
    }
    clock.restart();
}


