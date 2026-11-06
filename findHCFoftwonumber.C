#include<stdio.h>
int main(){
    int smallest,num1,num2 ;

    scanf("%d %d",&num1,&num2);

   if(num1<num2)
    smallest=num1;
    else
    smallest=num2;

    int hcf=0;
    for(int i=1; i<=smallest; i++){
        if(num1 % i == 0 && num2 % i == 0)
        hcf=i;
        
    }printf("%d",hcf);
}