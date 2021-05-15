//{========================================================
//! @file   DerMeisterLib.h
//!
//!         Library of functions for creating cartoons
//!
//! @mainpage
//!     DerMeisterLib.h - библиотека функций, реализованная с помощью TXLib.h.
//!     Данная библиотека писалась с огромной любовью для создания мультипликационного фильма.
//!
//!     Основными объектами библиотеки являются:
//!     @image html     Objects.jpg
//!
//!     Пример рисования статичных объектов с помощью функций из DerMeisterLib.h
//!     @image html     Primer1.gif
//!
//!     Пример рисования динамичных объектов с помощью функций из DerMeisterLib.h
//!     @image html     Primer2.gif
//!
//---------------------------------------------------------
//! @defgroup Geroi         Главные герои
//! @defgroup VtoroiPlan    Второстепенные герои
//! @defgroup Auto          Транспорт
//! @defgroup Fon           Фоновые объекты
//      (c) Romanovskaia Anna Aleksandrovna, g. Omsk, 2021
//}========================================================

#include "TXLib.h"

const COLORREF TX_PURPLE    = RGB (186,  85, 211),
               TX_CHERRY    = RGB ( 80,   3,  28),
               TX_MYRED     = RGB (255,   0,   0),
               TX_MYYELLOW  = RGB (255, 255,   0),
               TX_MYGREEN   = RGB ( 46, 139,  87),
               TX_MYBLUE    = RGB (175, 238, 238),
               TX_DARKCYAN  = RGB (  0, 139, 139),
               TX_MYBROWN   = RGB (139,  69,  19),
               TX_CHOKOLATE = RGB (210, 105,  30),
               TX_SEASAND   = RGB (250, 250, 210),
               TX_SAND      = RGB (238, 232, 170),
               TX_SEAGREEN  = RGB ( 32, 178, 170);

void Background       ();
void BackgroundSize   ();
void SolncaSvet       (int time);
void Oblaka           (int time);
void ZadniiPlan       (int time);
void Lesopolosa       (int time);
void LesopolosaSize   (int time);
void BackgroundBeach  (int Volny);
void SemerkaDraw      (int x, int y);
void MnogoTravi       (int y, int time);
void RazmetkaDraw     (int y, int time);
void JuravleiKosyak   (int x, int y, int time);
void BackgroundMore   (int x, int y, int Volny);
void OstanovkaDraw    (int x, int y, double Size);
void Serdechko        (int x, int y, double Size);
void SolnceDraw       (int x, int y, int DlinaLucha);
void Trava            (int x, int y, int Veter, double Size);
void JuravlDraw       (int x, int y, double Size, int Krilya);
void Rybak            (int x, int y, int Udochka, double Size);
void OblakoDraw       (int x, int y, double SizeX, double SizeY);
void DerevoDraw       (int x, int y, double Size, int Storona);
void CvetokDraw       (int x, int y, double Size, COLORREF centr, COLORREF lepestki);
void MoskvichDraw     (int x, int y, int KapotUp, int OknoDown, int Antena,
                       int Avariika,  double Size);
void CatDraw          (int x, int y, double Size, int Us1, int Us2, int Us3,
                       int Hvost, int Lapki, int Stop);
void CatZadDraw       (int x, int y, double Size, int Us1, int Us2, int Us3, int Hvost);
void BusLDraw         (int x, int y, int Zajiganie, COLORREF Stop, int Podveska,
                       int Kolesa, int Glushitel, double Size);
void BusRDraw         (int x, int y, int Zajiganie, COLORREF Stop, int Podveska,
                       int Kolesa, int Glushitel, double Size, int DveriDown,
                       int DveriSide);
void MadamDraw        (int x, int y, int Anfas, int StoitNaNogah, int Glaza, COLORREF Zrachki,
                       int Rot, int UpRukaL, int UpRukaP, int UpNogaL, int UpNogaP, int Naushniki,
                       int Telephon, double Size);
void MadamDrawProfil  (int x, int y, COLORREF Zrachki, int UpRukaL, int UpRukaP, int UpNogaL,
                       int UpNogaP, double Size, int Storona);
void MisterDraw       (int x, int y, int Anfas, int Glaza, COLORREF Zrachki, int Rot,
                       int UpRukaL, int UpRukaP, int UpNogaL, int UpNogaP, double Size);
void MisterDrawProfil (int x, int y, COLORREF Zrachki, int UpNogaL, int UpNogaP, double Size, int Storona);

//{------------------------------------------------------------------------------------------------------
//! @ingroup Fon
//!
//! Рисует небо, поле и дорожное полотно
//}------------------------------------------------------------------------------------------------------

void Background ()
    {
    txSetColor (TX_MYBLUE);
    txSetFillColor (TX_MYBLUE);
    txRectangle (0, 0, 1400, 200);

    txSetColor (TX_MYGREEN);
    txSetFillColor (TX_MYGREEN);
    txRectangle (0, 200, 1400, 420);

    txSetColor (TX_GRAY);
    txSetFillColor (TX_GRAY);
    txRectangle (0, 380, 1400, 657);

    txSetColor (TX_MYGREEN);
    txSetFillColor (TX_MYGREEN);
    txRectangle (0, 657, 1400, 700);

    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txRectangle (0, 396, 1400, 400);

    txRectangle (0, 641, 1400, 645);
    }

//{------------------------------------------------------------------------------------------------------
//! @ingroup Fon
//!
//! Рисует поле и дорожное полотно
//}------------------------------------------------------------------------------------------------------

void BackgroundSize ()
    {
    txSetColor (TX_MYGREEN);
    txSetFillColor (TX_MYGREEN);
    txRectangle (0, 0, 1400, 320);

    txSetColor (TX_GRAY);
    txSetFillColor (TX_GRAY);
    txRectangle (0, 320, 1400, 657);

    txSetColor (TX_MYGREEN);
    txSetFillColor (TX_MYGREEN);
    txRectangle (0, 657, 1400, 700);

    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txRectangle (0, 336, 1400, 342);

    txRectangle (0, 640, 1400, 646);
    }

//{------------------------------------------------------------------------------------------------------
//! @ingroup Fon
//!
//! Рисует солнышко, которое освещает мир своими лучиками))
//!
//! @param time     Показатель времени, от которого зависит длина лучей
//!
//! @par            Пример использования:
//!
//! @code
//! for (int time = 0; time <= 240; time++)
//!     {
//!     txSetFillColor (TX_WHITE);
//!     txClear ();
//!
//!     SolncaSvet (time);
//!
//!     txSleep (1);
//!      }
//! @endcode
//!
//! @note           Длина лучей будет увеличиваться на 1 каждые 40 кадров
//}------------------------------------------------------------------------------------------------------

void SolncaSvet (int time)
    {
    if ((time / 40) % 2 < 1)
        {
        SolnceDraw (1300, 80, 1 + time % 40);
        }
    else
        {
        SolnceDraw (1300, 80, 39 - time % 40);
        }
    }

//{------------------------------------------------------------------------------------------------------
//! @ingroup Fon
//!
//! Рисует облака
//!
//! @param time     Показатель времени, от которого зависит положение облаков
//!
//! @par            Пример использования:
//!
//! @see    Background (); BackgroundBeach (); BackgroundMore ();
//!
//! @code
//! for (int time = 0; time <= 240; time++)
//!     {
//!     txClear ();
//!     Background ();
//!
//!     Oblaka (time);
//!
//!     txSleep (1);
//!      }
//! @endcode
//}------------------------------------------------------------------------------------------------------

void Oblaka (int time)
    {
    OblakoDraw (-480 + time / 2,  30, 1.25, 1.25);
    OblakoDraw (-330 + time / 2,  70,    1,    1);
    OblakoDraw (-130 + time / 2,  60,    1, 1.25);
    OblakoDraw (  20 + time / 2,  30, 1.25, 1.25);
    OblakoDraw ( 200 + time / 2,  70,    1,    1);
    OblakoDraw ( 350 + time / 2,  60,    1, 1.25);
    OblakoDraw ( 600 - time / 2,  40, 1.25,    1);
    OblakoDraw ( 750 - time / 2,  70,    1, 1.25);
    OblakoDraw ( 900 - time / 2,  30,    1,    1);
    OblakoDraw (1100 - time / 2,  50, 1.25, 1.25);
    OblakoDraw (1250 - time / 2,  70,    1, 1.25);
    OblakoDraw (1500 - time / 2,  30,    1,    1);
    OblakoDraw (1700 - time / 2,  50, 1.25, 1.25);
    }

//{------------------------------------------------------------------------------------------------------
//! @ingroup Fon
//!
//! Рисует светящее солнце и облака вместе
//!
//! @param time     Показатель времени, от которого зависит положение облаков и длина лучей солнца
//!
//! @see    Background (); BackgroundBeach (); BackgroundMore ();
//!
//! @par            Пример использования:
//!
//! @code
//! for (int time = 0; time <= 240; time++)
//!     {
//!     txClear ();
//!     Background ();
//!
//!     ZadniiPlan (time);
//!
//!     txSleep (1);
//!     }
//! @endcode
//!
//! @note           Длина лучей будет увеличиваться на 1 каждые 40 кадров
//}------------------------------------------------------------------------------------------------------

void ZadniiPlan (int time)
    {
    SolncaSvet (time);
    Oblaka (time);
    }

//{------------------------------------------------------------------------------------------------------
//! @ingroup Fon
//!
//! Рисует лесополосу с цветами для функции Background
//!
//! @param time     Время, от которого зависит x-координата каждого объекта
//!
//! @see    Background ();
//!
//! @par            Пример использования:
//!
//! @code
//! for (int time = 0; time <= 240; time++)
//!     {
//!     txClear ();
//!     Background ();
//!
//!     Lesopolosa (time);
//!
//!     txSleep (1);
//!     }
//! @endcode
//}------------------------------------------------------------------------------------------------------

void Lesopolosa (int time)
    {
    for (int x = -1400; x <= 2800; x += 240)
        {
        CvetokDraw (x -  60 + time, 260,    1, TX_WHITE, TX_ORANGE);
        DerevoDraw (x       + time, 120, 1.25,  1);
        DerevoDraw (x - 120 + time, 170,  1.5, -1);
        CvetokDraw (x - 180 + time, 290,    1, TX_WHITE, TX_ORANGE);
        CvetokDraw (x -  20 + time, 335, 1.25, TX_ORANGE, TX_WHITE);
        }
    }

