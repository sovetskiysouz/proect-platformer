#include  "TXLib.h"



int main()
    {
    txCreateWindow (800, 450);


    int i =0;
    int x =0;
    int y =340;
    int jump=0;
    int fall=0;

    HDC  map1 = txLoadImage ("map1.bmp");
    HDC image_left = txLoadImage ("marioleft.bmp");
    HDC image_right = txLoadImage ("marioright.bmp");

    while(!GetAsyncKeyState ('P'))
    {
    txBegin();
    txClear();
    txBitBlt (txDC(), x, 0, 2901, 450, map1);
    //if(i>0)
    //{
    //txTransparentBlt (txDC(), 312, y, 50, 50,image_left, 0, 0,TX_WHITE);
    //}

   // if(i<1)
   //{
   txTransparentBlt (txDC(), 312, y, 50, 50,image_right, 0, 0,TX_WHITE);
   // }
              if(GetAsyncKeyState ('W')&&jump<1)
              {
               y-=92;
               jump=+1;
               txSleep(1);
              }

              if(y<340)
              {
               y+=5;
               txSleep(1);
              }




              if(fall>0)
              {
               y+=5;
               txSleep(1);
              }

              if(GetAsyncKeyState ('D')&&x<563&&x>630)

              {
               x-=5;
               i=0;
               txSleep(1);
              }

              if(GetAsyncKeyState ('A')&& x<-40)
              {
               x+=5;
               i=1;
               txSleep(1);
              }
              txEnd();
     }


    txDeleteDC (map1);
    txDeleteDC (image_right);
    txDeleteDC (image_left);
    txDisableAutoPause ();

    txTextCursor (false);
    return 0;
    }

