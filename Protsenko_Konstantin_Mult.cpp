//{=========================================================================== 
//! @file       Protsenko_Konstantin_Mult.cpp
//!
//! @brief      Мультфильм посвященный 60-летию полета в космос.
//!
//!             Пример создания мультфильма с помощью TXLib.
//!             КПК по С++ от МФТИ.
//!
//!             $Date: 2021-04-12 $
//!             $Copyright: (C) Kes001 (Проценко Константин Сергеевич) <procenkok@yandex.ru> $
//          (C) Проценко Константин, г.Магнитогорск, 2021
//}===========================================================================

#include "TXLib.h"
#include <cstdlib>

int w = 1100;
int h = 600;

void drawBackground  ();
void drawSky         (int x, int y);
void drawGround      (int x, int y);

void drawStartTitles ();
void drawEpisode1    ();
void drawEpisode2    ();
void drawEpisode3    ();
void drawEndTitles   ();
void drawHouses      (int t = 0);
void drawRocket      (int x, int y, double sizeX, double sizeY, COLORREF rocket_color, int t);
void drawRain        (int x, int y, int sizeY = 10);
void drawHouse       (int x, int y, double sizeX, double sizeY, COLORREF house_color,
                      int roof_h  = 0, int roof_w = 0,
                      int windows = 3, int door   = 0);
void drawCar         (int x, int y, double sizeX, double sizeY, COLORREF car_color,
                      int janitor = 10, double window =  0,
                      double wheel = 0, double lights = 10);
void drawMan         (int x, int y, double sizeX, double sizeY, COLORREF skin_color,
                      double rhand = 0, double lhand = 0,
                      double legs  = 0, double jezl  = 0,
                      double eyes  = 2);
void drawLightning   (int x,  int y,  double sizeX, double sizeY, COLORREF light_color);
void drawRoof        (int x1, int x2, int y, COLORREF roof_color);
void drawWindows     (int x1, int y1, int x2, int y2,  int count);
void drawSun         (int x,  int y, int r, int eyes, double koso = 0, int tang = 0);
void drawCloud       (int x,  int y, int r);
void drawPuddle      (int t,  int size);

int main()
    {
    txCreateWindow (w, h);

    drawStartTitles ();

    drawEpisode1 ();
    drawEpisode2 ();
    drawEpisode3 ();

    drawEndTitles   ();

    return 0;
    }

void drawStartTitles ()
    {
    int t = 0;

    while (t <= 85)
        {
        txClear ();
        txSetFillColor (TX_BLACK);
        txSetColor     (TX_WHITE);
        txSelectFont   ("TimesNewRoman", 150);
        txTextOut      (w + 200 - t * 13, 100, "Посвящается");

        txSetColor     (TX_WHITE);
        txSelectFont   ("Ariel", 130);
        txTextOut      (w + 500 - t * 17, 250, "Дню космонавтики");

        txSleep (100);
        t++;
        }
    }

void drawBackground  ()
    {
    drawSky    ( 0,   0);
    drawGround ( 0, 540);
    }

void drawSky      (int x, int y)
    {
    txSetFillColor (RGB (0, 0, 128));
    txSetColor     (RGB (0, 0, 128));

    txRectangle    (x, y, x + w, y + h);
    }

void drawGround   (int x, int y)
    {
    txSetFillColor (RGB (185, 122, 85));
    txSetColor     (RGB (185, 122, 85));

    txRectangle    (x, y, x + w, y + h);

    txSetColor     (RGB (255, 255, 255), 3);
    int step = 0;
    for (int i = 1; i <= 10; i++)
        {
        txLine (x + step, y + (h - y)/2, x + step + (w - x)/10, y + (h - y)/2);
        step += x + (w - x)/5;
        }
    }

