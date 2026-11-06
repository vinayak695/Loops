// Sum of all factors (except the number itself) = the number
// like number=6
// factor are 1,2,3
// then 1+2+3=6

#include<stdio.h>
int main(){
    int fact;

    scanf("%d",&fact);

    int sum=0;
    for(int i=1; i<fact; i++)
    {
        if(fact % i==0)
        {
            sum=sum+i;
        }
    }
    if (fact==sum){
        printf("it is perfect number");
    }else{
        printf("not a perfect number");
    }

}