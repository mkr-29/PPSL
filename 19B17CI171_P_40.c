#include<stdio.h>
#include<stdlib.h>
int fact(int x){
    int f=1,i;
    for(i=1; i<=x; i++){
            f=f*i;
    }
    return f;
}
void prime(int x){
    int i,p=0;
    for(i=2; i<=x/2; i++){
        if(x%i==0){
            p=1;
        }
        else{
            p=0;
        }
    }
    if(p==1){
        printf("Not prime\n");
    }
    else{
        printf("Prime\n");
    }
}
void odd_even(int z){
    if(z%2==0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
}//edit the code as you may like
int main()
{//but dont paste it as it is for the assignments.
    int mc,a;
    scanf("%d",&mc);
    if(mc==1){
        scanf("%d",&a);
        if(a<1 || a>50){
            printf("Outside the range");
        }
        else{
            printf("Factorial value is %d\n",fact(a));
        }
        return main();
    }
    else if(mc==2){
        scanf("%d",&a);
        if(a<1 || a>50){
            printf("Outside the range");
        }
        else{
            prime(a);
        }
        return main();
    }
    else if(mc==3){
        scanf("%d",&a);
        if(a<1 || a>50){
            printf("Outside the range");
        }
        else{
            odd_even(a);
        }
        return main();
    }
    else if(mc==4){
        exit(0);
    }
}