void drawEpisode1 ()
    {
    drawBackground ();
    drawMan        (200, 550, 80, 170, TX_YELLOW, 0.2, 0, 0.2, 0.5, 2);

    txSetColor     (TX_WHITE);
    txSelectFont   ("Ariel", 50);
    txTextOut      (200, 350, "Абра - кадабра");
    txSleep        (2000);

    drawBackground ();
    drawMan        (200, 550, 80, 170, TX_YELLOW, 0.2, 0, 0.2, 0.5, 2);

    for (int x = 100; x <= 800; x += 150)
        {
        drawCloud (x, x%100 + 50, 50 + x/10%10);
        txSleep   (1000);

        if (x >= 250 and x < 700)
            {
            drawLightning (x + 60, 175, 0.8 + x/1000.0, 0.7 + x/1000.0, TX_WHITE);
            drawMan       (200, 550, 80, 170, TX_YELLOW, 0.2, 0, 0.2, 0.5, 2 + x/100);
            }
        }

    txSetColor     (TX_WHITE);
    txSelectFont   ("Ariel", 50);
    txTextOut      (200, 350, "Что-то не то натворил ...");

    txSleep        (2000);

    int t = 0;
    while (t < 200)
        {
        drawBackground ();

        for (int i = 1; i <= w/100; i++)
            {
            drawCloud (i*150 - 100, 20 + rand()%50, 50 - t%20);
            }

        drawMan    (200 - t*2, 550, 80, 170, TX_YELLOW, -0.1 - t%2/10.0, 0 + t%2/10.0, 0.1 - t%2/2.0, -0.8, t%4);
        drawPuddle (t, 0);
        drawRain   (0, 70, 15);

        t += 15;
        }
    }

void drawRain     (int x, int y, int sizeY)
    {
    int tr = 1;

    while (tr < 15)
        {
        for (int ix = x; ix <= w; ix += 15)
            {
            txSetColor (TX_WHITE);
            txLine     (ix, tr*50 + ix%2*20 + y, ix, tr*50 + ix%2*20 + y + sizeY);
            }

        txSleep(5);
        tr++;
        }
    }

void drawPuddle   (int t, int size)
    {
    txSetFillColor (RGB (150, 210, 235));
    txSetColor     (RGB (150, 210, 235));

    txEllipse (w - 150, h - 50, w - 150 + size + t/2, h - 50 + size/2 + t/4);
    txEllipse (w - 450, h - 30, w - 450 + size + t/2, h - 50 + size/2 + t/4);
    txEllipse (w - 750, h - 60, w - 550 + size + t/2, h - 50 + size/2 + t/4);
    }

void drawEpisode2 ()
    {
    int t = 0;
    while (t < 60)
        {
        drawBackground ();

        drawSun    (880, 90, t, t%10 + 10, t%5, t%10 + 5);
        drawPuddle (-2*t, 100);

        txSleep    (100);
        t++;
        }

    drawHouse (840, 280, 1.8, 1.3, TX_BLACK,    10, 10, 3,  10);
    txSleep   (800);
    drawHouse (540, 300, 1.3, 1.2, TX_DARKGRAY, 20, -5, 1, -50);
    txSleep   (700);
    drawHouse (240, 340, 1,   1,   TX_MAGENTA,  30, 25, 2,  10);
    txSleep   (600);

    t = 0;
    while (t < 100)
        {
        drawBackground ();
        drawHouses     (t);

        drawMan        (t, 550, 80, 170, TX_YELLOW, -0.1 - t%2/10.0, 0 - t%5/10.0, 0.1 - t%2/2.0, -0.2, 2 + t%4);
        drawSun        (880, 90, 60, t%10 + 10, t%5, t%10 + 5);

        t += 3;
        txSleep (100);
        }
    }

