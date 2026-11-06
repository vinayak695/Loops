#include<stdio.h>
int main(){
    
    int i,num;

    printf("enter the number");
    scanf("%d",&num);

    for(i=1; i<=num; i++)
    {
        if ( i%2==0)
       { 
        printf("%d\n",i);
    }
}
}