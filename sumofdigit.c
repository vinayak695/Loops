#include<stdio.h>
int main(){
    
    int i,num,sum;

    printf("enter the number");
    scanf("%d",&num);
    sum=0;
    for(i=0; i<=num; i++)
    {
        sum=sum+i;
    }printf("sum is %d",sum);
}