void drawHouses   (int t)
    {
    drawHouse (840, 280, 1.8, 1.3, TX_BLACK,    10 + t%10, 10 + t%10, 3 - t%2, 10 + t%10);
    drawHouse (540, 300, 1.3, 1.2, TX_DARKGRAY, 20 + t%10, -5 + t%10, 1 + t%2, 30 + t%10);
    drawHouse (240, 340, 1,   1,   TX_MAGENTA,  30 + t%10, 25 + t%10, 2 + t%2, 10 + t%10);
    }

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

        txSleep (100);
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
    txTextOut    (100, 300, "ОСТАНАВИТЕСЬ!!!");
    txSleep (1000);

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
            txSelectFont   ("Ariel", 50);
            txTextOut      (20, 300, "Вот оно - настоящее чудо!");
            }

        txSleep    (100);
        t += 5;
        }
    }

void drawRocket   (int x, int y, double sizeX, double sizeY, COLORREF rocket_color, int t)
    {
    txSetFillColor (rocket_color);
    txSetColor     (rocket_color);
    txRectangle    (150, y - t, ROUND(x + 150*sizeX), ROUND(y + 200*sizeY - t));

    txSetColor     (TX_RED);
    txCircle       (x + 75*sizeX, y + 75*sizeY - t, 50*sizeX);

    txSelectFont   ("Ariel", 30);
    txTextOut      (x + 30*sizeX, y + 150*sizeY - t, "CCCP");

    POINT trio[] = {{ROUND(x), ROUND(y - t)},{ROUND(x +  75*sizeX), ROUND(y - 100*sizeY - t)},
                                             {ROUND(x + 150*sizeX), ROUND(y - t)},
                    {ROUND(x), ROUND(y - t)}};
    txPolygon (trio, 4);

    POINT ltrio[] = {{ROUND(x - 25*sizeX), ROUND(y + 300*sizeY - t)},
                     {ROUND(x),            ROUND(y + 200*sizeY - t)},
                     {ROUND(x + 25*sizeX), ROUND(y + 300*sizeY - t)},
                     {ROUND(x - 25*sizeX), ROUND(y + 300*sizeY - t)}};
    txPolygon (ltrio, 4);

    POINT rtrio[] = {{ROUND(x + 125*sizeX), ROUND(y + 300*sizeY - t)},
                     {ROUND(x + 150*sizeX), ROUND(y + 200*sizeY - t)},
                     {ROUND(x + 175*sizeX), ROUND(y + 300*sizeY - t)},
                     {ROUND(x + 125*sizeX), ROUND(y + 300*sizeY - t)}};
    txPolygon (rtrio, 4);

    txSetFillColor   (RGB (250, rand()%150, 20));
    txSetColor       (RGB (250, rand()%150, 20));

    POINT lfire[] = {{ROUND(x - 25*sizeX), ROUND(y + 301*sizeY - t)},
                     {ROUND(x),            ROUND(y + 450*sizeY - t)},
                     {ROUND(x + 25*sizeX), ROUND(y + 301*sizeY - t)},
                     {ROUND(x - 25*sizeX), ROUND(y + 301*sizeY - t)}};
    txPolygon (lfire, 4);

    POINT rfire[] = {{ROUND(x + 125*sizeX), ROUND(y + 301*sizeY - t)},
                     {ROUND(x + 150*sizeX), ROUND(y + 450*sizeY - t)},
                     {ROUND(x + 175*sizeX), ROUND(y + 301*sizeY - t)},
                     {ROUND(x + 125*sizeX), ROUND(y + 301*sizeY - t)}};
    txPolygon (rfire, 4);
    }

