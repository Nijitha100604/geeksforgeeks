#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[20];
    gets(str);
    char ltr[20];
    int k=0;
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i] != ' ')
            ltr[k++]=str[i];
    }
    ltr[k]='\0';
    printf("%s", ltr);
}
