#include<stdio.h>
int main(){

    int num;

    printf("enter the number:");
    scanf("%d",&num);

    int temp=num;
    int sum=0;
    for(; num>0;){

        int digit=num % 10;
        sum=sum+digit*digit*digit; 
        num=num/10;
    } 
    if (temp==sum){
        printf("it is Armstrong number:");
    } else{
        printf("it is not and Armstrong number");
    }
    }

