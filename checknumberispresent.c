#include<stdio.h>
int main(){
    int  numbers,num;

    printf("enter the numbers :");
    scanf("%d",&numbers);
    
    printf("enter the num :");
    scanf("%d",&num);

            int found=0;
            for(; numbers>0;){

            int digit=numbers%10;
            if(digit==num)
            {
               found=1;
               break;
            }
            numbers=numbers/10;
        }
        
            if (found)
                printf("number is present");
             else
                printf("not found");
        
}

