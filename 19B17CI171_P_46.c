#include<stdio.h>
int fib(int x){
    if(x==0){
        return 0;
    }
    else if(x==1){
        return 1;
    }
    else{
        return fib(x-1)+fib(x-2);
    }
}//edit the code as you may like
int main(){//dont just copy and paste
    int a;
    scanf("%d",&a);
    if(a<1 || a>15){
        printf("Outside the range");
    }
    else{
        printf("%d\n",fib(a));
    }
}
