#include<stdio.h>

int main(){
    int i,j,a;
    scanf("%d",&a);
    if(a>=0 && a<=10){
        for(i=1; i<=a; i++){
            for(j=1; j<=i; j++){
                printf("%d ",i);
            }printf("\n");
        }
    }//edit the code as you may like
    else{
        printf("Outside the range");
    }
}//just dont copy and paste
