#include<stdio.h>  
int main ()  
{//dont just copy and paste
    float arr[100],avg,s=0;
    int i,n;
    scanf("%d",&n);
    if(n<1 || n>100){
        printf("Error! number should in range of (1 to 100).");
    }//change the code as you may like
    else{
        for(i=0; i<n; i++)  
        {  
            scanf("%f",&arr[i]);  
        }
        for(i=0; i<n; i++){
            s=s+arr[i];
        }
        avg=s/n;
        printf("Average = %.2f",avg);
    }
}//source: https://bit.ly/3Dnjzcq
