#include<stdio.h>
int main(){

    int num;
     
    printf("enter the number:");
    scanf("%d",&num);


     int even=0;
     int odd=0;

    for(; num>0;){
        int digit=num%10;
        if (digit%2==0)
        {
            even++;
        }
        else{
            odd++;
        }num=num/10;
    }printf("total even numbers are :%d\n",even);
    printf("total odd numbers are :%d",odd);
 
}