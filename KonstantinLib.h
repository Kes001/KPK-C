//{===========================================================================
//! @brief      ���������� ������� ��� ��������� ����������� ������������ ��� ������������.
//!
//!             � ������ ��� �� �++ �� ����
//!
//! @date       2021
//! @par        Copyright: (C) ���������� �������� <procenkok@yandex.ru>
//! @mainpage
//!             - ������� ��� ��������� ��������� �����������:
//!
//!
//!
//!
//!
//!
//!
//}===========================================================================

#include "TXLib.h"
#include "config.h"
#include <cstdlib>

//-----------------------------------------------------------------------------
namespace Konstantin
    {
    void drawBackground  ();
    void drawStartTitles ();
    void drawEndTitles   ();
    void drawSky         (int x, int y);
    void drawGround      (int x, int y);
    void drawHouses      (int t = 0);
    void drawRocket      (int x, int y, double sizeX, double sizeY, COLORREF rocket_color, int t);
    void drawRain        (int x0, int y0, int sizeY = 10);
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
    void drawWindows     (int x1, int y1, int x2, int y2, int count);
    void drawSun         (int x,  int y, int r, int eyes, double koso = 0, int tang = 0);
    void drawCloud       (int x,  int y, int r);
    void drawPuddle      (int t,  int size);

    //-----------------------------------------------------------------------------

    void drawStartTitles ()
        {
        int t = 0;

        txSetFillColor (TX_BLACK);
        txSetColor     (TX_WHITE);

        while (t <= 85)
            {
            txBegin ();
            txClear ();
            txSelectFont   ("TimesNewRoman", 150);
            txTextOut      (SCR_WIDTH + 200 - t * 15, 100, "Posvyashchaetsya");

            txSelectFont   ("Arial", 130);
            txTextOut      (SCR_WIDTH + 500 - t * 18, 250, "Dnyu kosmonavtiki");

            txSleep (100*DELAY);
            txEnd ();
            t++;
            }
        txSleep (300*DELAY);
        }

    //-----------------------------------------------------------------------------

    void drawBackground  ()
        {
        drawSky    (0,   0);
        drawGround (0, 540);
        }
    //-----------------------------------------------------------------------------

    void drawSky      (int x, int y)
        {
        txSetFillColor (RGB (0, 0, 128));
        txSetColor     (RGB (0, 0, 128));

        txRectangle    (x, y, x + SCR_WIDTH, y + SCR_HEIGTH);
        }

    //-----------------------------------------------------------------------------

    void drawGround   (int x, int y)
        {
        txSetFillColor (RGB (185, 122, 85));
        txSetColor     (RGB (185, 122, 85));

        txRectangle    (x, y, x + SCR_WIDTH, y + SCR_HEIGTH);

        txSetColor     (RGB (255, 255, 255), 3);
        int step = 0;
        for (int i = 1; i <= 10; i++)
            {
            txLine (x + step, y + (SCR_HEIGTH - y)/2, x + step + (SCR_WIDTH - x)/10, y + (SCR_HEIGTH - y)/2);
            step += x + (SCR_WIDTH - x)/5;
            }
        }

    //-----------------------------------------------------------------------------

    void drawRain     (int x0, int y0, int sizeY)
        {
        int t = 1;

        while (t < 15)
            {
            for (int x = x0; x <= SCR_WIDTH; x += 15)
                {
                txSetColor (TX_WHITE);
                txLine     (x, t*50 + x%2*20 + y0, x, t*50 + x%2*20 + y0 + sizeY);
                }

            txSleep (5*DELAY);
            t++;
            }
        }

    //-----------------------------------------------------------------------------

    void drawPuddle   (int t, int size)
        {
        txSetFillColor (RGB (150, 210, 235));
        txSetColor     (RGB (150, 210, 235));

        txEllipse (SCR_WIDTH - 150, SCR_HEIGTH - 50, SCR_WIDTH - 150 + size + t/2, SCR_HEIGTH - 50 + size/2 + t/4);
        txEllipse (SCR_WIDTH - 450, SCR_HEIGTH - 30, SCR_WIDTH - 450 + size + t/2, SCR_HEIGTH - 50 + size/2 + t/4);
        txEllipse (SCR_WIDTH - 750, SCR_HEIGTH - 60, SCR_WIDTH - 550 + size + t/2, SCR_HEIGTH - 50 + size/2 + t/4);
        }

    //-----------------------------------------------------------------------------

    void drawHouses   (int t)
        {
        drawHouse (840, 280, 1.8, 1.3, TX_BLACK,    10 + t%10, 10 + t%10, 3 - t%2, 10 + t%10);
        drawHouse (540, 300, 1.3, 1.2, TX_DARKGRAY, 20 + t%10, -5 + t%10, 1 + t%2, 30 + t%10);
        drawHouse (240, 340, 1,   1,   TX_MAGENTA,  30 + t%10, 25 + t%10, 2 + t%2, 10 + t%10);
        }

    //-----------------------------------------------------------------------------

    void drawRocket   (int x, int y, double sizeX, double sizeY, COLORREF rocket_color, int t)
        {
        txSetFillColor (rocket_color);
        txSetColor     (rocket_color);
        txRectangle    (150, y - t, ROUND(x + 150*sizeX), ROUND(y + 200*sizeY - t));

        txSetColor     (TX_RED);
        txCircle       (x + 75*sizeX, y + 75*sizeY - t, 50*sizeX);

        txSelectFont   ("Arial", 30);
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

    //-----------------------------------------------------------------------------

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

    //-----------------------------------------------------------------------------

    void drawRoof     (int x0, int x1, int y, COLORREF roof_color)
        {
        txSetColor (roof_color, 10);

        txLine (x0, y, x0 + (x1 - x0)/2, y - 0.5 * (x1 - x0));
        txLine (x0 + (x1 - x0)/2, y - 0.5 * (x1 - x0), x1, y);
        }

    //-----------------------------------------------------------------------------

    void drawWindows  (int x0, int y0, int x1, int y1, int count)
        {
        txSetColor     (RGB (255, 255, 255), 2);

        int size_width = 10;
        int size_height = 10;
        for (int i = 1; i <= count; i++)
            {
            for (int j = 1; j <= 5; j++)
                {
                txSetFillColor (RGB (255, 240, rand()%200));
                txRectangle    (x0 + size_width,
                                y0 + size_height,
                                x0 + size_width  + (x1 - x0)/10,
                                y0 + size_height + (y1 - y0)/10);
                size_width += (x1 - x0)/5;
                }
            size_width = 10;
            size_height += (y1 - y0)/6;
            }
        }

    //-----------------------------------------------------------------------------

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

    //-----------------------------------------------------------------------------

    void drawCloud    (int x, int y, int r)
        {
        txSetFillColor (RGB (128, 128, 128));
        txSetColor     (RGB (128, 128, 128));

        txCircle  (x,       y, r);
        txCircle  (x + 2*r, y, r);
        txEllipse (x,       y - r, x + 2*r, y + r);
        }

    //-----------------------------------------------------------------------------

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

    //-----------------------------------------------------------------------------

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

    //-----------------------------------------------------------------------------

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

    //-----------------------------------------------------------------------------

    void drawEndTitles ()
        {
        int t = 0;

        txSetFillColor (TX_BLACK);
        txSetColor     (TX_WHITE);
        txSelectFont   ("Arial", 150);
        while (t <= 110)
            {
            txBegin ();
            txClear ();
            txTextOut (SCR_WIDTH + 100 - t * 25, 160, "YURA, my nichego ne zabyli!");

            txSleep (100*DELAY);
            txEnd ();
            t++;
            }
        txSelectFont ("Arial", 60);
        txTextOut    (350, 150, "CREATED BY:");
        txTextOut    (280, 300, "Protsenko Konstantin");
        txTextOut    (300, 500, "Magnitogorsk 2021");
        txSleep      (3000*DELAY);
        }
    }
