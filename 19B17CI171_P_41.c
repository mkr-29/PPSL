#include<stdio.h>  
  
int main()  
{//edit the code as you may like
    int y, z;  
    float i, x;  
   
    scanf("%d", &y);
    if(y>=0&&y<=11)
    {//but dont just copy and paste for your assignments
        for(z = 1; z <= y; z++)  
      {  
        for(x = 5.5; x <= 7.5; x += 0.5)  
        {  
          i = 2 + (z + 0.5 * x);  
  
          printf("y=%d, x=%0.2f and i=%0.2f\n",z,x,i);  
        }  
      }  
    }
    else
    {
        printf("Outside the range");
    }
  
    return 0;  
}