//{------------------------------------------------------------------------------------------------------
//! @ingroup Fon
//!
//! Рисует лесополосу с цветами для функции BackgroundSize
//!
//! @param time     Время, от которого зависит x-координата каждого объекта
//!
//! @see    BackgroundSize ();
//!
//! @par            Пример использования:
//!
//! @code
//! for (int time = 0; time <= 240; time++)
//!     {
//!     txClear ();
//!     BackgroundSize ();
//!
//!     LesopolosaSize (time);
//!
//!     txSleep (1);
//!     }
//! @endcode
//}------------------------------------------------------------------------------------------------------

void LesopolosaSize (int time)
    {
    for (int x = -1400; x <= 2800; x += 240)
        {
        CvetokDraw (x - 70 + time,  260,    1, TX_WHITE, TX_ORANGE);
        DerevoDraw (x       + time, -150,  1.5,  1);
        DerevoDraw (x - 120 + time,  -50,    2, -1);
        CvetokDraw (x - 170 + time,  260,    1, TX_WHITE, TX_ORANGE);
        CvetokDraw (x + time,  200, 1.25, TX_ORANGE, TX_WHITE);
        }
    }

//{------------------------------------------------------------------------------------------------------
//! @ingroup Fon
//!
//! Рисует песчаный пляж балтийского моря
//!
//! @param volny    Ширина эллипсов, изображающих волны
//!
//! @par            Пример использования:
//!
//! @code
//! for (int time = 0; time <= 240; time++)
//!     {
//!     txClear ();
//!
//!     if ((time / 80) % 2 < 1)
//!         {
//!         BackgroundBeach (1 + (time / 2) %40);
//!         }
//!     else
//!         {
//!         BackgroundBeach (40 - (time / 2) % 40);
//!         }
//!
//!     txSleep (1);
//!      }
//! @endcode
//}------------------------------------------------------------------------------------------------------

void BackgroundBeach (int Volny)
    {
    txSetColor (TX_SEASAND);
    txSetFillColor (TX_SEASAND);
    txRectangle (0, 360, 1400, 700);

    txSetColor (TX_SAND, 3);
    txLine (0, 460, 500, 620);
    txLine (900, 620, 1400, 460);

    txSetColor (TX_SEAGREEN);
    txSetFillColor (TX_SEAGREEN);
    txRectangle (0, 200, 1400, 340);

    for (int x =- 120; x <= 2200; x += 440)
        {
        txEllipse (x,       240, x + 280, 400 + Volny);
        txEllipse (x + 240, 280, x + 480, 360 + Volny);
        }

    txSetColor (TX_MYBLUE);
    txSetFillColor (TX_MYBLUE);
    txRectangle (0, 0, 1400, 200);
    }

//{------------------------------------------------------------------------------------------------------
//! @ingroup Auto
//!
//! Рисует самый лучший автомобиль на планете земля!
//!
//! @param x        x-координата машины
//! @param y        y-координата машины
//!
//! @par            Пример использования:
//!
//! @code
//!         SemerkaDraw (330, 450);
//! @endcode
//}------------------------------------------------------------------------------------------------------

void SemerkaDraw (int x, int y)
    {
    txSetColor (TX_CHERRY);
    txSetFillColor (TX_CHERRY);
    POINT kuzov[16] = {{x,       y      }, {x -  10, y - 60}, {x +  60, y - 60}, {x + 100, y - 120},
                       {x + 240, y - 120}, {x + 280, y - 60}, {x + 360, y - 60}, {x + 350, y      },
                       {x + 330, y      }, {x + 310, y - 20}, {x + 290, y - 20}, {x + 270, y      },
                       {x +  90, y      }, {x +  70, y - 20}, {x +  50, y - 20}, {x +  30, y      }};
    txPolygon (kuzov, 16);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_TRANSPARENT);
    POINT dveri[10] = {{x + 170, y - 110}, {x + 170, y -  10},
                       {x + 100, y -  10}, {x +  70, y -  40},
                       {x +  70, y -  60}, {x + 100, y - 110},
                       {x + 240, y - 110}, {x + 270, y -  60},
                       {x + 270, y -  10}, {x + 170, y -  10}};
    txPolygon (dveri, 10);

    txRectangle (x + 30, y - 50, x + 50, y - 33);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    POINT okno1[6] = {{x + 102, y - 60}, {x + 102, y - 105}, {x + 165, y - 105},
                      {x + 165, y - 60}, {x +  75, y -  60}, {x + 102, y - 105}};
    txPolygon (okno1, 6);
    POINT okno2[4] = {{x + 175, y -  60}, {x + 265, y -  60},
                      {x + 238, y - 105}, {x + 175, y - 105}};
    txPolygon (okno2, 4);

    txSetFillColor (TX_BLACK);
    txRectangle (x +  80, y - 55, x + 100, y - 47);
    txRectangle (x + 180, y - 55, x + 200, y - 47);

    txCircle (x +  60, y + 8, 25);
    txCircle (x + 300, y + 8, 25);
    txSetFillColor (TX_WHITE);
    txCircle (x +  60, y + 8, 17);
    txCircle (x + 300, y + 8, 17);

    txSetFillColor (TX_BLACK);
    txRectangle (x -  10, y - 20, x +  10, y - 10);
    txRectangle (x + 345, y - 20, x + 365, y - 10);

    txSetColor     (TX_ORANGE);
    txSetFillColor (TX_ORANGE);
    txRectangle (x + 330, y - 45, x + 340, y - 40);
    }

//{------------------------------------------------------------------------------------------------------
//! @ingroup Fon
//!
//! Рисует кусты травы на берегу балтийского моря
//!
//! @param y        y-координата кустов травы
//! @param time     Параметр времени, от которого зависят порывы западного ветра
//!
//! @see    BackgroundBeach ();
//!
//! @par            Пример использования:
//!
//! @code
//! for (int time = 0; time <= 240; time++)
//!     {
//!     txClear ();
//!
//!     if ((time / 80) % 2 < 1)
//!         {
//!         BackgroundBeach (1 + (time / 2) %40);
//!         }
//!     else
//!         {
//!         BackgroundBeach (40 - (time / 2) % 40);
//!         }
//!
//!     MnogoTravi (480, time);
//!
//!     txSleep (1);
//!      }
//! @endcode
//}------------------------------------------------------------------------------------------------------

void MnogoTravi (int y, int time)
    {
    for (int x = 40; x < 450; x += 120)
        {
        Trava (x, y, 0 + time / 80 % 2, 1);
        Trava (1400 - x, y, 0 + time / 80 % 2, 1);
        Trava (x + 60, y + 80, 0 + time / 80 % 2, 1);
        Trava (1400 - x - 60, y + 80, 0 + time / 80 % 2, 1);
        y += 40;
        }
    }

//{------------------------------------------------------------------------------------------------------
//! @ingroup Fon
//!
//! Рисует дорожную разметку
//!
//! @param y        y-координата разметки
//! @param time     Показатель времени, от которого зависит положение дорожной разметки
//!
//! @see    Background (); BackgroundSize ();
//!
//! @par            Пример использования:
//!
//! @code
//!         Background ();
//!         RazmetkaDraw (520, 0);
//! @endcode
//}------------------------------------------------------------------------------------------------------

void RazmetkaDraw (int y, int time)
    {
    for (int x = -1400; x <= 2800; x += 120)
        {
        txSetColor (TX_WHITE);
        txSetFillColor (TX_WHITE);
        POINT razmetka[4] = {{x + time,       y     }, {x + 20 + time, y - 15},
                             {x + time + 100, y - 15}, {x + 80 + time, y     }};
        txPolygon (razmetka, 4);
        }
    }

//{------------------------------------------------------------------------------------------------------
//! @ingroup VtoroiPlan
//!
//! Рисует косяк журавлей
//!
//! @param x        x-координата крайнего верхнего левого журавля
//! @param y        y-координата крайнего верхнего левого журавля
//! @param time     Показатель времени, от которого зависит положение журавлей
//!
//! @par            Пример использования:
//!
//! @code
//!         JuravleiKosyak (120, 100, 0);
//! @endcode
//}------------------------------------------------------------------------------------------------------

void JuravleiKosyak (int x, int y, int time)
    {
    for (int i = x; i <= x + 240  ; i += +60)
        {
        if (i <= x + 120)
            {
            JuravlDraw (i + time*2, y, 1, 0 + (time / 20) % 2);
            y += 20;
            }
        else
            {
            y += 20;
            JuravlDraw (i - 180 + time*2, y, 1, 0 + (time / 20) % 2);
            y -= 40;
            }
        }
    }

//{------------------------------------------------------------------------------------------------------
//! @ingroup Fon
//!
//! Рисует пляж балтийского моря
//!
//! @param x        x-координата чуть правее центра окна
//! @param y        y-координата чуть ниже центра окна
//! @param Volny    Увеличивает/уменьшает морские волны
//!
//! @par            Пример использования:
//!
//! @code
//!         BackgroundMore (720, 400, 45);
//! @endcode
//}------------------------------------------------------------------------------------------------------

void BackgroundMore (int x, int y, int Volny)
    {
    txSetColor (TX_SEASAND);
    txSetFillColor (TX_SEASAND);
    POINT pesok [4] = {{x - 400, y + 300}, {x + 120, y - 200}, {x + 1400, y - 200}, {x + 1400, y + 700}};
    txPolygon (pesok, 4);

    txSetColor (TX_SEAGREEN);
    txSetFillColor (TX_SEAGREEN);
    POINT more [4] = {{x - 400, y + 300}, {x - 720, y + 300}, {x - 720, y - 200}, {x + 120, y - 200}};
    txPolygon (more, 4);

    txEllipse (x -  80, y - 220, x + 200 + Volny, y      );
    txEllipse (x - 200, y -  20, x +       Volny, y + 160);
    txEllipse (x - 440, y + 160, x - 160 + Volny, y + 340);
    txCircle (x,       y,        80 + Volny);
    txCircle (x - 180, y + 180, 100 + Volny);

    txSetColor (TX_MYBLUE);
    txSetFillColor (TX_MYBLUE);
    txRectangle (0, 0, 1400, 200);
    }

