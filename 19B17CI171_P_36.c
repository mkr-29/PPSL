#include<stdio.h>

int main(){
    int i,j,a,x=1;
    scanf("%d",&a);
    if(a>=0 && a<=10){
        for(i=1; i<=a; i++){
            for(j=1; j<=i; j++){
                printf("%d ",x);
                x+=1;
            }printf("\n");
        }
    }//change the code as you may like
    else{
        printf("Outside the range");
    }
}//dont just copy and paste
