#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20],str2[20],str3[20];
    char a;
    int i,j,cmp;
    printf("Enter a string");
    scanf("%s",&str1); 
    printf("Enter another string");
    scanf("%s",&str2);
    printf("The strings given is..\n%s\n%s\n",str1,str2);
    i=strlen(str1); j=strlen(str2);
    printf("The string length of %s is %d\nand %s is %d\n",str1,i,str2,j);
    cmp= strcmp(str1,str2);
    if(cmp==0)
    {printf("Strings are equal");}
    else if (cmp>0)
    {printf("%s is greater",str1);}
    else
    {printf("%s is greater",str2);}
    strcat(str1," ");
    strcat(str1,str2);
    printf("\nThe concatenated string is %s\n",str1);
     

} 