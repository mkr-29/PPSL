#include<stdio.h>  
int main ()  
{//Source : //source: https://bit.ly/3Dnjzcq
    float arr[100];
    int i,n;
    scanf("%d",&n);
    if(n<1 || n>100){
        printf("Error! number should in range of (1 to 100).");
    }////edit the code as you may like
    else{
        for(i=0; i<n; i++){  
            scanf("%f",&arr[i]);  
        }
        for (int i = 0; i < n; i++) {
            if (arr[0] < arr[i]){
                arr[0] = arr[i];
            }
        }//dont just copy and paste
        printf("Largest element = %.2f",arr[0]);
    }
    return 0;
}
