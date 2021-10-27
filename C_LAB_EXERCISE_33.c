#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b;
    float s=0;
    scanf("%d",&a);
    for(b=1; b<=a; b++)   //please change the code as you may like but dont copy and paste it in your assignmemts
    {
        s=s+(float)1/(b*b*b);
    }
    printf("%0.8f",s);
    
}
