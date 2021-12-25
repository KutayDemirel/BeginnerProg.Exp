#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, originalNum, num, lastDigit, sum;
    long fact;

    printf("Enter a number   :");
    scanf("%d", &num);

    originalNum = num;

    sum = 0;

    while(num > 0){
        lastDigit=num%10;
        printf("%d's factorial is\t",lastDigit);
        fact=1;
        for(i=1;i<=lastDigit;i++)
        {
            fact=fact*i;
        }
    printf("%d\n",fact);
    sum=sum+fact;

    num=num/10;

    }
    if(originalNum==sum)
        printf("\n%d is Strong number.\n", originalNum);
    else
        printf("\n%d is not Strong number.\n", originalNum);
  return 0;
}

