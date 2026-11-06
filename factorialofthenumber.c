//factorial of number 
// addition of the factorial number

#include<stdio.h>
int main(){
    
    int fact1,fact2;

    printf("enter the number");
    scanf("%d %d",&fact1,&fact2);

    int countfact1=0;
    int factsum1=0;
    printf("fact1 are:");
    for( int i=1; i<=fact1; i++){

    if (fact1 % i == 0){
      
   printf("%d ",i);
   countfact1++;
     factsum1=factsum1+i;                   //to add factorial number
  
    }
 }printf("\nSum = %d\n",factsum1);
  printf("count of fact1 :%d ",countfact1);


    int countfact2=0;
    int factsum2=0;

    printf("\nfact2 are:");

    for( int j=1; j<=fact2; j++){

    if (fact2 % j == 0){
     
     printf("%d ",j);  
     countfact2++; 
     factsum2=factsum2+j;                   // to add factorial number
   
}
}printf("\nSum = %d\n",factsum2);
printf("count of fact2 :%d ",countfact2);
}