//{------------------------------------------------------------------------------------------------------
//! @ingroup Fon
//!
//! Рисует остановку
//!
//! @param x        x-координата остановки
//! @param y        y-координата остановки
//! @param Size     Размер остановки
//!
//! @par            Пример использования:
//!
//! @code
//!         OstanovkaDraw (300, 600, 1.25);
//! @endcode
//}------------------------------------------------------------------------------------------------------

void OstanovkaDraw (int x, int y, double Size)
    {
    txSetColor (TX_MYGREEN);
    txSetFillColor (TX_MYGREEN);
    POINT pol [4] = {{x,                      y                    },
                     {ROUND (x - 200 * Size), y                    },
                     {ROUND (x - 140 * Size), ROUND (y - 60 * Size)},
                     {x,                      ROUND (y - 60 * Size)}};
    txPolygon (pol, 4);

    txSetColor (TX_MYBROWN, 2);
    txSetFillColor (TX_CHOKOLATE);
    POINT steny [12] = {{       x,               ROUND (y -  60 * Size)},
                        {ROUND (x - 140 * Size), ROUND (y -  60 * Size)},
                        {ROUND (x - 200 * Size),        y              },
                        {ROUND (x - 200 * Size), ROUND (y - 140 * Size)},
                        {ROUND (x - 220 * Size), ROUND (y - 140 * Size)},
                        {ROUND (x - 220 * Size), ROUND (y - 200 * Size)},
                        {ROUND (x - 200 * Size), ROUND (y - 220 * Size)},
                        {ROUND (x +  40 * Size), ROUND (y - 220 * Size)},
                        {ROUND (x +  40 * Size), ROUND (y - 170 * Size)},
                        {ROUND (x +  34 * Size), ROUND (y - 160 * Size)},
                        {ROUND (x +  34 * Size), ROUND (y -  50 * Size)},
                        {       x,                      y              }};
    txPolygon (steny, 12);
    txLine (x - 140 * Size, y - 140 * Size, x - 140 * Size, y -  60 * Size);
    txLine (x +  40 * Size, y - 220 * Size, x +  20 * Size, y - 200 * Size);
    txLine (x +  40 * Size, y - 170 * Size, x +  20 * Size, y - 140 * Size);

    txSetColor (TX_MYBROWN, 4);
    txRectangle (x - 220 * Size, y - 200 * Size, x + 20 * Size, y - 140 * Size);
    txLine (x - 200 * Size, y - 140 * Size, x - 200 * Size, y);
    txLine (x,              y - 140 * Size, x,              y);

    txSetColor (TX_BLACK, 2);
    txSetFillColor (TX_WHITE);
    POINT lavochka [12] = {{       x,               ROUND (y - 70 * Size)},
                           {ROUND (x -  30 * Size), ROUND (y - 70 * Size)},
                           {ROUND (x -  30 * Size), ROUND (y - 60 * Size)},
                           {ROUND (x -  40 * Size), ROUND (y - 50 * Size)},
                           {ROUND (x -  40 * Size), ROUND (y - 70 * Size)},
                           {ROUND (x -  90 * Size), ROUND (y - 70 * Size)},
                           {ROUND (x -  90 * Size), ROUND (y - 60 * Size)},
                           {ROUND (x - 100 * Size), ROUND (y - 50 * Size)},
                           {ROUND (x - 100 * Size), ROUND (y - 70 * Size)},
                           {ROUND (x - 120 * Size), ROUND (y - 70 * Size)},
                           {ROUND (x - 100 * Size), ROUND (y - 90 * Size)},
                           {       x,               ROUND (y - 90 * Size)}};
    txPolygon (lavochka, 12);
    txLine (x - 120 * Size, y - 70 * Size, x, y - 70 * Size);

    txSetColor (TX_WHITE);
    txSelectFont ("Arial Black", 60 * Size, 16 * Size);
    txTextOut (x - 210 * Size, y - 200 * Size, "BALTIC SEA");
    }

//{------------------------------------------------------------------------------------------------------
//! @ingroup Fon
//!
//! Рисует сердечко
//!
//! @param x        x-координата сердечка
//! @param y        y-координата сердечка
//! @param Size     Размер сердечка
//!
//! @par            Пример использования:
//!
//! @code
//!         Serdechko (700, 350, 2);
//! @endcode
//}------------------------------------------------------------------------------------------------------

void Serdechko (int x, int y, double Size)
    {
    txSetColor (TX_MYRED);
    txSetFillColor (TX_MYRED);
    POINT Serdechko [10] = {{       x,              ROUND (y + 20 * Size)},
                            {ROUND (x - 20 * Size),        y             },
                            {ROUND (x - 20 * Size), ROUND (y - 10 * Size)},
                            {ROUND (x - 15 * Size), ROUND (y - 20 * Size)},
                            {ROUND (x -  5 * Size), ROUND (y - 20 * Size)},
                            {       x,              ROUND (y - 10 * Size)},
                            {ROUND (x +  5 * Size), ROUND (y - 20 * Size)},
                            {ROUND (x + 15 * Size), ROUND (y - 20 * Size)},
                            {ROUND (x + 20 * Size), ROUND (y - 10 * Size)},
                            {ROUND (x + 20 * Size),        y             }};
    txPolygon (Serdechko, 10);
    }

//{------------------------------------------------------------------------------------------------------
//! @ingroup Fon
//!
//! Рисует солнышко
//!
//! @param x            x-координата солнышка
//! @param y            y-координата солнышка
//! @param DlinaLucha   Длина солнечных лучей
//!
//! @par                Пример использования:
//!
//! @code
//!         SolnceDraw (1200, 150, 40);
//! @endcode
//}------------------------------------------------------------------------------------------------------

void SolnceDraw (int x, int y, int DlinaLucha)
    {
    txSetColor (TX_ORANGE, 3);
    txLine (x - 90 + DlinaLucha, y,                   x + 90 - DlinaLucha, y                  );
    txLine (x,                   y - 90 + DlinaLucha, x,                   y + 90 - DlinaLucha);
    txLine (x - 75 + DlinaLucha, y - 75 + DlinaLucha, x + 75 - DlinaLucha, y + 75 - DlinaLucha);
    txLine (x - 75 + DlinaLucha, y + 75 - DlinaLucha, x + 75 - DlinaLucha, y - 75 + DlinaLucha);

    txSetColor (TX_ORANGE, 1);
    txLine (x - 1 - DlinaLucha, y - 2 - DlinaLucha * 2, x + 1 + DlinaLucha, y + 2 + DlinaLucha * 2);
    txLine (x - 1 - DlinaLucha, y + 2 + DlinaLucha * 2, x + 1 + DlinaLucha, y - 2 - DlinaLucha * 2);

    txLine (x - 2 - DlinaLucha * 2, y - 1 - DlinaLucha, x + 2 + DlinaLucha * 2, y + 1 + DlinaLucha);
    txLine (x - 2 - DlinaLucha * 2, y + 1 + DlinaLucha, x + 2 + DlinaLucha * 2, y - 1 - DlinaLucha);

    txSetColor (TX_MYBLUE, 4);
    txSetFillColor (TX_ORANGE);
    txCircle (x, y, 35);
    }

//{------------------------------------------------------------------------------------------------------
//! @ingroup Fon
//!
//! Рисует кустик травы
//!
//! @param x        x-координата кустика
//! @param y        y-координата кустика
//! @param Veter    Порывы западного ветра. 0 - штиль, 1 - порыв ветра
//! @param Size     Размер кустика
//!
//! @par            Пример использования:
//!
//! @code
//!         Trava (300, 500, 0, 1);
//! @endcode
//}------------------------------------------------------------------------------------------------------

void Trava (int x, int y, int Veter, double Size)
    {
    txSetColor (TX_GREEN, 3);
    txSetFillColor (TX_TRANSPARENT);
    POINT trava [6] = {{ROUND (x - (20 - 60 * Veter) * Size), ROUND (y - (60 - 20 * Veter) * Size)},
                       {       x,                                    y                            },
                       {       x,                             ROUND (y -  80      * Size )        },
                       {       x,                                    y                            },
                       {ROUND (x +  20               * Size), ROUND (y -  60      * Size )        },
                       {       x,                                    y                            }};
    txPolygon (trava, 6);
    }

//{------------------------------------------------------------------------------------------------------
//! @ingroup VtoroiPlan
//!
//! Рисует журавлика
//!
//! @param x        x-координата журавлика
//! @param y        y-координата журавлика
//! @param Size     Размер журавлика
//! @param Krilya   Положение крыльев. 0 - взмах, 1 - крылья расправлены
//!
//! @par            Пример использования:
//!
//! @code
//!         JuravlDraw (300, 500, 1.25, 1);
//! @endcode
//}------------------------------------------------------------------------------------------------------

void JuravlDraw (int x, int y, double Size, int Krilya)
    {
    txSetColor (TX_BLACK, 2);
    txLine (x, y, x +  50                * Size, y            );
    txLine (x, y, x - (10 + 20 * Krilya) * Size, y - 20 * Size);
    txLine (x, y, x + (10 + 20 * Krilya) * Size, y - 20 * Size);
    }

//{------------------------------------------------------------------------------------------------------
//! @ingroup VtoroiPlan
//!
//! Рисует рыбака
//!
//! @param x        x-координата рыбака
//! @param y        y-координата рыбака
//! @param Udochka  Положение удочки. 1 - замах удочки, 0 - заброс удочки
//! @param Size     Размер рыбака
//!
//! @par            Пример использования:
//!
//! @code
//!         Rybak (300, 500, 1, 2);
//! @endcode
//}------------------------------------------------------------------------------------------------------

