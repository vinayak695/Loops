#include<stdio.h>
int main(){
    int num;
    
    printf("enter the number:");
    scanf("%d",&num);

    int count=0;
    for(int i=1; i<=num ;i++)
    {
        count++;
    }
    printf("%d",count);


}