void drawSun      (int x, int y, int r, int eyes, double koso, int tong)
    {
    txSetFillColor (RGB (255, 255, 25));
    txSetColor     (RGB (255, 255, 25), 5);

    txLine (x,           y - 1.5 * r, x,           y + 1.5 * r);
    txLine (x - r,       y - r,       x + r,       y + r);
    txLine (x - r,       y + r,       x + r,       y - r);
    txLine (x - 1.5 * r, y,           x + 1.5 * r, y);

    txCircle (x, y, r);

    txSetFillColor (TX_WHITE);
    txSetColor     (TX_WHITE);
    txCircle       (x - r/3, y - r/3, (r - eyes)/4);
    txCircle       (x + r/3, y - r/3, (r + eyes)/4);

    txSetFillColor (TX_BLACK);
    txSetColor     (TX_BLACK);
    txCircle       (x + koso - r/3, y - r/3, (r - eyes)/8);
    txCircle       (x - koso + r/3, y - r/3, (r + eyes)/8);

    txSetFillColor (TX_RED);
    txSetColor     (TX_RED);
    POINT tongue[] = {{x - r/3, y + r/3}, {x, y + tong + r/2},
                      {x + r/3, y + r/3}, {x - r/3,  y + r/3}};
    txPolygon (tongue, 4);
    }

void drawRoof     (int x1, int x2, int y, COLORREF roof_color)
    {
    txSetColor (roof_color, 10);

    txLine (x1, y, x1 + (x2 - x1)/2, y - 0.5 * (x2 - x1));
    txLine (x1 + (x2 - x1)/2, y - 0.5 * (x2 - x1), x2, y);
    }

void drawWindows  (int x1, int y1, int x2, int y2, int count)
    {
    txSetColor     (RGB (255, 255, 255), 2);

    int d = 10;
    int d2 = 10;
    for (int i = 1; i <= count; i++)
        {
        for (int j = 1; j <= 5; j++)
            {
            txSetFillColor (RGB (255, 240, rand()%200));
            txRectangle    (x1 + d, y1 + d2, x1 + d + (x2 - x1)/10, y1 + d2 + (y2 - y1)/10);
            d += (x2 - x1)/5;
            }
        d = 10;
        d2 += (y2 - y1)/6;
        }
    }

void drawHouse    (int x, int y, double sizeX, double sizeY, COLORREF house_color,
                   int roof_h, int roof_w, int windows, int door)
    {
    txSetFillColor (house_color);
    txSetColor     (house_color);

    txRectangle    (x, y, x + 150*sizeX, y + 200*sizeY);

    drawRoof       (ROUND(x - roof_w), ROUND(x + (150 + roof_w)*sizeX), ROUND(y + roof_h), house_color);

    drawWindows    (x, y, ROUND(x + 150*sizeX), ROUND(y + 200*sizeY), windows);

    txSetFillColor (RGB (255, 255, 255));
    txSetColor     (RGB (255, 255, 255), 2);

    txRectangle    (x + 50*sizeX, y + (100 + door)*sizeY, x + 100*sizeX, y + 200*sizeY);
    }

void drawCloud    (int x, int y, int r)
    {
    txSetFillColor (RGB (128, 128, 128));
    txSetColor     (RGB (128, 128, 128));

    txCircle  (x,       y, r);
    txCircle  (x + 2*r, y, r);
    txEllipse (x,       y - r, x + 2*r, y + r);
    }

void drawLightning (int x, int y, double sizeX, double sizeY, COLORREF light_color)
    {
    txSetFillColor (light_color);
    txSetColor     (light_color, 2);

    POINT lightning[] = {{x, y}, {ROUND(x + 50*sizeX),  ROUND(y - 25*sizeY)},
                                 {ROUND(x + 75*sizeX),  ROUND(y + 10*sizeY)},
                                 {ROUND(x + 70*sizeX),  ROUND(y + 15*sizeY)},
                                 {ROUND(x + 100*sizeX), ROUND(y + 45*sizeY)},
                                 {ROUND(x + 90*sizeX),  ROUND(y + 50*sizeY)},
                                 {ROUND(x + 130*sizeX), ROUND(y + 105*sizeY)},
                                 {ROUND(x + 60*sizeX),  ROUND(y + 60*sizeY)},
                                 {ROUND(x + 72*sizeX),  ROUND(y + 56*sizeY)},
                                 {ROUND(x + 30*sizeX),  ROUND(y + 33*sizeY)},
                                 {ROUND(x + 45*sizeX),  ROUND(y + 25*sizeY)},
                         {x, y}};
    txPolygon (lightning, 12);
    }