void Rybak (int x, int y, int Udochka, double Size)
    {
    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    POINT lodka [8] = {{ROUND (x - 70 * Size), ROUND (y + 110 * Size)},
                       {ROUND (x - 70 * Size), ROUND (y +  90 * Size)},
                       {ROUND (x - 50 * Size), ROUND (y +  30 * Size)},
                       {ROUND (x - 30 * Size), ROUND (y +  10 * Size)},
                       {ROUND (x + 50 * Size), ROUND (y -  50 * Size)},
                       {ROUND (x + 50 * Size), ROUND (y -  10 * Size)},
                       {ROUND (x + 30 * Size), ROUND (y +  30 * Size)},
                       {ROUND (x + 10 * Size), ROUND (y +  50 * Size)}};
    txPolygon (lodka, 8);

    txSetFillColor (TX_WHITE);
    POINT dno [5] = {{ROUND (x - 50 * Size), ROUND (y + 80 * Size)},
                     {ROUND (x - 30 * Size), ROUND (y + 30 * Size)},
                     {ROUND (x + 40 * Size), ROUND (y - 20 * Size)},
                     {ROUND (x + 30 * Size), ROUND (y + 10 * Size)},
                     {ROUND (x + 10 * Size), ROUND (y + 30 * Size)}};
    txPolygon (dno, 5);

    txSetColor (TX_WHITE);
    txSetFillColor (TX_BLACK);
    POINT sidushka [4] = {{ROUND (x - 50 * Size), ROUND (y + 30 * Size)},
                          {ROUND (x - 30 * Size), ROUND (y + 10 * Size)},
                          {ROUND (x + 30 * Size), ROUND (y + 10 * Size)},
                          {ROUND (x + 10 * Size), ROUND (y + 30 * Size)}};
    txPolygon (sidushka, 4);

    txSetColor (TX_BLACK, 3);
    txLine (x, y, x - (70      * Udochka) * Size, y - (70      * Udochka) * Size);
    txLine (x, y, x + (40 - 40 * Udochka) * Size, y - (70 - 70 * Udochka) * Size);
    txSetColor (TX_BLACK);
    txLine (x + 40 * Size, y - 70 * Size, x + (190 - 150 * Udochka) * Size, y - (10 + 60 * Udochka) * Size);

    txSetColor (TX_MYGREEN);
    txSetFillColor (TX_MYGREEN);
    POINT rybak [8] = {{ROUND (x - 15 * Size), ROUND (y + 20 * Size)},
                       {ROUND (x - 15 * Size), ROUND (y - 10 * Size)},
                       {ROUND (x - 20 * Size), ROUND (y - 10 * Size)},
                       {ROUND (x - 20 * Size), ROUND (y - 30 * Size)},
                       {ROUND (x + 20 * Size), ROUND (y - 30 * Size)},
                       {ROUND (x + 20 * Size), ROUND (y - 10 * Size)},
                       {ROUND (x + 15 * Size), ROUND (y - 10 * Size)},
                       {ROUND (x + 15 * Size), ROUND (y + 20 * Size)}};
    txPolygon (rybak, 8);

    txSetColor (TX_BLACK);
    txSetFillColor (TX_WHITE);
    txCircle (x, y - 45 * Size, 15 * Size);

    txSetColor (TX_MYGREEN);
    txSetFillColor (TX_MYGREEN);
    txRectangle (x - 13 * Size, y - 60 * Size, x + 13 * Size, y - 50 * Size);
    }

//{------------------------------------------------------------------------------------------------------
//! @ingroup Fon
//!
//! Рисует облако
//!
//! @param x        x-координата облака
//! @param y        y-координата облака
//! @param SizeX    Увеличение длины облака
//! @param SizeY    Увеличение ширины облака
//!
//! @par            Пример использования:
//!
//! @code
//!         OblakoDraw (300, 100, 1.75, 1.5);
//! @endcode
//}------------------------------------------------------------------------------------------------------

void OblakoDraw (int x, int y, double SizeX, double SizeY)
    {
    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txEllipse (x,              y,              x +  80 * SizeX, y + 40 * SizeY);
    txEllipse (x + 40 * SizeX, y - 10 * SizeY, x + 120 * SizeX, y + 40 * SizeY);
    }

//{------------------------------------------------------------------------------------------------------
//! @ingroup Fon
//!
//! Рисует дерево
//!
//! @param x            x-координата дерева
//! @param y            y-координата дерева
//! @param Size         Размеры дерева
//! @param Storona      Отражает дерево по горизонтали. -1 - отразить, 1 - оставить без изменений
//!
//! @par                Пример использования:
//!
//! @code
//!         DerevoDraw (300, 100, 2, -1);
//! @endcode
//}------------------------------------------------------------------------------------------------------

void DerevoDraw (int x, int y, double Size, int Storona)
    {
    txSetColor (TX_MYBROWN);
    txSetFillColor (TX_MYBROWN);
    POINT Stvol [5] = {{       x,                                 y              },
                       {ROUND (x - 15 * Size * Storona), ROUND (y +  95 * Size)},
                       {ROUND (x -  5 * Size * Storona), ROUND (y + 105 * Size)},
                       {ROUND (x +  2 * Size * Storona), ROUND (y +  98 * Size)},
                       {ROUND (x + 15 * Size * Storona), ROUND (y + 100 * Size)}};
    txPolygon (Stvol, 5);

    txSetColor (TX_GREEN);
    txSetFillColor (TX_GREEN);
    txCircle (x,                           y,             20 * Size);
    txCircle (x - (20 * Size * Storona), y + 20 * Size, 20 * Size);
    txCircle (x + (10 * Size * Storona), y + 30 * Size, 30 * Size);
    txCircle (x - (20 * Size * Storona), y + 40 * Size, 20 * Size);
    }

//{------------------------------------------------------------------------------------------------------
//! @ingroup Fon
//!
//! Рисует цветок
//!
//! @param x            x-координата цветка
//! @param y            y-координата цветка
//! @param Size         Размер цветка
//! @param centr        Задаёт цвет серединки
//! @param lepestki     Задаёт цвет лепестков
//!
//! @par                Пример использования:
//!
//! @code
//!         CvetokDraw (300, 100, 1.5, TX_WHITE, TX_ORANGE);
//! @endcode
//}------------------------------------------------------------------------------------------------------

void CvetokDraw (int x, int y, double Size, COLORREF centr, COLORREF lepestki)
    {
    txSetColor (lepestki);
    txSetFillColor (lepestki);
    txCircle (x - 15 * Size, y -  5 * Size, 10 * Size);
    txCircle (x - 15 * Size, y +  8 * Size, 10 * Size);
    txCircle (x,             y + 14 * Size, 10 * Size);
    txCircle (x + 15 * Size, y +  8 * Size, 10 * Size);
    txCircle (x + 15 * Size, y -  5 * Size, 10 * Size);
    txCircle (x,             y - 14 * Size, 10 * Size);

    txSetColor     (centr);
    txSetFillColor (centr);
    txCircle (x, y, 10 * Size);
    }

//{------------------------------------------------------------------------------------------------------
//! @ingroup Auto
//!
//! Рисует знаменитый Москвич 2141
//!
//! @param x            x-координата расположения автомобиля
//! @param y            y-координата расположения автомобиля
//! @param KapotUp      Открывает/закрывает капот
//! @param OknoDown     Открывает/закрывает заднее окно. Окно опускается при отрицательных значениях,
//!                     0 - окно закрыто.
//! @param Antena       Наклоняет антену. Отрицательные значания - влево, положительные - вправо
//! @param Avariikaa    Включение/отключение аварийной сигнализации. 1 - лампочка горит, 0 - нет
//! @param Size         Размер москвича
//!
//! @par                Пример использования:
//!
//! @code
//!         MoskvichDraw (900, 400, -60, -40, 10, 1, 1.5);
//! @endcode
//}------------------------------------------------------------------------------------------------------

