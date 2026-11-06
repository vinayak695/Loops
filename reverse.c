#include<stdio.h>
int main(){
    int num,digit,rev =0,num1;

    printf("enter the number");
    scanf("%d",&num);
    num1=num;
    for(; num>0;)
    {
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;
    }printf("reversed number is:%d\n",rev);

    if (rev==num1)                                   //to check number is palandrom or not
    {
        printf("it is palandrom");
    }else
    printf("it is not palandrom");
}