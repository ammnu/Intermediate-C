#include<stdio.h>
#include<string.h>
void main()
{
    char str[10];
    int i,j,len,count=0;
    printf("Enter a string");
    scanf("%s",&str);
    len = strlen(str);
    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
   
    {
       count++; 
    }}
     
    if(count>0)
    {
       printf("The string is not palindrome");
    }
    else
    {
         printf("The string is  palindrome");
    }

}