void MoskvichDraw (int x, int y, int KapotUp, int OknoDown, int Antena,
                   int Avariika,  double Size)
    {
    txSetColor (TX_DARKCYAN);
    txSetFillColor (TX_DARKCYAN);
    POINT KuzovMoskvicha [19] = {{       x,                      y              },
                                 {ROUND (x -  40 * Size),        y              },
                                 {ROUND (x -  50 * Size), ROUND (y -  60 * Size)},
                                 {ROUND (x +  35 * Size), ROUND (y -  60 * Size)},
                                 {ROUND (x +  80 * Size), ROUND (y - 120 * Size)},
                                 {ROUND (x + 220 * Size), ROUND (y - 120 * Size)},
                                 {ROUND (x + 270 * Size), ROUND (y -  60 * Size)},
                                 {ROUND (x + 268 * Size),        y              },
                                 {ROUND (x + 240 * Size),        y              },
                                 {ROUND (x + 238 * Size), ROUND (y -  10 * Size)},
                                 {ROUND (x + 228 * Size), ROUND (y -  20 * Size)},
                                 {ROUND (x + 210 * Size), ROUND (y -  20 * Size)},
                                 {ROUND (x + 203 * Size), ROUND (y -  10 * Size)},
                                 {ROUND (x + 200 * Size),        y              },
                                 {ROUND (x +  40 * Size),        y              },
                                 {ROUND (x +  37 * Size), ROUND (y -  10 * Size)},
                                 {ROUND (x +  28 * Size), ROUND (y -  20 * Size)},
                                 {ROUND (x +  10 * Size), ROUND (y -  20 * Size)},
                                 {ROUND (x +   3 * Size), ROUND (y -  10 * Size)}};
    txPolygon (KuzovMoskvicha, 19);
    txSetColor (TX_BLACK);
    POINT Kapot [4] = {{ROUND (x +  35                * Size), ROUND (y -  60            * Size)},
                       {ROUND (x - (50 + KapotUp / 3) * Size), ROUND (y - (60 - KapotUp) * Size)},
                       {ROUND (x - (50 + KapotUp / 3) * Size), ROUND (y - (64 - KapotUp) * Size)},
                       {ROUND (x +  38                * Size), ROUND (y -  64            * Size)}};
    txPolygon (Kapot, 4);

    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    POINT OknoVoditel [4] {{ROUND (x +  47 * Size), ROUND (y -  60 * Size) },
                           {ROUND (x + 135 * Size), ROUND (y -  60 * Size)},
                           {ROUND (x + 135 * Size), ROUND (y - 110 * Size)},
                           {ROUND (x +  81 * Size), ROUND (y - 110 * Size)}};
    txPolygon (OknoVoditel, 4);

    txSetColor (TX_BLACK);
    txSetFillColor (TX_WHITE);
    txRectangle (x + 143 * Size, y - 110 * Size, x + 210 * Size, y - 60 * Size);

    txSetColor (TX_MYBROWN);
    txSetFillColor (TX_MYBROWN);
    POINT Volosy [4] = {{ROUND (x + 150 * Size), ROUND (y -  60 * Size)},
                        {ROUND (x + 160 * Size), ROUND (y - 105 * Size)},
                        {ROUND (x + 200 * Size), ROUND (y - 105 * Size)},
                        {ROUND (x + 210 * Size), ROUND (y -  60 * Size)}};
    txPolygon (Volosy, 4);

    txSetColor (TX_BLACK);
    txSetFillColor (TX_WHITE);
    txCircle (x + 180 * Size, y - 80 * Size, 20 * Size);

    txCircle (x + 173 * Size, y - 85 * Size, 8 * Size);
    txCircle (x + 187 * Size, y - 85 * Size, 8 * Size);

    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLUE);
    txCircle (x + 173 * Size, y - 85 * Size, 2 * Size);
    txCircle (x + 187 * Size, y - 85 * Size, 2 * Size);

    txSetColor (TX_RED);
    txSetFillColor (TX_RED);
    txEllipse (x + 173 * Size, y - 76 * Size, x + 187 * Size, y - 66 * Size);

    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txRectangle (x + 143 * Size, y - (110 + OknoDown) * Size, x + 210 * Size, y - 60 * Size);

    POINT OknoBagage [3] {{ROUND (x + 217 * Size), ROUND (y - 110 * Size)},
                          {ROUND (x + 217 * Size), ROUND (y -  60 * Size)},
                          {ROUND (x + 257 * Size), ROUND (y -  60 * Size)}};
    txPolygon (OknoBagage, 3);

    txSetColor (TX_BLACK, 2);
    txCircle (x + 270 * Size, y - 60 * Size, 3 * Size);
    txLine (x + 270 * Size, y - 60 * Size, x + (270 + Antena) * Size, y - (120 + Antena / 3) * Size);

    txSetColor (TX_BLACK);
    txSetFillColor (TX_TRANSPARENT);
    POINT DveriMoskvicha [10] = {{ROUND (x + 139 * Size), ROUND (y - 114 * Size)},
                                 {ROUND (x + 139 * Size), ROUND (y -   3 * Size)},
                                 {ROUND (x +  43 * Size), ROUND (y -   3 * Size)},
                                 {ROUND (x +  43 * Size), ROUND (y -  60 * Size)},
                                 {ROUND (x +  80 * Size), ROUND (y - 114 * Size)},
                                 {ROUND (x + 212 * Size), ROUND (y - 114 * Size)},
                                 {ROUND (x + 212 * Size), ROUND (y -  25 * Size)},
                                 {ROUND (x + 200 * Size), ROUND (y -  15 * Size)},
                                 {ROUND (x + 196 * Size), ROUND (y -   3 * Size)},
                                 {ROUND (x + 139 * Size), ROUND (y -   3 * Size)}};
    txPolygon (DveriMoskvicha, 10);

    txSetFillColor (TX_BLACK);
    txRectangle (x + 113 * Size, y - 53 * Size, x + 133 * Size, y - 45 * Size);
    txRectangle (x + 188 * Size, y - 53 * Size, x + 208 * Size, y - 45 * Size);
    txRectangle (x -  51 * Size, y - 20 * Size, x -  26 * Size, y -  8 * Size);
    txRectangle (x + 255 * Size, y - 20 * Size, x + 275 * Size, y -  8 * Size);

    txSetColor (TX_ORANGE);
    txSetFillColor (TX_ORANGE);
    txCircle (x - 20 * Size, y - 45 * Size, 5 * Size);
    txLine (x - 20 * Size, y - 55 * Size, x - 20 * Size, y - (55 + 5 * Avariika) * Size);
    txLine (x - 20 * Size, y - 35 * Size, x - 20 * Size, y - (35 - 5 * Avariika) * Size);

    txLine (x - 30 * Size, y - 45 * Size, x - (30 + 5 * Avariika) * Size, y - 45 * Size);
    txLine (x - 10 * Size, y - 45 * Size, x - (10 - 5 * Avariika) * Size, y - 45 * Size);

    txLine (x - 25 * Size, y - 50 * Size, x - (25 + 5 * Avariika) * Size, y - (50 + 5 * Avariika) * Size);
    txLine (x - 15 * Size, y - 50 * Size, x - (15 - 5 * Avariika) * Size, y - (50 + 5 * Avariika) * Size);
    txLine (x - 25 * Size, y - 40 * Size, x - (25 + 5 * Avariika) * Size, y - (40 - 5 * Avariika) * Size);
    txLine (x - 15 * Size, y - 40 * Size, x - (15 - 5 * Avariika) * Size, y - (40 - 5 * Avariika) * Size);

    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle (x +  20 * Size, y, 21 * Size);
    txCircle (x + 220 * Size, y, 21 * Size);
    txSetFillColor (TX_WHITE);
    txCircle (x +  20 * Size, y, 15 * Size);
    txCircle (x + 220 * Size, y, 15 * Size);
    }

//{------------------------------------------------------------------------------------------------------
//! @ingroup Geroi
//!
//! Рисует Котика
//!
//! @param x            x-координата расположения автомобиля
//! @param y            y-координата расположения автомобиля
//! @param Size         Размер котика
//! @param Us1          Поднимает верхние ус. 0 - исходное положение, 1 - поднятое
//! @param Us2          Поднимает средние ус. 0 - исходное положение, 1 - поднятое
//! @param Us3          Опускает нижние усы. 0 - исходное положение, 1 - поднятое
//! @param Hvost        Обеспечивает виляние хвостом. 0 - исходное положение хвоста, 1 - смещение вправо
//! @param Lapki        Изображает передвижение котика. 0 - шаг левыми лапками, 1 - правыми
//! @param Stop         Приводит лапки котика в положение "стоим на месте". 0 - идём, 1 - стоим
//!
//! @par                Пример использования:
//!
//! @code
//!         CatDraw (500, 500, 0.75, 1 ,1, 0, 1, 1, 0);
//! @endcode
//}------------------------------------------------------------------------------------------------------

void CatDraw (int x, int y, double Size, int Us1, int Us2, int Us3, int Hvost, int Lapki, int Stop)
    {
    txSetColor (TX_BLACK, 4);
    txLine (x  +  80 * Size, y + 50 * Size, x + ( 90 - 40 * Lapki - 30 * Stop) * Size, y + 90 * Size);
    txLine (x  + 130 * Size, y + 50 * Size, x + (140 - 40 * Lapki - 30 * Stop) * Size, y + 90 * Size);

    txSetColor (TX_BLACK, 2);
    txSetFillColor (TX_ORANGE);
    txPie (x + 40, y - 20 * Size, x + 160 * Size, y + 80 * Size, 180, 180);

    POINT Ushi [6] = {{x,                            y             }, {ROUND (x +  20 * Size), ROUND (y - 20 * Size)},
                      {ROUND (x + 30 * Size),        y             }, {ROUND (x +  70 * Size),        y             },
                      {ROUND (x + 80 * Size), ROUND (y - 20 * Size)}, {ROUND (x + 100 * Size),        y             }};
    txPolygon (Ushi, 6);

    txPie (x, y - 40 * Size, x + 100 * Size, y + 40 * Size, 180, 180);
    txSetColor (TX_ORANGE, 2);
    txLine (x +  2 * Size, y, x + 28 * Size, y);
    txLine (x + 72 * Size, y, x + 97 * Size, y);

    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    POINT UhoL [3] = {{ROUND (x + 10 * Size),        y            },
                      {ROUND (x + 18 * Size), ROUND (y - 9 * Size)},
                      {ROUND (x + 22 * Size),        y            }};
    txPolygon (UhoL, 3);
    POINT UhoR [3] = {{ROUND (x + 78 * Size),        y            },
                      {ROUND (x + 82 * Size), ROUND (y - 9 * Size)},
                      {ROUND (x + 90 * Size),        y            }};
    txPolygon (UhoR, 3);

    txLine (x + 50 * Size, y + 20 * Size, x + 100 * Size, y + (15 - 3 * Us1) * Size);
    txLine (x + 50 * Size, y + 20 * Size, x +  90 * Size, y + (25 - 3 * Us2) * Size);
    txLine (x + 50 * Size, y + 20 * Size, x +  95 * Size, y + (35 + 3 * Us3) * Size);

    txLine (x + 50 * Size, y + 20 * Size, x,              y + (15 - 3 * Us1) * Size);
    txLine (x + 50 * Size, y + 20 * Size, x +  10 * Size, y + (25 - 3 * Us2) * Size);
    txLine (x + 50 * Size, y + 20 * Size, x +   5 * Size, y + (35 + 3 * Us3) * Size);

    txLine (x + 50 * Size, y + 20 * Size, x +  50 * Size, y + 30 * Size);
    txLine (x + 50 * Size, y + 30 * Size, x +  40 * Size, y + 35 * Size);
    txLine (x + 40 * Size, y + 35 * Size, x +  35 * Size, y + 30 * Size);
    txLine (x + 50 * Size, y + 30 * Size, x +  60 * Size, y + 35 * Size);
    txLine (x + 60 * Size, y + 35 * Size, x +  65 * Size, y + 30 * Size);

    txCircle (x + 50 * Size, y + 20 * Size, 3 * Size);

    txSetFillColor (TX_GREEN);
    txCircle (x + 30 * Size, y + 10 * Size, 3 * Size);
    txCircle (x + 70 * Size, y + 10 * Size, 3 * Size);

    txSetColor (TX_BLACK, 4);
    txLine (x  +  80 * Size, y + 50 * Size, x + ( 50 + 40 * Lapki + 30 * Stop) * Size, y + (90 + 10 * Stop) * Size);
    txLine (x  + 130 * Size, y + 50 * Size, x + (100 + 40 * Lapki + 30 * Stop) * Size, y + (90 + 10 * Stop) * Size);

    txLine (x + 160 * Size, y + 30 * Size, x + (130 + 60 * Hvost) * Size, y - (20 + 10 * Hvost) * Size);
    }

//{------------------------------------------------------------------------------------------------------
//! @ingroup Geroi
//!
//! Рисует Котика сзади
//!
//! @param x            x-координата расположения автомобиля
//! @param y            y-координата расположения автомобиля
//! @param Size         Размер котика
//! @param Us1          Поднимает верхние ус. 0 - исходное положение, 1 - поднятое
//! @param Us2          Поднимает средние ус. 0 - исходное положение, 1 - поднятое
//! @param Us3          Опускает нижние усы. 0 - исходное положение, 1 - поднятое
//! @param Hvost        Обеспечивает виляние хвостом. 0 - исходное положение хвоста, 1 - смещение вправо
//!
//! @par                Пример использования:
//!
//! @code
//!         CatZadDraw (500, 300, 2, 1 ,1, 0, 1);
//! @endcode
//}------------------------------------------------------------------------------------------------------

