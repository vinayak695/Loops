#include<stdio.h>
int main(){

    int num,rev=0;
     
    printf("enter the number:");
    scanf("%d",&num);

    for(; num>0;){

        
         rev=rev*10+(num%10);
        num=num/10;

    }

    int temp=rev;

    printf(" even numbers are :");                      //to pritn even number

    for(;rev>0;){
        int digit= rev % 10;
        if (digit % 2 == 0)
        {
            printf("%d",digit);
        } 
       rev=rev/10;
    }

     printf("\n odd numbers are :");                   //to print odd number

    for(;temp>0;){
        int digit= temp % 10;
        if (digit % 2 != 0)
        {
            printf("%d",digit);
        } 
       temp=temp/10;
    }
}
