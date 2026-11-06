#include<stdio.h>
int main(){
    int num,digit;

    printf("enter the number");
    scanf("%d",&num);


     int largest=0;
    for(; num>0 ;)
    {
        digit=num%10;

    if (digit>largest)
    {
        largest=digit;
    }
    num=num/10;  
} printf("Largest digit is: %d\n", largest);
}




