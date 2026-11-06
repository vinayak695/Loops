#include<stdio.h>
int main(){
    int num;

    scanf("%d",&num);

    int smallest=9;                     // digit starts from 1 to 9

    for(;num>0;){

    int digit=num%10;   

    if(digit< smallest){
        smallest= digit;
    }
   num= num/10;
    
}printf("smallest is : %d",smallest);
}