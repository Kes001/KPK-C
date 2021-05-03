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

using namespace Konstantin;

//-----------------------------------------------------------------------------

void drawEpisode1 ();
void drawEpisode2 ();
void drawEpisode3 ();

//-----------------------------------------------------------------------------

int main()
    {
    txCreateWindow (SCR_WIDTH, SCR_HEIGTH);

    //drawStartTitles ();

    //drawEpisode1    ();
    drawEpisode2    ();
    drawEpisode3    ();

    drawEndTitles   ();

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
    while (t < 250)
        {
        drawBackground ();
        drawHouses     (t);

        drawSun (880,  90, 60, t%10 + 10, t%5, t%10 + 5);
        drawMan (100, 550, 80, 170, TX_YELLOW, -0.1, 0, 0.2, -0.2);
        drawCar (900 - t, 425, 100, 100, TX_ORANGE, t%50, t%4/10.0, t%3/10.0, t%100/10 + 2);
        drawCar (500 - t, 425, 100, 100, TX_RED,    t%40,    0.1, (t%3)/10.0, t%100/10 + 3);

        txSleep (100*DELAY);
        t += 5;
        }

    drawBackground ();
    drawHouses     ();

    drawSun (880,  90, 60,   20, 5, 15);
    drawCar (650, 425, 100, 100, TX_ORANGE, 30,   0,   -0.1, 7);
    drawCar (250, 425, 100, 100, TX_RED,    20,   0.1,  0.1, 5);
    drawMan (100, 550,  80, 170, TX_YELLOW,  0.1, 0,   -0.2, 0.2);

    txSetColor   (TX_WHITE);
    txSelectFont ("Comic Sans MS", 60, 30, true, true, false, false, 15);
    txTextOut    (100, 300, "OSTANAVITES'!!!");
    txSleep (1000*DELAY);

    txPlaySound ("sounds/rocket.wav");
    t = 0;
    while (t < 500)
        {
        drawBackground ();

        drawRocket (150, 500,   0.7,   1, TX_WHITE, 2*t);
        drawGround (  0, 540);
        drawHouses ();
        drawSun    (880,  90,  60, t%10 + 10, t%5, t%10 + 5);
        drawCar    (650, 425, 100, 100, TX_ORANGE, t%50, 0,   -0.1, 7);
        drawCar    (250, 425, 100, 100, TX_RED,    t%40, 0.1,  0.1, 5);
        drawMan    (100, 550 - t%10,  80, 170, TX_YELLOW,  0.1  - t%2/10.0, 0 - t%2/10.0, -0.3, -0.1, 2 + t%3);

        if (t > 300)
            {
            txSetColor     (TX_WHITE);
            txSelectFont   ("Arial", 50);
            txTextOut      (20, 300, "This's a real miracle!");
            }

        txSleep    (100*DELAY);
        t += 5;
        }

    txPlaySound ("sounds/trava.wav");
    }

