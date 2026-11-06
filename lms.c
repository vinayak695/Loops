#include<stdio.h>
float average_num(int num1,int num2,int num3);

int main(){

    int num1,num2,num3;

    scanf("%d %d %d",&num1,&num2,&num3);

   float average= average_num(num1,num2,num3);

    printf("%f",average);

    return 0;

}
   float average_num(int num1,int num2,int num3)
    {
        int sum=0;
         sum=sum+num1+num2+num3;
        float average=(float)sum/3;
        return average;
    }    
        
        