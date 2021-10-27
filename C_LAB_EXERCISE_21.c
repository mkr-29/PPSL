#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,s=0;
    for(a=1; a>-1; a++)
    {
        scanf("%d",&b);
        s=s+b;
        if(b==-1)
        {//change the code as you may like but dont paste the code as it is in your assignemnts
            break;
        }
    }
    printf("%d",s+1);
}
