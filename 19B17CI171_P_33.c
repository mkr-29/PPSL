#include<stdio.h>

int main(){
    int i,j,a;
    scanf("%d",&a);
    if(a>=0 && a<=10){
        for(i=1; i<=a; i++){
            for(j=1; j<=i; j++){
                printf("* ");
            }printf("\n");
        }
    }//chnage the code as u may like
    else{
        printf("Outside the range");
    }//dont copy and paste to complete assignments.
}