void drawCar       (int x, int y, double sizeX, double sizeY, COLORREF car_color,
                    int janitor, double window, double wheel, double lights)
    {
    txSetFillColor (car_color);
    txSetColor     (car_color, 2);

    txRectangle    (x, y, x + 1.7*sizeX, y + 0.55*sizeY);
    txRectangle    (x - 0.85*sizeX, y + 0.55*sizeY, x + 2.55*sizeX, y + 1.1*sizeY);

    txSetFillColor (RGB (0, 0, 0));
    txSetColor     (RGB (0, 0, 0), 2);

    txCircle       (x - 0.425*sizeX, y + (1.1 + wheel)*sizeY, 0.3*sizeX);
    txCircle       (x + 1.915*sizeX, y + (1.1 + wheel)*sizeY, 0.3*sizeX);

    txSetFillColor (RGB (200, 200, 200));
    txSetColor     (RGB (200, 200, 200), 2);

    txCircle       (x - 0.425*sizeX, y + (1.1 + wheel)*sizeY, 0.2*sizeX);
    txCircle       (x + 1.915*sizeX, y + (1.1 + wheel)*sizeY, 0.2*sizeX);

    txRectangle    (x, y + (0.05 + window)*sizeY, x + 1.6*sizeX, y + 0.55*sizeY);

    txSetColor     (TX_BLACK, 2);
    txLine         (x, y + 0.55*sizeY, x + janitor, y + janitor);

    txSetFillColor (TX_YELLOW);
    txSetColor     (TX_YELLOW);

    txCircle       (x - 0.85*sizeX, y + 0.7*sizeY, lights/100*sizeX);

    txSetFillColor (TX_RED);
    txSetColor     (TX_RED);

    txCircle       (x + 2.55*sizeX, y + 0.7*sizeY, lights/100*sizeX);
    }

void drawMan       (int x, int y, double sizeX, double sizeY, COLORREF skin_color,
                    double rhand, double lhand, double legs,  double jezl, double eyes)
    {
    txSetColor     (skin_color, 2);
    txSetFillColor (skin_color);

    txLine (x, y - 0.35*sizeY, x, y - 0.7*sizeY);
    txLine (x, y - 0.35*sizeY, x - (0.5 + legs/2)*sizeX, y);
    txLine (x, y - 0.35*sizeY, x + (0.5 + legs/2)*sizeX, y);
    txLine (x, y - 0.65*sizeY, x - sizeX/2,   y - (0.4 + lhand)*sizeY);
    txLine (x, y - 0.65*sizeY, x + sizeX/1.2, y - (0.7 + rhand)*sizeY);

    txCircle (x, y - sizeY + 0.3*sizeX, 0.3*sizeX);

    txSetFillColor (TX_GREEN);
    txSetColor     (TX_GREEN);
    txCircle       (x - sizeX/7, y - sizeY/1.2, 2 + eyes);
    txCircle       (x + sizeX/7, y - sizeY/1.2, 2 + eyes);

    txSetColor     (TX_BLACK, 4);

    txLine (x + sizeX/1.2, y - (0.7 + rhand) * sizeY, x + sizeX/1.2, y - (0.8 + jezl)*sizeY);
    }

void drawEndTitles ()
    {
    int t = 0;

    while (t <= 110)
        {
        txClear ();
        txSetFillColor (TX_BLACK);
        txSetColor     (TX_WHITE);
        txSelectFont   ("Ariel", 150);
        txTextOut      (w + 100 - t * 25, 160, "Юра, мы ничего не забыли!");

        txSleep (100);
        t++;
        }
    txSelectFont ("Ariel", 60);
    txTextOut    (50, 300, "Выполнил: Проценко Константин Сергеевич");
    txTextOut    (200, 500, "г. Магнитогорск, 2021 год");
    txSleep      (3000);
    }
