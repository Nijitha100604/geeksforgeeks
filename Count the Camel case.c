#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[20];
    gets(str);
    int count =0;
    for(int i=0; i<strlen(str); i++)
    {
        if(isupper(str[i])!=0)
            count++;
    }
    printf("%d",count );
}
