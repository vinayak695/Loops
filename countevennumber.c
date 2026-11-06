#include<stdio.h>
int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);

    int count=0;
    for(int i=0; i<=num; i++)
    {
      if(i%2==0)  
      count++;
    }printf("%d",count);
}