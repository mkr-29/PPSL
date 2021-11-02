#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    char h, a, g;
    int age;
    double am, temp;
    scanf(" %c",&h);
    scanf(" %d",&age);
    scanf(" %c",&a);
    scanf(" %c",&g);
    scanf(" %lf",&am);

    if (((h !='E')&&(h !='P')) || ((a !='C')&&(a !='V')) || ((g !='M')&&(g !='F')) || (age<=0) || (am<=0))
    {
        printf("Input unspecified.");
    }
    else if ((age>35) || (age<25))
    {
        printf("You can not be insured.");
    }
    else if((h == 'E')&&(a == 'C')&&(g == 'M'))
    {
        temp=4*(am/1000);
        if (am <= 200000)
        {
            printf("%lf",temp);
        }
        else
        {
            printf("Policy amount exceed the limit.");
        }
    }
    else if((h=='E')&&(a=='C')&&(g=='F'))
    {
        temp=3*(am/1000);
        if (am <= 100000)
        {
            printf("%lf",temp);
        }
        else
        {
            printf("Policy amount exceed the limit.");
        }
    }
    else if((h=='P')&&(a=='V')&&(g=='M'))
    {
        temp=6*(am/1000);
        if (am <= 10000)
        {
            printf("%lf",temp);
        }
        else
        {
            printf("Policy amount exceed the limit.");
        }
    }
    else
    {
        printf("You can not be insured.");
    }

    return 0;
}
