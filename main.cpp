#include  "TXLib.h"
        struct badboy
        {
         int xbb;
         bool visible;
         int xbb_old;
        };


        int main()
        {

        if(true)
        {
        //txPlaySound ("mario_song.wav",SND_LOOP);
        }


        txCreateWindow (800, 450);
        /*    Barrier bar[8];

        bar[0] = {50, 50, 50, 50, TX_WHITE, true};
        bar[1] = {150, 50, 50, 50, TX_GREEN, true};
        bar[2] = {250, 50, 50, 50, TX_WHITE, true};
        bar[3] = {350, 50, 50, 50, TX_GREEN, true};
        bar[4] = {450, 50, 50, 50, TX_WHITE, true};
        bar[5] = {550, 50, 50, 50, TX_GREEN, true};
        bar[6] = {650, 50, 50, 50, TX_WHITE, true};
        bar[7] = {750, 50, 50, 50, TX_GREEN, true};
        */
        //Переменные
        int The_world=1;
        int coin=0;
        int x_Marrio_old=312;
        int x_Marrio=312;
        int y_old=340;
        int x_old=0;
        int i=0;
        int x=0;
        int y=340;
        int jump=0;
        int fall=0;
        int direction=0;
        int c=0;
        int d=0;
        int f=0;
        int g=0;
        int o=0;
        int u=0;
        int err=5;
        int rt=1259;
        int lt=831;
        int rt_o=1259;
        int lt_o=831;
        int visible=true;
        int level_zemly = 340;
        int xbb=882-50;
        int xbb_old=882-50;
        HDC ibb = txLoadImage ("badboy.bmp");
        HDC map1 = txLoadImage ("map1.bmp");
        HDC image_left = txLoadImage ("marioleft.bmp");
        HDC image_right = txLoadImage ("marioright.bmp");
        HDC image =image_right;
        HDC maP = map1;
        HDC map2 = txLoadImage ("2map.bmp");

        while(!GetAsyncKeyState ('P')&&y<499)
        {
        txBegin();
        txClear();

        rt_o=rt;
        lt_o=lt;
        x_Marrio_old=x_Marrio;
        x_old=x;
        y_old=y;
        xbb_old=xbb;
        /*if(fals)
        {
        level_zemly = 340;
        }*/

        txBitBlt (txDC(), x, 0, 4589, 450, maP);
        txTransparentBlt (txDC(), 312, y, 50, 50,image, 0, 0,TX_WHITE);


        txTransparentBlt (txDC(),xbb, 350, 40, 40,ibb, 0, 0,RGB(237,28,36));



        if(GetAsyncKeyState ('W')&&y==level_zemly)
        {

        //txPlaySound ("jump.wav");
        y-=102;
        }

        if(y<level_zemly)
        {
        y+=2;
        }

         if(y>level_zemly)
        {
        y-=1;
        }

        if(GetAsyncKeyState ('D'))
        {
        image =image_right;
        x_Marrio+=5;
        x-=5;
        xbb-=err;
        rt-=5;
        lt-=5;

        }


        if(GetAsyncKeyState ('A'))
        {
        image =image_left;
        x_Marrio-=5;
        x+=5;
        xbb+=err;
        rt+=5;
        lt+=5;
        if(x_Marrio>1128&&x_Marrio<1167&&y<250&&f<8)
        {
        txTextOut(50,50,"было сделано касание с загадным блоком");
        coin+=1;
        f+=1;
        }

        }
                    //Условие касание и гравитации
        if(x_Marrio<312)//x_Marrio>564&& x_Marrio<630 //&& x_Marrio>514 && x_Marrio<580
        {
        txTextOut(50,50,"здесь предел карты");
        txSetColor(TX_BLACK);
        x_Marrio=x_Marrio_old;
        x=x_old;
        }

        if(x_Marrio>525 && x_Marrio<617 && y>323)//x_Marrio>564&& x_Marrio<630 //&& x_Marrio>514 && x_Marrio<580
        {
        txTextOut(50,50,"произошло касание");
        txSetColor(TX_BLACK);
        x_Marrio=x_Marrio_old;
        x=x_old;
        //level_zemly = 340;
        xbb=xbb_old;



        }

           if(x_Marrio>597 && x_Marrio<662 && y<273-101)//x_Marrio>564&& x_Marrio<630 //&& x_Marrio>514 && x_Marrio<580
        {
        txTextOut(50,50,"произошло касание");
        txSetColor(TX_BLACK);
        x_Marrio=x_Marrio_old;
        x=x_old;
        //level_zemly = 340;
        xbb=xbb_old;
        }

        if(x_Marrio>525 && x_Marrio<617 && y<323)
        {
        level_zemly = 323-50;
        }
        //y=y_old;
        if(x_Marrio<525 ||x_Marrio>617)//x_Marrio>564&& x_Marrio<630 //&& x_Marrio>514 && x_Marrio<580
        {
        txTextOut(50,50,"марио упал с трубы");
        txSetColor(TX_BLACK);
        //x_Marrio=x_Marrio_old;
        //x=x_old;
        level_zemly = 340;

        }

        /*  if((x_Marrio<525 && x_Marrio<617))
        {
        // txTextOut(50,50,"произошло касание");
        //txSetColor(TX_BLACK);
        // x_Marrio=x_Marrio_old;
        //x=x_old;
        level_zemly=340;
        } */
        /* if((x_Marrio>525 && x_Marrio>617))
        {
        // txTextOut(50,50,"произошло касание");
        //txSetColor(TX_BLACK);
        // x_Marrio=x_Marrio_old;
        //x=x_old;
        level_zemly=340;
        }
        */
        if(x_Marrio>382&&x_Marrio<432&&y<250&&c<8)
        {
        txPlaySound ("money.wav");
        txTextOut(50,50,"было сделано касание с загадным блоком");
        coin+=1;
        c+=1;
        }

        if(x_Marrio>616&&x_Marrio<662&&y<250&&d<8)
        {
        txPlaySound ("money.wav");
        txTextOut(50,50,"было сделано касание с загадным блоком");
        coin+=1;
        d+=1;
        }

        if(x_Marrio>1102&&x_Marrio<1132&&y<250&&f<8)
        {
         txPlaySound ("money.wav");
        txTextOut(50,50,"было сделано касание с загадным блоком");
        coin+=1;
        f+=1;
        }

        if(x_Marrio>1517&&x_Marrio<1547&&y<250&&g<8)
        {
        txPlaySound ("money.wav");
        txTextOut(50,50,"было сделано касание с загадным блоком");
        coin+=1;
        g+=1;
        }

        if(x_Marrio>1752&&x_Marrio<1786&&y<250&&o<8)
        {
        txPlaySound ("money.wav");
        txTextOut(50,50,"было сделано касание с загадным блоком");
        coin+=1;
        o+=1;
        }

        if(x_Marrio>2247&&x_Marrio<2277&&y<250&&u<8)
        {
        txPlaySound ("money.wav");
        txTextOut(50,50,"было сделано касание с загадным блоком");
        coin+=1;
        u+=1;
        }

        if(x_Marrio>1212 && x_Marrio<1307 && y>323)//x_Marrio>564&& x_Marrio<630 //&& x_Marrio>514 && x_Marrio<580
        {
        txTextOut(50,50,"произошло касание");
        txSetColor(TX_BLACK);
        x_Marrio=x_Marrio_old;
        x=x_old;
        xbb=xbb_old;
        //level_zemly = 340;

        //y=y_old;
        }

        if(x_Marrio>1892&& x_Marrio<2057 && y>339)//x_Marrio>564&& x_Marrio<630 //&& x_Marrio>514 && x_Marrio<580
        {
        txTextOut(50,50,"произошло касание");
        txSetColor(TX_BLACK);
        x_Marrio=x_Marrio_old;
        x=x_old;
        xbb=xbb_old;
        //level_zemly = 340;

        //y=y_old;
        }

         if(x_Marrio>1926&& x_Marrio<2057 && y>305)//x_Marrio>564&& x_Marrio<630 //&& x_Marrio>514 && x_Marrio<580
        {
        txTextOut(50,50,"произошло касание");
        txSetColor(TX_BLACK);
        x_Marrio=x_Marrio_old;
        x=x_old;
        xbb=xbb_old;
        //level_zemly = 340;
        //y=y_old;
        }

             if(x_Marrio>1926&& x_Marrio<2057 && y<305)//x_Marrio>564&& x_Marrio<630 //&& x_Marrio>514 && x_Marrio<580
        {
          level_zemly = 323-50;
        }

        /*      if(!x_Marrio>1212 && !x_Marrio<1307)//x_Marrio>564&& x_Marrio<630 //&& x_Marrio>514 && x_Marrio<580
        {
        txTextOut(50,50,"произошло касание");
        txSetColor(TX_BLACK);
        //x_Marrio=x_Marrio_old;
        // x=x_old;
        level_zemly = 340;
        */
        //y=y_old;

        if(x_Marrio>1212 && x_Marrio<1307 && y<323)
        {
        level_zemly = 323-50;
        }
        if(x_Marrio>1892 && x_Marrio<1962 && y<356)
        {
        level_zemly = 356-50;
        }
        char str[100];
        sprintf(str,"x = %d y = %d", x_Marrio, y);
        txSetColor(TX_BLACK);
        txTextOut(10,10,str);

        char money[100];
        sprintf(money,"Количество монет:%d", coin);
        txSetColor(TX_YELLOW);
        txTextOut(400,30,money);

        char t[100];
        sprintf(t,"х 2:%d",xbb);
        txSetColor(TX_YELLOW);
        txTextOut(400,80,t);

        /*  if(txMouseButtons() == 1&&
        txMouseX() > 525     &&
        txMouseX() < 617     &&
        txMouseY() > 323     &&
        txMouseY() < 390
        )
        {
        coin+=9999999;
        }
        */
        /*     if(x_Marrio<752 && x_Marrio<827)
        {
        txTextOut(50,50,"произошло касание");
        txSetColor(TX_BLACK);
        // x_Marrio=x_Marrio_old;
        //x=x_old; txSleep(1);

        level_zemly=340;
        }
        */
        /*       if(x_Marrio<1212 || x_Marrio>1307)
        {
        txTextOut(50,80,"упал со 2 трубы");
        txSetColor(TX_BLACK);
        // x_Marrio=x_Marrio_old;
        //x=x_old; txSleep(1);

        level_zemly=340;
        }
        */
        if(x_Marrio>752 && x_Marrio<832 )//x_Marrio>564&& x_Marrio<630 //&& x_Marrio>514 && x_Marrio<580
        {

        txTextOut(50,50,"ТЫ ПАДАЕШЬ");
        txSetColor(TX_BLACK);
        //  x_Marrio=x_Marrio_old;
        //  x=x_old;
        level_zemly = 500;
        //xbb=xbb_old;



        }
        if(xbb<rt)
        {
        xbb+=2;
        }
    /*
        if(xbb>1258)
        {
        direction=1;
        }
    */
        if(xbb>lt)
        {
        xbb-=2;
        }

        if(x_Marrio>xbb&&x_Marrio<xbb+40&&y<340)
        {
        visible=false;
        }



        if(x_Marrio<2557&&2602>x_Marrio)
        {
         The_world=2;
        }

        if( The_world=2)
        {
         maP = map2;
        }

         if( The_world=1)
        {
         maP = map1;
        }


          txEnd();
        txSleep(1);
         }
        txDeleteDC (ibb);
        txDeleteDC (map1);
        txDeleteDC (image_right);
        txDeleteDC (image_left);
        txDeleteDC (map2);
        txDisableAutoPause ();

        txTextCursor (false);
        return 0;
        }