void CatZadDraw (int x, int y, double Size, int Us1, int Us2, int Us3, int Hvost)
    {
    txSetColor (TX_BLACK, 2);
    txSetFillColor (TX_ORANGE);
    txEllipse (x,             y + 100 * Size, x +  40 * Size, y + 120 * Size);
    txEllipse (x + 60 * Size, y + 100 * Size, x + 100 * Size, y + 120 * Size);
    txEllipse (x + 10 * Size, y +  20 * Size, x +  90 * Size, y + 120 * Size);

    txSetColor (TX_BLACK, 8);
    txLine (x + 50 * Size, y + 100 * Size, x + (30 + 20 * Hvost) * Size, y + 140 * Size);

    txSetColor (TX_BLACK);
    txLine (x + 50 * Size, y + 20 * Size, x + 100 * Size, y + (15 - 3 * Us1) * Size);
    txLine (x + 50 * Size, y + 20 * Size, x +  90 * Size, y + (25 - 3 * Us2) * Size);
    txLine (x + 50 * Size, y + 20 * Size, x +  95 * Size, y + (35 + 3 * Us3) * Size);

    txLine (x + 50 * Size, y + 20 * Size, x,              y + (15 - 3 * Us1) * Size);
    txLine (x + 50 * Size, y + 20 * Size, x +  10 * Size, y + (25 - 3 * Us2) * Size);
    txLine (x + 50 * Size, y + 20 * Size, x +   5 * Size, y + (35 + 3 * Us3) * Size);

    txSetColor (TX_BLACK, 2);
    txSetFillColor (TX_ORANGE);
    POINT Ushi [6] = {{x,                            y             }, {ROUND (x +  20 * Size), ROUND (y - 20 * Size)},
                      {ROUND (x + 30 * Size),        y             }, {ROUND (x +  70 * Size),        y             },
                      {ROUND (x + 80 * Size), ROUND (y - 20 * Size)}, {ROUND (x + 100 * Size),        y             }};
    txPolygon (Ushi, 6);

    txPie (x, y - 40 * Size, x + 100 * Size, y + 40 * Size, 180, 180);

    txSetColor (TX_ORANGE, 2);
    txLine (x +  2 * Size, y, x + 28 * Size, y);
    txLine (x + 72 * Size, y, x + 97 * Size, y);
    }

//{------------------------------------------------------------------------------------------------------
//! @ingroup Auto
//!
//! Рисует автобус, держащий курс на балтийское море))
//!
//! @param x            x-координата расположения автобуса
//! @param y            y-координата расположения автобуса
//! @param Zajiganie    Отвечает за работу двигателя, которая изображается
//!                     наличием/отсутствием выхлопа. 0 - отсутствие, 1 - наличие
//! @param Stop         Отвечает за загорание стоп-огней при остановке автобуса
//! @param Podveska     Отвечает за положение кузова
//! @param Kolesa       Увеличивает диаметр колес
//! @param Glushitel    Дальность выхлопных газов
//! @param Size         Размер автобуса
//!
//! @par                Пример использования:
//!
//! @code
//!         BusLDraw (800, 450, 1, TX_RED, 10, 5, 20, 1.25);
//! @endcode
//}------------------------------------------------------------------------------------------------------

void BusLDraw (int x, int y, int Zajiganie, COLORREF Stop, int Podveska,
               int Kolesa, int Glushitel, double Size)
    {
    txSetColor (TX_BLACK, 2);
    txSetFillColor (TX_WHITE);
    txRectangle (x,              y - (120 - Podveska) * Size,
                 x + 300 * Size, y +        Podveska        );

    txSetFillColor (TX_BLUE);
    txRectangle (x + 120 * Size, y - (130 - Podveska) * Size,
                 x + 240 * Size, y - (120 - Podveska) * Size);

    txSetColor (TX_BLUE, 4);
    txLine (x,              y - (33 - Podveska) * Size,
            x + 270 * Size, y - (33 - Podveska) * Size);
    txLine (x,              y - (25 - Podveska) * Size,
            x + 270 * Size, y - (25 - Podveska) * Size);
    txLine (x + 270 * Size, y - (33 - Podveska) * Size,
            x + 298 * Size, y - (62 - Podveska) * Size);
    txLine (x + 273 * Size, y - (25 - Podveska) * Size,
            x + 298 * Size, y - (51 - Podveska) * Size);

    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txRectangle (x,              y - (120 - Podveska) * Size,
                 x +  40 * Size, y - ( 50 - Podveska) * Size);
    txRectangle (x +  60 * Size, y - (110 - Podveska) * Size,
                 x + 120 * Size, y - ( 50 - Podveska) * Size);
    txRectangle (x + 140 * Size, y - (110 - Podveska) * Size,
                 x + 200 * Size, y - ( 50 - Podveska) * Size);
    txRectangle (x + 220 * Size, y - (110 - Podveska) * Size,
                 x + 280 * Size, y - ( 50 - Podveska) * Size);

    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle (x +  80 * Size, y, 20 * Size + Kolesa);
    txCircle (x + 240 * Size, y, 20 * Size + Kolesa);

    txSetFillColor (TX_WHITE);
    txCircle (x +  80 * Size, y, 15 * Size + Kolesa);
    txCircle (x + 240 * Size, y, 15 * Size + Kolesa);

    txSetColor (TX_WHITE);
    txSetFillColor (TX_BLUE);
    txCircle (x +  80 * Size, y, 10 * Size + Kolesa);
    txCircle (x + 240 * Size, y, 10 * Size + Kolesa);

    txSetColor (TX_BLACK);
    txSetFillColor (Stop);
    txRectangle (x + 300 * Size, y - (40 - Podveska) * Size,
                 x + 304 * Size, y - (20 - Podveska) * Size);

    txSetFillColor (TX_ORANGE);
    txRectangle (x - 4 * Size, y - (20 - Podveska) * Size,
                 x,            y - ( 5 - Podveska) * Size);

    txSetFillColor (TX_DARKGRAY);
    txRectangle (x + 300 * Size, y - (10 - Podveska) * Size,
                 x + 305 * Size, y - ( 5 - Podveska) * Size);

    txSetColor (TX_DARKGRAY);
    txEllipse (x +  310                                 * Size, y - (10 -                    Podveska) * Size,
               x + (310 + (10 * Zajiganie) + Glushitel) * Size, y - (10 - ( 5 * Zajiganie) - Podveska) * Size);
    txEllipse (x +  315                                 * Size, y - (15 -                    Podveska) * Size,
               x + (315 + (10 * Zajiganie) + Glushitel) * Size, y - (15 - (10 * Zajiganie) - Podveska) * Size);
    txEllipse (x +  315                                 * Size, y - (10 -                    Podveska) * Size,
               x + (315 + (20 * Zajiganie) + Glushitel) * Size, y + (10 - (10 * Zajiganie) + Podveska)       );
    }

//{------------------------------------------------------------------------------------------------------
//! @ingroup Auto
//!
//! Рисует автобус, держащий курс на балтийское море со стороны дверей))
//!
//! @param x            x-координата расположения автобуса
//! @param y            y-координата расположения автобуса
//! @param Zajiganie    Отвечает за работу двигателя, которая изображается
//!                     наличием/отсутствием выхлопа. 0 - отсутствие, 1 - наличие
//! @param Stop         Отвечает за загорание стоп-огней при остановке автобуса
//! @param Podveska     Отвечает за положение кузова
//! @param Kolesa       Увеличивает диаметр колес
//! @param Glushitel    Дальность выхлопных газов
//! @param Size         Размер автобуса
//! @param DveriDown    Перемещение дверей вниз
//! @param DveriSide    Перемещение дверей в стороны
//!
//! @par                Пример использования:
//!
//! @code
//!         BusRDraw (800, 450, 1, TX_DARKGRAY, 20, 5, 0, 1.25, 10, 25);
//! @endcode
//}------------------------------------------------------------------------------------------------------

