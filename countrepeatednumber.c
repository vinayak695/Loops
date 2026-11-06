#include<stdio.h>
int main(){
    int numbers,num;

    printf("enter the numbers and num");
    scanf("%d %d",&numbers,&num);

     int count=0;
    for(;numbers>0;){
        int digit=numbers%10;
        if (digit==num)
        count++;
        numbers=numbers/10;
    }  
        printf("num repeated is :%d",count);

    }