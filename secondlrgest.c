#include<stdio.h>
int main (){
    int numbers;

    scanf("%d",&numbers);

    int temp=numbers;

    int largest=0;
    int secondlargest=0;
while(numbers > 0)
{
    int digit = numbers % 10;

    if(digit > largest)
    {
        secondlargest = largest;
        largest = digit;
    }
    else if(digit > secondlargest)
    {
        secondlargest = digit;
    }

    numbers = numbers / 10;
}

printf("largest = %d\n", largest);
printf("secondlargest = %d", secondlargest);

}