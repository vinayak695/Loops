#include<stdio.h>
int main(){
    int fact;

    scanf("%d",&fact);

    for(int num=1; num<=fact; num++){

    int sum=0;

    for(int i=1; i<num; i++){

        if(num % i==0){
            sum=sum+i;
        }
    }
    if (num==sum){
        printf("%d ",num);
   
    }

}
}