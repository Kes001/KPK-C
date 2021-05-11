//{===========================================================================
//! @file       Protsenko_Konstantin_Mult.cpp
//!
//! @brief      Cartoon dedicated to the 60th anniversary of space flight.
//!
//!             KPK C++
//!
//!             $Date: 2021-04-12 $
//!             $Copyright: (C) Kes001 (Protsenko Konstantin) <procenkok@yandex.ru> $
//          (C) Protsenko Konstantin, Magnitogorsk, 2021
//}===========================================================================

#include "KonstantinLib.h"
#include "DerMeisterLib.h"

using namespace Konstantin;

//-----------------------------------------------------------------------------

void drawEpisode1 ();
void drawEpisode2 ();
void drawEpisode3 ();
void drawEpisode4 ();
void drawEpisode5 ();
void drawEpisode6 ();

//-----------------------------------------------------------------------------

int main()
    {
    txCreateWindow (SCR_WIDTH, SCR_HEIGTH);

    //drawStartTitles ();

    //drawEpisode1    ();
    //drawEpisode2    ();
    drawEpisode3    ();
    drawEpisode4    ();
    drawEpisode5    ();
    drawEpisode6    ();

    //drawEndTitles   ();

    return 0;
    }

void drawEpisode1 ()
    {
    drawBackground ();
    drawMan        (200, 550, 80, 170, TX_YELLOW, 0.2, 0, 0.2, 0.5, 2);

    txPlaySound    ("sounds/say.wav");
    txSleep        (1000);

    txSetColor     (TX_WHITE);
    txSelectFont   ("Arial", 50);
    txTextOut      (200, 350, "Abra-cadabra!");
    txSleep        (2000*DELAY);

    drawBackground ();
    drawMan        (200, 550, 80, 170, TX_YELLOW, 0.2, 0, 0.2, 0.5, 2);

    txPlaySound ("sounds/groza.wav");

    for (int x = 100; x <= 800; x += 150)
        {
        drawCloud (x, x%100 + 50, 50 + x/10%10);
        txSleep   (1000*DELAY);

        if (x >= 250 and x < 700)
            {
            drawLightning (x + 60, 175, 0.8 + x/1000.0, 0.7 + x/1000.0, TX_WHITE);
            drawMan       (200, 550, 80, 170, TX_YELLOW, 0.2, 0, 0.2, 0.5, 2 + x/100);
            }
        }

    txSetColor     (TX_WHITE);
    txSelectFont   ("Arial", 50);
    txTextOut      (200, 350, " Ups ...");

    txSleep        (2000*DELAY);

    txPlaySound ("sounds/rain.wav");

    int t = 0;
    while (t < 200)
        {
        drawBackground ();

        for (int i = 1; i <= SCR_WIDTH/100; i++)
            {
            drawCloud (i*150 - 100, 20 + rand()%50, 50 - t%20);
            }

        drawMan    (200 - t*2, 550, 80, 170, TX_YELLOW, -0.1 - t%2/10.0, 0 + t%2/10.0, 0.1 - t%2/2.0, -0.8, t%4);
        drawPuddle (t, 0);
        drawRain   (0, 70, 15);

        t += 15;
        }
    }

//-----------------------------------------------------------------------------

void drawEpisode2 ()
    {
    txPlaySound ("sounds/town.wav");

    int t = 0;
    while (t < 60)
        {
        drawBackground ();

        drawSun    (880, 90, t, t%10 + 10, t%5, t%10 + 5);
        drawPuddle (-2*t, 100);

        txSleep    (100*DELAY);
        t++;
        }

    drawHouse (840, 280, 1.8, 1.3, TX_BLACK,    10, 10, 3,  10);
    txSleep   (800*DELAY);
    drawHouse (540, 300, 1.3, 1.2, TX_DARKGRAY, 20, -5, 1, -50);
    txSleep   (700*DELAY);
    drawHouse (240, 340, 1,   1,   TX_MAGENTA,  30, 25, 2,  10);
    txSleep   (600*DELAY);

    t = 0;
    while (t < 100)
        {
        drawBackground ();
        drawHouses     (t);

        drawMan        (t, 550, 80, 170, TX_YELLOW, -0.1 - t%2/10.0, 0 - t%5/10.0, 0.1 - t%2/2.0, -0.2, 2 + t%4);
        drawSun        (880, 90, 60, t%10 + 10, t%5, t%10 + 5);

        t += 3;
        txSleep (100*DELAY);
        }
    }

//-----------------------------------------------------------------------------

void drawEpisode3 ()
    {
    int t = 0;

    txPlaySound ("sounds/rocket.wav");
    while (t < 500)
        {
        txBegin ();
        drawBackground ();

        drawRocket (150, 500,   0.7,   1, TX_WHITE, 2*t);
        drawGround (  0, 540);
        drawHouses ();
        drawSun    (880,  90,  60, t%10 + 10, t%5, t%10 + 5);
        drawMan    (100, 550 - t%10, 80, 170, TX_YELLOW, 0.1 - t%2/10.0,
                    0 - t%2/10.0, -0.3, -0.1, 2 + t%3);
        BusRDraw   (t*2, 550, 1, TX_DARKGRAY, 0 + ((t/20)%4)*2, 0 + (t/20)%4,
                    0 + (t%15)*2, 1.3, 0, 0);

        txSleep    (100*DELAY);
        t += 5;
        txEnd ();
        }
    }

//-----------------------------------------------------------------------------