void BusRDraw (int x, int y, int Zajiganie, COLORREF Stop, int Podveska, int Kolesa,
               int Glushitel, double Size, int DveriDown, int DveriSide)
    {
    txSetColor (TX_BLACK, 2);
    txSetFillColor (TX_WHITE);
    txRectangle (x - 300 * Size, y - (120 - Podveska) * Size,
                 x,              y +        Podveska        );

    txSetFillColor (TX_BLUE);
    txRectangle (x - 120 * Size, y - (130 - Podveska) * Size,
                 x - 240 * Size, y - (120 - Podveska) * Size);

    txSetFillColor (TX_BLACK);
    txRectangle (x -  40 * Size, y - (120 - Podveska) * Size,
                 x,              y - ( 50 - Podveska) * Size);
    txRectangle (x -  60 * Size, y - (110 - Podveska) * Size,
                 x - 120 * Size, y - ( 50 - Podveska) * Size);
    txRectangle (x - 220 * Size, y - (110 - Podveska) * Size,
                 x - 280 * Size, y - ( 50 - Podveska) * Size);

    txSetColor (TX_BLUE, 4);
    txLine (x - 299 * Size, y - (62 - Podveska) * Size,
            x - 270 * Size, y - (33 - Podveska) * Size);
    txLine (x - 299 * Size, y - (51 - Podveska) * Size,
            x - 274 * Size, y - (25 - Podveska) * Size);
    txLine (x - 270 * Size, y - (33 - Podveska) * Size,
            x - 200 * Size, y - (33 - Podveska) * Size);
    txLine (x - 274 * Size, y - (25 - Podveska) * Size,
            x - 200 * Size, y - (25 - Podveska) * Size);
    txLine (x - 140 * Size, y - (33 - Podveska) * Size,
            x -   2 * Size, y - (33 - Podveska) * Size);
    txLine (x - 140 * Size, y - (25 - Podveska) * Size,
            x -   2 * Size, y - (25 - Podveska) * Size);

    txSetColor (TX_BLACK);
    txCircle (x -  80 * Size, y, 20 * Size + Kolesa);
    txCircle (x - 240 * Size, y, 20 * Size + Kolesa);

    txSetFillColor (TX_WHITE);
    txCircle (x -  80 * Size, y, 15 * Size + Kolesa);
    txCircle (x - 240 * Size, y, 15 * Size + Kolesa);

    txSetColor (TX_WHITE);
    txSetFillColor (TX_BLUE);
    txCircle (x -  80 * Size, y, 10 * Size + Kolesa);
    txCircle (x - 240 * Size, y, 10 * Size + Kolesa);

    txSetColor (TX_BLACK);
    txSetFillColor (TX_GRAY);
    txRectangle (x - 200 * Size, y - (80 - Podveska) * Size,
                 x - 140 * Size, y +       Podveska        );

    txSetFillColor (TX_DARKGRAY);
    txRectangle (x - 200 * Size, y - (51 - Podveska) * Size,
                 x - 140 * Size, y - (43 - Podveska) * Size);
    txRectangle (x - 200 * Size, y - (33 - Podveska) * Size,
                 x - 140 * Size, y - (25 - Podveska) * Size);
    txRectangle (x - 200 * Size, y - (15 - Podveska) * Size,
                 x - 140 * Size, y - ( 7 - Podveska) * Size);

    txSetColor (TX_BLACK, 2);
    txSetFillColor (TX_WHITE);
    txRectangle (x - (200 + DveriSide) * Size, y - (80 - Podveska - DveriDown) * Size,
                 x - (170 + DveriSide) * Size, y + (     Podveska + DveriDown) * Size);
    txRectangle (x - (170 - DveriSide) * Size, y - (80 - Podveska - DveriDown) * Size,
                 x - (140 - DveriSide) * Size, y + (     Podveska + DveriDown) * Size);

    txSetColor (TX_BLUE, 4);
    txLine (x - (200 + DveriSide) * Size, y - (33 - Podveska - DveriDown) * Size,
            x - (172 + DveriSide) * Size, y - (33 - Podveska - DveriDown) * Size);
    txLine (x - (200 + DveriSide) * Size, y - (25 - Podveska - DveriDown) * Size,
            x - (172 + DveriSide) * Size, y - (25 - Podveska - DveriDown) * Size);
    txLine (x - (170 - DveriSide) * Size, y - (33 - Podveska - DveriDown) * Size,
            x - (142 - DveriSide) * Size, y - (33 - Podveska - DveriDown) * Size);
    txLine (x - (170 - DveriSide) * Size, y - (25 - Podveska - DveriDown) * Size,
            x - (142 - DveriSide) * Size, y - (25 - Podveska - DveriDown) * Size);

    txSetColor (TX_BLACK);
    txSetFillColor (Stop);
    txRectangle (x - 300 * Size, y - (40 - Podveska) * Size,
                 x - 304 * Size, y - (20 - Podveska) * Size);

    txSetFillColor (TX_ORANGE);
    txRectangle (x + 4 * Size, y - (20 - Podveska) * Size,
                 x - 1 * Size, y - ( 5 - Podveska) * Size);

    txSetFillColor (TX_DARKGRAY);
    txRectangle (x - 300 * Size, y - (10 - Podveska) * Size,
                 x - 305 * Size, y - ( 5 - Podveska) * Size);

    txSetColor (TX_DARKGRAY);
    txSetFillColor (TX_DARKGRAY);
    txEllipse (x -  310                                 * Size, y - (10 -                    Podveska) * Size,
               x - (310 + (10 * Zajiganie) + Glushitel) * Size, y - (10 - ( 5 * Zajiganie) - Podveska) * Size);
    txEllipse (x -  315                                 * Size, y - (15 -                    Podveska) * Size,
               x - (315 + (10 * Zajiganie) + Glushitel) * Size, y - (15 - (10 * Zajiganie) - Podveska) * Size);
    txEllipse (x -  315                                 * Size, y - (10 -                    Podveska) * Size,
               x - (315 + (20 * Zajiganie) + Glushitel) * Size, y + (10 - (10 * Zajiganie) + Podveska)       );
    }

//{------------------------------------------------------------------------------------------------------
//! @ingroup Geroi
//!
//! Рисует прекрасную мадмуазель
//!
//! @param x                x-координата расположения мадмуазель
//! @param y                y-координата расположения мадмуазель
//! @param Anfas            Разворачивает мадмуазель. 0 - мадам стоит спиной к зрителю, 1 - лицом
//! @param StoitNaNogah     Усаживает мадам на какую-либо поверхность. 0 - мадам сидит, 1 - стоит
//! @param Glaza            Размер глаз. Служит для передачи глубокого удивления, за счёт увеличения радиуса
//! @param Zrachki          Даёт возможность выбрать цвет глаз для мадам.
//! @param Rot              Этот параметр делает мадам почти идеальной женщиной,
//!                         т.к. позволяет открыть и закрыть ей рот.
//!                         Происходит это за счёт увеличения/уменьшения ширины эллипса
//! @param UpRukaL          Поднимает левую руку. 0 - опущенное положение, 1 - поднятое
//! @param UpRukaP          Поднимает правую руку. 0 - опущенное положение, 1 - поднятое
//! @param UpNogaL          Поднимает левую ногу. 0 - опущенное положение, 1 - поднятое
//! @param UpNogaP          Поднимает правую ногу. 0 - опущенное положение, 1 - поднятое
//! @param Naushniki        Рисует наушники на голове мадам. 0 - наушники сняты, 1 - наушники надеты
//! @param Telephon         Рисует телефон в правой руке. 0 - телефона нет, 1 - появился
//! @param Size             Габариты мадмуазель
//!
//! @note                   Левая/правая сторона определяется относительно сидящего за компьютером
//!
//! @par                    Пример использования:
//!
//! @code
//!         MadamDraw (1100, 180, 1, 1, 2, TX_BLUE, 1, 1, 0, 1, 1, 0, 1, 2);
//! @endcode
//}------------------------------------------------------------------------------------------------------

void MadamDraw (int x, int y, int Anfas, int StoitNaNogah, int Glaza, COLORREF Zrachki,
                int Rot, int UpRukaL, int UpRukaP, int UpNogaL, int UpNogaP, int Naushniki,
                int Telephon, double Size)
    {
    txSetColor (TX_MYBROWN);
    txSetFillColor (TX_MYBROWN);
    POINT volosy[6] = {{ROUND (x - 10 * Size), ROUND (y + 30 * Size)},
                       {ROUND (x + 10 * Size), ROUND (y + 30 * Size)},
                       {ROUND (x + 30 * Size), ROUND (y + 15 * Size)},
                       {ROUND (x + 15 * Size), ROUND (y - 30 * Size)},
                       {ROUND (x - 15 * Size), ROUND (y - 30 * Size)},
                       {ROUND (x - 30 * Size), ROUND (y + 15 * Size)}};
    txPolygon (volosy, 6);

    txSetColor (TX_MYBROWN);
    txSetFillColor (TX_WHITE);
    txCircle (x, y, 20 * Anfas * Size);

    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    POINT naushniki [12] = {{ROUND (x - 15 * Size), ROUND (y + 10 * Size)},
                            {ROUND (x - 15 * Size), ROUND (y - 15 * Size)},
                            {ROUND (x + 15 * Size), ROUND (y - 15 * Size)},
                            {ROUND (x + 15 * Size), ROUND (y + 10 * Size)},
                            {ROUND (x + 25 * Size), ROUND (y + 10 * Size)},
                            {ROUND (x + 25 * Size), ROUND (y - 10 * Size)},
                            {ROUND (x + 20 * Size), ROUND (y - 10 * Size)},
                            {ROUND (x + 20 * Size), ROUND (y - 20 * Size)},
                            {ROUND (x - 20 * Size), ROUND (y - 20 * Size)},
                            {ROUND (x - 20 * Size), ROUND (y - 10 * Size)},
                            {ROUND (x - 25 * Size), ROUND (y - 10 * Size)},
                            {ROUND (x - 25 * Size), ROUND (y + 10 * Size)}};

    txPolygon (naushniki, 12 * Naushniki * Anfas);

    txSetFillColor (TX_WHITE);
    txCircle (x - 7 * Size, y - 5 * Size, 2 * Glaza * Anfas * Size);
    txCircle (x + 7 * Size, y - 5 * Size, 2 * Glaza * Anfas * Size);

    txSetColor (TX_BLACK);
    txSetFillColor (Zrachki);
    txCircle (x - 7 * Size, y - 5 * Size, 2 * Anfas * Size);
    txCircle (x + 7 * Size, y - 5 * Size, 2 * Anfas * Size);

    txSetColor (TX_RED);
    txSetFillColor (TX_RED);
    txEllipse (x - 7 * Anfas * Size, y + (10 - Rot) * Anfas * Size,
               x + 7 * Anfas * Size, y + (10 + Rot) * Anfas * Size);

    txSetColor (TX_BLACK, 2);
    txLine (x - 13 * Size, y + 45 * Size, x - 40 * Size, y + (55 - 30 * UpRukaL) * Size);
    txLine (x + 13 * Size, y + 45 * Size, x + 40 * Size, y + (55 - 30 * UpRukaP) * Size);

    txLine (x - 13 * Size, y + 80 * Size, x - 13 * Size, y + (80 + 10 * StoitNaNogah + 20 * UpNogaL * StoitNaNogah) * Size);
    txLine (x + 13 * Size, y + 80 * Size, x + 13 * Size, y + (80 + 10 * StoitNaNogah + 20 * UpNogaP * StoitNaNogah) * Size);

    txSetColor (TX_PINK);
    txSetFillColor (TX_PINK);
    POINT telo[5] = {{ROUND (x -  4 * Size), ROUND (y +  30               * Size)},
                     {       x,              ROUND (y + (30 - 10 * Anfas) * Size)},
                     {ROUND (x +  4 * Size), ROUND (y +  30               * Size)},
                     {ROUND (x + 30 * Size), ROUND (y +  80               * Size)},
                     {ROUND (x - 30 * Size), ROUND (y +  80               * Size)}};
    txPolygon (telo, 5);

    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLUE);
    POINT telephon [4] = {{ROUND (x - (40 -  80 * Anfas) * Size),
                           ROUND (y + (47 - (30 * UpRukaP * Anfas) - (30 * UpRukaL * (-1 * (-1 + Anfas)))) * Size)},
                          {ROUND (x - (52 - 104 * Anfas) * Size),
                           ROUND (y + (47 - (30 * UpRukaP * Anfas) - (30 * UpRukaL * (-1 * (-1 + Anfas)))) * Size)},
                          {ROUND (x - (52 - 104 * Anfas) * Size),
                           ROUND (y + (65 - (30 * UpRukaP * Anfas) - (30 * UpRukaL * (-1 * (-1 + Anfas)))) * Size)},
                          {ROUND (x - (40 -  80 * Anfas) * Size),
                           ROUND (y + (65 - (30 * UpRukaP * Anfas) - (30 * UpRukaL * (-1 * (-1 + Anfas)))) * Size)}};

    txPolygon (telephon, 4 * Telephon);
    }

