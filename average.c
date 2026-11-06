#include<stdio.h>
int main(){
    
    int i,num;

    printf("enter the number");
    scanf("%d",&num);

    int average;
    int sum =0;

    for(i=1; i<=num; i++)
    {
         sum= sum + i;
         average=sum /num;   
    }                                                                                  
        printf("%d\n",sum);
         printf("%d\n",average);
}