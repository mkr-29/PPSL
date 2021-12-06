#include<stdio.h>
int main()
{
    int mc,ppy;
    int y=0,i;
    scanf("%d",&mc);
    scanf("%d",&ppy);
    if(mc<100 || mc>1000 || ppy<100 || ppy>1000){
        printf("Outside the range");
    }//edit the cost as you may like.
    else{
        y=mc/120;
        printf("Minimum life of machine %d years",y);
    }
}//dont just copy and paste the code for your assignmnets