//{------------------------------------------------------------------------------------------------------
//! @ingroup Geroi
//!
//! Рисует прекрасную мадмуазель в профиль
//!
//! @param x                x-координата расположения мадмуазель
//! @param y                y-координата расположения мадмуазель
//! @param UpRukaL          Поднимает левую руку. 0 - опущенное положение, 1 - поднятое
//! @param UpRukaP          Поднимает правую руку. 0 - опущенное положение, 1 - поднятое
//! @param UpNogaL          Поднимает левую ногу. 0 - опущенное положение, 1 - поднятое
//! @param UpNogaP          Поднимает правую ногу. 0 - опущенное положение, 1 - поднятое
//! @param Size             Габариты мадмуазель
//! @param Storona          Определяет сторону профиля.
//!                         -1 - мадмуазель направлена в левую сторону, 1 - в правую
//!
//! @par                    Пример использования:
//!
//! @code
//!         MadamDrawProfil (1100, 180, TX_BLUE, 1, 0, 0, 0, 2, -1);
//! @endcode
//}------------------------------------------------------------------------------------------------------

void MadamDrawProfil (int x, int y, COLORREF Zrachki, int UpRukaL, int UpRukaP,
                      int UpNogaL, int UpNogaP, double Size, int Storona)
    {
    txSetColor (TX_MYBROWN);
    txSetFillColor (TX_WHITE);
    txCircle (x, y, 20 * Size);

    txSetColor (TX_BLACK);
    txSetFillColor (TX_WHITE);
    txCircle (x + 11 * Size * Storona, y - 5 * Size, 4 * Size);

    txSetColor (TX_BLACK);
    txSetFillColor (Zrachki);
    txCircle (x + 11 * Size * Storona, y - 5 * Size, 2 * Size);

    txSetColor (TX_MYBROWN);
    txSetFillColor (TX_MYBROWN);
    POINT volosy[7] = {{       x,                            ROUND (y + 40 * Size)},
                       {ROUND (x - (30 * Storona) * Size), ROUND (y + 40 * Size)},
                       {ROUND (x - (40 * Storona) * Size), ROUND (y + 20 * Size)},
                       {ROUND (x - (20 * Storona) * Size), ROUND (y - 30 * Size)},
                       {       x,                            ROUND (y - 30 * Size)},
                       {ROUND (x + (10 * Storona) * Size), ROUND (y - 20 * Size)},
                       {       x,                            ROUND (y +  5 * Size)}};
    txPolygon (volosy, 7);

    txSetColor (TX_BLACK, 2);
    txLine (x, y + 50 * Size, x + (20 * Storona - 10 * UpRukaL) * Size, y + (40 - 10 * Storona * UpRukaL) * Size);

    txSetColor (TX_PINK);
    txSetFillColor (TX_PINK);
    POINT telo[3] = {{       x,              ROUND (y + 20 * Size)},
                     {ROUND (x + 30 * Size), ROUND (y + 80 * Size)},
                     {ROUND (x - 30 * Size), ROUND (y + 80 * Size)}};
    txPolygon (telo, 3);

    txSetColor (TX_BLACK, 2);
    txLine (x, y + 50 * Size, x + (20 * Storona - 10 * UpRukaP) * Size, y + (40 - 10 * Storona * UpRukaP) * Size);

    txLine (x - 13 * Size, y + 80 * Size, x - 13 * Size, y + (110 - 20 * UpNogaL) * Size);
    txLine (x + 13 * Size, y + 80 * Size, x + 13 * Size, y + (110 - 20 * UpNogaP) * Size);
    }

//{------------------------------------------------------------------------------------------------------
//! @ingroup VtoroiPlan
//!
//! Рисует мужчину
//!
//! @param x            x-координата расположения мистера
//! @param y            y-координата расположения мистера
//! @param Anfas        Разворачивает мужчину. 0 - мужчина стоит спиной к зрителю, 1 - лицом
//! @param Glaza        Размер глаз. Служит для передачи глубокого удивления, за счёт увеличения радиуса
//! @param Zrachki      Даёт возможность выбрать цвет глаз мужчины
//! @param Rot          Этот параметр делает мужчину, так же как и мадам, почти идеальным,
//!                     т.к. позволяет открыть и закрыть ему рот.
//!                     Происходит это за счёт увеличения/уменьшения ширины эллипса
//! @param UpRukaL      Поднимает левую руку. 0 - опущенное положение, 1 - поднятое
//! @param UpRukaP      Поднимает правую руку. 0 - опущенное положение, 1 - поднятое
//! @param Size         Размер изображения мистера
//!
//! @note               Левая/правая сторона определяется относительно сидящего за компьютером
//!
//! @par                Пример использования:
//!
//! @code
//!         MisterDraw (1100, 180, 1, 2, TX_BROWN, 1, 1, 1, 0, 0, 2);
//! @endcode
//}------------------------------------------------------------------------------------------------------

void MisterDraw (int x, int y, int Anfas, int Glaza, COLORREF Zrachki, int Rot,
                int UpRukaL, int UpRukaP, int UpNogaL, int UpNogaP, double Size)
    {
    txSetColor (TX_MYBROWN);
    txSetFillColor (TX_WHITE);
    txCircle (x, y, 20 * Size);

    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txRectangle (x - 20 * Size, y - 25 * Size, x + 20 * Size, y - 10 * Size);

    txSetColor (TX_BLACK);
    txSetFillColor (TX_WHITE);
    txCircle (x - 7 * Size, y - 5 * Size, 2 * Glaza * Anfas * Size);
    txCircle (x + 7 * Size, y - 5 * Size, 2 * Glaza * Anfas * Size);

    txSetColor (TX_BLACK);
    txSetFillColor (Zrachki);
    txCircle (x - 7 * Size, y - 5 * Size, 2 * Anfas * Size);
    txCircle (x + 7 * Size, y - 5 * Size, 2 * Anfas * Size);

    txSetColor (TX_RED);
    txSetFillColor (TX_RED);
    txEllipse (x - 7 * Anfas * Size, y + (10 - Rot) * Anfas * Size,
               x + 7 * Anfas * Size, y + (10 + Rot) * Anfas * Size);

    txSetColor (TX_BLUE);
    txSetFillColor (TX_BLUE);
    POINT telo[3] = {{ ROUND (x - 20 * Size), ROUND (y + 20 * Size)},
                     { ROUND (x + 20 * Size), ROUND (y + 20 * Size)},
                     {        x,              ROUND (y + 80 * Size)}};
    txPolygon (telo, 3);

    txSetColor (TX_BLACK, 2);
    txLine (x - 13 * Size, y + 40 * Size, x - (25 + 15 * UpRukaL) * Size, y + (70 - 50 * UpRukaL) * Size);
    txLine (x + 13 * Size, y + 40 * Size, x + (25 + 15 * UpRukaL) * Size, y + (70 - 50 * UpRukaP) * Size);

    txLine (x, y + 80 * Size, x - 15 * Size, y + (110 - 15 * UpNogaL) * Size);
    txLine (x, y + 80 * Size, x + 15 * Size, y + (110 - 15 * UpNogaP) * Size);
    }

//{------------------------------------------------------------------------------------------------------
//! @ingroup VtoroiPlan
//!
//! Рисует мужчину в профиль
//!
//! @param x            x-координата расположения мистера
//! @param y            y-координата расположения мистера
//! @param UpNogaL      Поднимает левую ногу. 0 - опущенное положение, 1 - поднятое
//! @param UpNogaP      Поднимает правую ногу. 0 - опущенное положение, 1 - поднятое
//! @param Size         Размер изображения мистера
//! @param Storona      Определяет сторону профиля.
//!                     -1 - мужчина направлен в правую сторону, 1 - в левую
//!
//! @note               Левая/правая сторона определяется относительно сидящего за компьютером
//!
//! @par                Пример использования:
//!
//! @code
//!         MisterDrawProfil (1100, 180, TX_BROWN, 0, 0, 1.5, -1);
//! @endcode
//}------------------------------------------------------------------------------------------------------

void MisterDrawProfil (int x, int y, COLORREF Zrachki, int UpNogaL, int UpNogaP, double Size, int Storona)
    {
    txSetColor (TX_MYBROWN);
    txSetFillColor (TX_WHITE);
    txCircle (x, y, 20 * Size);

    txSetColor (TX_BLACK);
    txSetFillColor (TX_WHITE);
    txCircle (x - 7 * Size * Storona, y - 5 * Size, 4 * Size);

    txSetColor (TX_BLACK);
    txSetFillColor (Zrachki);
    txCircle (x - 7 * Size * Storona, y - 5 * Size, 2 * Size);

    txSetColor (TX_BLACK, 2);
    txSetFillColor (TX_BLACK);
    txRectangle (x - 20 * Size, y - 25 * Size, x + 20 * Size, y - 10 * Size);
    txLine (x - 40 * Size * Storona, y - 10 * Size, x - 20 * Size * Storona, y - 10 * Size);

    txSetColor (TX_BLUE);
    txSetFillColor (TX_BLUE);
    POINT telo[3] = {{ROUND (x - 20 * Size), ROUND (y + 20 * Size)},
                     {ROUND (x + 20 * Size), ROUND (y + 20 * Size)},
                     {       x,              ROUND (y + 80 * Size)}};
    txPolygon (telo, 3);

    txSetColor (TX_BLACK, 2);
    txLine (x, y + 40 * Size, x - 20 * Size * Storona, y + 60 * Size);

    txLine (x, y + 80 * Size, x - 15 * Size, y + (110 - 15 * UpNogaL) * Size);
    txLine (x, y + 80 * Size, x + 15 * Size, y + (110 - 15 * UpNogaP) * Size);
    }
