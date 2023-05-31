#include<stdio.h>
#include<ctype.h>

void Uppercase(char *str)
{
    int i=0;
    while(str[i])
    {
        str[i] = toupper(str[i]);
        i++;
    }
}

void Lowercase(char *str)
{
    int i=0;
    while(str[i])
    {
        str[i] = tolower(str[i]);
        i++;
    }
}

void main()
{
    char str[10];
    printf("Enter a string");
    scanf("%s",&str);

    Uppercase(str);
    printf("Uppercase is %s \n",str);

    Lowercase(str);
    printf("Lowercase is %s",str);


}