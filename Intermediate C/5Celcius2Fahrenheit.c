#include<stdio.h>
void main()
{
    int cel;
    float fah;
    printf("Enter the temperature in celcius");
    scanf("%d",&cel);
    fah = (cel*(9/5))+32;
    printf("The corresponding temperature in fahrenheit is %f",fah);
}
