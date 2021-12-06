#include<stdio.h>

int main(){
    int i,j,a,s,x=1;
    scanf("%d",&a);
    if(a>=0 && a<=10){
        for(i=1; i<=a; i++){
            for(s=1; s<=a-i; s++){
                printf(" ");
            }
            for(j=1; j<=i; j++){
                printf("%d ", x);
                x++;
            }printf("\n");
        }
    }//change the code as you may like...
    else{
        printf("Outside the range");
    }
}//dont just copy and paste it in your assignmenst.
