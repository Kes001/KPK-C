#include "TXLib.h"
#include "DerMeisterLib.h"

int main ()
    {
    txCreateWindow (1000, 600);
    txClear ();

    for (int t = 0; t <= 400; t++)
        {
        txBegin ();

        txClear      ();
        Background   ();
        SolnceDraw   (100 + t, 80, 1 + t % 50);
        Oblaka       (t);
        RazmetkaDraw (510, 0);
        Lesopolosa   (0);
        MoskvichDraw (ROUND(1600 - t*2.5), 400, 0, 0, 0, 0, 1);
        SemerkaDraw  (-800 + t*2, 570);

        MadamDrawProfil (0 + t, 490, TX_RED, 0, 0, 0 + (t/30)%2, 1 - (t/30)%2, 1, 1);

        txSleep (10);
        txEnd ();
        }

    int golova = -1;

    for (int t = 0; t <= 5; t++)
        {
        txBegin ();

        txClear      ();
        Background   ();
        SolnceDraw   (500 + t, 80, 1 + t % 50);
        Oblaka       (150 + t);
        RazmetkaDraw (510, 0);
        Lesopolosa   (0);

        SemerkaDraw  (0, 570);
        MoskvichDraw (600, 400, 0, 0, 0, t%2, 1);

        MadamDrawProfil (400, 490, TX_RED, 0, 0, t%2, t%2, 1, 1*golova);
        golova *= -1;

        txSleep (300);
        txEnd   ();
        }

    for (int t = 0; t <= 75; t++)
        {
        txBegin ();

        txClear      ();
        Background   ();
        SolnceDraw   (510 + t, 80, 1 + t % 50);
        Oblaka       (150 + t);
        RazmetkaDraw (510, 0);
        Lesopolosa   (0);

        SemerkaDraw  (0, 570);
        MoskvichDraw (600, 400, -t/2, 0, 0, (t/10)%2, 1);

        MadamDrawProfil (400 - t*2, 490, TX_RED, 0, 0, 0 + (t/30)%2, 1 - (t/30)%2, 1, -1);
        golova *= -1;

        txSleep (20);
        txEnd   ();
        }

    for (int t = 0; t <= 150; t++)
        {
        txBegin ();

        txClear      ();
        Background   ();
        SolnceDraw   (590 + t, 80, 1 + t % 50);
        Oblaka       (150 + t);
        RazmetkaDraw (510, 0);
        Lesopolosa   (0);

        SemerkaDraw  (0 + t*5, 570);
        MoskvichDraw (600, 400, -30 - t/5, 0, 0, (t/10)%2, 1);

        txSleep (10);
        txEnd   ();
        }
    }
