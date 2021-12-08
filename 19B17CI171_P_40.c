#include<stdio.h>
#include<stdlib.h>
void fact(int x){
    int f=1,i;
    for(i=1; i<=x; i++){
            f=f*i;
    }
    printf("Factorial value is %d\n",f);
}
void prime(int x){
    int i,p=0;
    for(i=2; i<=x/2; i++){
        if(x%i==0){
            p=1;
            break;
        }
        else{
            p=0;
        }
    }
    if(p==1){
        printf("Not prime\n");
    }
    else{
        printf("Prime number\n");
    }
}
void odd_even(int z){
    if(z%2==0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
}
int main()
{
    int mc,a;
    while(mc!=4){
        scanf("%d",&mc);
        switch(mc){
            case 1:
                scanf("%d",&a);
                if(a<1 || a>50){
                    printf("Outside the range\n");
                }
                else{
                    fact(a);
                }
                break;
            case 2:
                scanf("%d",&a);
                if(a<1 || a>50){
                    printf("Outside the range\n");
                }
                else{
                    prime(a);
                }
                break;
            case 3:
                scanf("%d",&a);
                if(a<1 || a>50){
                    printf("Outside the range\n");
                }
                else{
                    odd_even(a);
                }
                break;
            case 4:
                exit (0);
                break;
        }
    }
}