void drawEpisode4 ()
    {
    txPlaySound ("sounds/KtoTebyaSoztal.wav");

    for (int t = 0; t < 150; t++)
       {
        txBegin ();
        drawBackground ();

        drawHouses ();
        drawSun    (880,  90,  60, t%10 + 10, t%5, t%10 + 5);
        drawMan    (100, 550, 80, 170, TX_YELLOW,  -0.1, 0 , 0.1, 0.1, 2);

        if (t <= 30)
            {
            BusRDraw (1000, 550, 0, TX_MYRED, 0, 0, 0, 1.3, 0 + (t/5)%11, 0);
            }
        if (30 < t && t <= 90)
            {
            BusRDraw (1000, 550, 0, TX_MYRED, 0, 1, 0, 1.3, 10, 0 + ((t - 50)/2)%26);
            }
        if (90 < t && t <= 120)
            {
            BusRDraw (1000, 550, 0, TX_MYRED, 0, 0, 0, 1.3, 10, 25);
            }
        if (120 < t && t <= 150)
            {
            BusRDraw  (1000, 550, 0, TX_MYRED, 0, 0, 0, 1.3, 10, 25);
            MadamDraw ( 800, 500, 2, TX_BLUE, 1, 0, 0, 0, 0, 0, 0, 1.1);
            }
        txSleep (5*DELAY);
        txEnd ();
        }

    int t = 0;

    while (t < 500)
        {
        txBegin ();
        drawBackground ();

        drawHouses ();
        drawSun    (880,  90,  60, t%10 + 10, t%5, t%10 + 5);
        BusRDraw   (1000, 550, 0, TX_MYRED, 0, 0, 0, 1.3, 10, 25);
        MadamDraw  (ROUND(800 + t/1.3), 500, 2, TX_BLUE, 1, 0, 0, 0, 0, 1, 1, 1.1);
        drawMan    (100 + t, 550 + t/6, 80, 170, TX_YELLOW, -0.1, 0 , 0.1 - t%2/2.0, 0.1, 2 + t/70);

        txSetColor (TX_RED);
        txSetFillColor (TX_RED);
        txCircle   (165 + t, 400 + t/6, 20);
        txSetColor (TX_YELLOW);
        txSetFillColor (TX_YELLOW);
        txCircle   (165 + t, 400 + t/6, 10);

        txSleep (100*DELAY);
        t += 5;
        txEnd ();
        }
    }

//-----------------------------------------------------------------------------

void drawEpisode5 ()
    {
    txPlaySound ("Soundtrack/Sea.wav");

    for (int t = 0; t <= 500; t ++)
        {
        txBegin ();
        txSetFillColor (TX_WHITE);
        txClear ();

        if ((t/80)%2 < 1)
            {
            BackgroundBeach (1 + (t/2)%40);
            }
        else
            {
            BackgroundBeach (40 - (t/2)%40);
            }

        ZadniiPlan (t);
        JuravleiKosyak (-180, 50, t);

        if (t <= 200)
            {
            Rybak (0 + t, 210, 1, 1);
            }
        else
            {
            Rybak (200, 210, 0 + (t/100)%2, 1);
            }

        if (t <= 250)
            {
            MadamBokDraw (1250 - 2*t, 300 + t/2, 0, 0, 0 + (t/20)%2, 1 - (t/20)%2, 1.5, -1);
            drawMan      (2*t, 500 + t/5, 100, 180, TX_GRAY, -0.1, 0, 0.1 - t%2/2.0, -0.2, 2 + t/150);
            drawRocket   (70 + 2*t, 350 + t/5, 0.3, 0.4, TX_WHITE, 0);
            Serdechko    (2*t, 400 + t/5, t%10/10.0);
            }
        else
            {
            MadamBokDraw (850, 425, 0, 0, 0, 0, 1.5, -1);
            drawMan      (500, 550, 100, 180, TX_GRAY, -0.1, 0, 0.1, -0.2, 2);
            drawRocket   (570, 400, 0.3, 0.4, TX_WHITE, 0);
            Serdechko    (500, 450, t%10/10.0);
            }

        MnogoTravi (480, t);

        if (250 < t && t <= 500)
            {
            CatDraw (1450 - t, 300 + t/2, 0.75, 1 + (t/60)%2,
                     0 +((t+2)/15)%2, 0 + ((t + 1)/30) % 2, 0 + (t/15)%2,
                     0 + (t/20)%2, 0);
            }

        txSleep (100*DELAY);
        txEnd ();
        }
    }

//-----------------------------------------------------------------------------

void drawEpisode6 ()
    {
    for (int t = 0; t <= 400; t ++)
        {
        txBegin ();
        txSetFillColor (TX_WHITE);
        txClear ();

        if ((t/80)%2 < 1)
            {
            BackgroundBeach (1 + (t/2)%40);
            }
        else
            {
            BackgroundBeach (40 - (t/2)% 40);
            }

        ZadniiPlan (t);
        drawMan    (500, 550, 100, 180, TX_GRAY, -0.1, 0, 0.1, -0.2, 2);
        Serdechko  (500, 450, t%10/(10.0 + t/5));
        drawRocket (570, 400, 0.3, 0.4, TX_WHITE, 0);

        Rybak (200, 210, 0 + (t/100)%2, 1);
        MadamBokDraw (850 + t*2, 500 - t/3, 0, 0, 0 + (t/20)%2, 1 - (t/20)%2, 1.5, 1);

        MnogoTravi (480, t);

        CatDraw (800 + t*2, 510 - t/3, 0.75, 1 + (t/60)%2,
                 0 +((t + 2)/15)%2, 0 + ((t + 1)/30)%2, 0 + (t/15)%2, 0, 0);

        txSleep (100*DELAY);
        txEnd ();
        }
    }
