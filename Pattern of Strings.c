#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[20];
    gets(str);
    int len = strlen(str);
    for(int i=len; i>=1; i--)
    {
        str[i]='\0';
        printf("%s\n", str);
    }
}
