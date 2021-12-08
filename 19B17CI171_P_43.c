#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int mc;
    int ppy;
    int y=0;
    float inv;
    float alt;
    scanf("%d",&mc);
    scanf("%d",&ppy);
    alt = mc;
    if ( ( mc > 100 && mc < 1000 ) && ( ppy > 100 && ppy <1000 ) )
    {//dont just copy and paste
        while(1)
        {
            y++;
            alt= (float) alt * 1.12;
            inv =(float)( (ppy*y)- (mc-100) );
            if(alt<inv)
            {//edit the code as you may like
                y = y-1;
                break;
            }
        }//Source : //source: https://bit.ly/3Dnjzcq
    printf("Minimum life of machine %d years",y);
    }
    else
    {
        printf("Outside the range");
    }
    return 0;
}
